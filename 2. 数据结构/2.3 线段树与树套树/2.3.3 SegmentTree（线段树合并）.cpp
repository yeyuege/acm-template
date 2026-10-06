struct Info{
    int cnt = 0, id = 0;
    Info operator+(const Info& o) const {
        return {cnt + o.cnt, id};
    }
};

const int N = 2e6 + 5;
const int Z = 1e5 + 5;

struct node{
    int l, r, ls, rs;
    Info v;
} tr[N << 3];
int tot, rt[N];

void nownode(int &p, int l, int r) {
    p = ++tot;
    tr[p].l = l, tr[p].r = r;
    if (l == r) tr[p].v.id = l;
}

void push_up(int p) {
    //
}

void modify(int& p, int l, int r, int x, int v) {
    if (!p) nownode(p, l, r);
    if (l == r) {
        tr[p].v.cnt += v;
        return;
    }

    int mid = floor((l + r) / 2.0);
    if (x <= mid) modify(tr[p].ls, l, mid, x, v);
    else modify(tr[p].rs, mid + 1, r, x, v);
    push_up(p);
}

int merge(int rt1, int rt2, int l, int r) {
    if (!rt1 || !rt2) return rt1 | rt2;
    if (l == r) {
        tr[rt1].v.cnt += tr[rt2].v.cnt;
        return rt1;
    }

    int mid = floor((l + r) / 2.0);
    tr[rt1].ls = merge(tr[rt1].ls, tr[rt2].ls, l, mid);
    tr[rt1].rs = merge(tr[rt1].rs, tr[rt2].rs, mid + 1, r);
    push_up(rt1);
    return rt1;
}
