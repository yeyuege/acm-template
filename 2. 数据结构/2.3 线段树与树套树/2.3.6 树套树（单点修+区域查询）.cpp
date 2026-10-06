const int N = 2e7 + 5;
struct DS {
    int n;
    int tot, ls[N], rs[N], sum[N], ort[N];
    int rt;
    DS(){}
    DS(int n_) {
        init(n_);
    }

    void init(int n_) {
        n = n_;
        tot = 0;
        rt = 0;
    }

    void newnode(int &p) {
        p = ++tot;
        ls[p] = rs[p] = sum[p] = ort[p] = 0;
    }

    void upd2(int &p, int l, int r, int s, int t, int s1, int t1, int val) {
        if (l > t || r < s) return;
        if (!p) newnode(p);
        upd3(ort[p], 1, n, s1, t1, val);
        if (l == r) return;
        int mid = l + r >> 1;
        upd2(ls[p], l, mid, s, t, s1, t1, val);
        upd2(rs[p], mid + 1, r, s, t, s1, t1, val);
    }

    void upd2(int s, int t, int s1, int t1, int val) {
        upd2(rt, 1, n, s, t, s1, t1, val);
    }
    
    void upd3(int &p, int l, int r, int s, int t, int val) {
        if (l > t || r < s) return;
        if (!p) newnode(p);

        sum[p] += val;
        if (l == r) return;
        int mid = l + r >> 1;
        upd3(ls[p], l, mid, s, t, val);
        upd3(rs[p], mid + 1, r, s, t, val);
    }
    
    int qur2(int &p, int l, int r, int s, int t, int s1, int t1) {
        if (l > t || r < s) return 0;
        if (!p) return 0;
        if (s <= l && r <= t) return qur3(ort[p], 1, n, s1, t1);
        int mid = l + r >> 1;
        return qur2(ls[p], l, mid, s, t, s1, t1) + qur2(rs[p], mid + 1, r, s, t, s1, t1);
    }

    int qur2(int s, int t, int s1, int t1) {
        return qur2(rt, 1, n, s, t, s1, t1);
    }
    
    int qur3(int &p, int l, int r, int s, int t) {
        if (l > t || r < s) return 0;
        if (!p) return 0;
        if (s <= l && r <= t) return sum[p];
        int mid = l + r >> 1;
        return qur3(ls[p], l, mid, s, t) + qur3(rs[p], mid + 1, r, s, t);
    }
} seg;
