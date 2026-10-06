struct Point {
    ll x = 0, y = 0;
    Point(){}
    Point(int x_, int y_) {
        x = x_, y = y_;
    }

    Point operator-(const Point& b) const {
        return Point(x - b.x, y - b.y);
    }
};

struct Line {
    Point p1, p2;
    int id;
    Line(){
        id = -1;
    }
    Line(Point p1_, Point p2_, int id_ = -1) {
        p1 = p1_, p2 = p2_;
        id = id_;
    }
};

int cmp(Line l1, Line l2, ll x) {
    ll y1, x1, y2, x2;
    if (l1.p1.x == l1.p2.x) {
        y1 = max(l1.p1.y, l1.p2.y);
        x1 = 1;
    }
    else {
        y1 = l1.p1.y * (l1.p2.x - l1.p1.x) + (l1.p2.y - l1.p1.y) * (x - l1.p1.x);
        x1 = l1.p2.x - l1.p1.x;
    }
    if (l2.p1.x == l2.p2.x) {
        y2 = max(l2.p1.y, l2.p2.y);
        x2 = 1;
    }
    else {
        y2 = l2.p1.y * (l2.p2.x - l2.p1.x) + (l2.p2.y - l2.p1.y) * (x - l2.p1.x);
        x2 = l2.p2.x - l2.p1.x;
    }

    if ((__int128)y1 * x2 == (__int128)y2 * x1) return 0;
    else if ((__int128)y1 * x2 > (__int128)y2 * x1) return 1;
    else return -1;
}

const int N = 1e6 + 6;
struct DS {
    int n;
    int vis[N], ls[N], rs[N], rt, tot;
    Line line[N];

    DS(){}
    DS(int n_) {
        init(n_);
    }

    void init(int n_) {
        n = n_;
        rt = 0;
        tot = 0;
    }

    void newnode(int &p) {
        p = ++tot;
        ls[p] = rs[p] = vis[p] = 0;
    }

    void ins1(int& p, int l, int r, int s, int t, Line& v) {
        if (l > t || r < s) return;
        if (!p) newnode(p);
        if (s <= l && r <= t) {
            ins2(p, l, r, v);
            return;
        }
        int mid = l + r >> 1;
        ins1(ls[p], l, mid, s, t, v);
        ins1(rs[p], mid + 1, r, s, t, v);
    }

    void ins(int s, int t, Line& v) {
        ins1(rt, 1, n, s, t, v);
    }

    void ins2(int &p, int l, int r, Line v) {
        if (!p) newnode(p);
        int mid = l + r >> 1;
        if (!vis[p]) {
            line[p] = v;
            vis[p] = 1;
            return;
        }
        else {
            if (cmp(v, line[p], mid) > 0) {
                swap(line[p], v);
            }
            else if (cmp(v, line[p], mid) == 0 && v.id < line[p].id) swap(line[p], v); 
        }
        if (l == r) return;
        if (cmp(v, line[p], l) > 0 || (!ls[p] && cmp(v, line[p], l) >= 0)) {
            ins2(ls[p], l, mid, v);
        }
        if (cmp(v, line[p], r) > 0 || (!rs[p] && cmp(v, line[p], r) >= 0)) {
            ins2(rs[p], mid + 1, r, v);
        }
    }

    void qur(int p, int l, int r, ll x, Line& v) {
        if (l > x || r < x || !p) return;
        if (vis[p]) {
            if (v.id == -1) v = line[p];
            else {
                if (cmp(line[p], v, x) > 0) v = line[p];
                else if (cmp(line[p], v, x) == 0) {
                    if (line[p].id < v.id) v = line[p];
                }
            }
        }
        if (l == r) return;
        int mid = l + r >> 1;
        qur(ls[p], l, mid, x, v);
        qur(rs[p], mid + 1, r, x, v);
    }
    Line qur(ll x) {
        Line tmp;
        qur(rt, 1, n, x, tmp);
        return tmp;
    }
} seg;
