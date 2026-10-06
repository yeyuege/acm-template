const int N = 2e5 + 5;

struct node{
    int ls, rs;
    ll cnt = 0;
}tr[N << 5];
int tot, rt[N], id;

void nownode(int& p) {
    p = ++tot;
}

int merge(int a, int b) {
    if (!a || !b) return a | b;

    tr[a].cnt += tr[b].cnt;
    tr[b].cnt = 0;

    tr[a].ls = merge(tr[a].ls, tr[b].ls);
    tr[a].rs = merge(tr[a].rs, tr[b].rs);

    return a;
}

void split(int& p, int& q, int l, int r, int s, int t) {
    if (!p) return;
    if (r < s || l > t) return;

    if (s <= l && r <= t) {
        q = p;
        p = 0;
        return;
    }

    if (!q) nownode(q);

    int mid = l + r >> 1;
    split(tr[p].ls, tr[q].ls, l, mid, s, t);
    split(tr[p].rs, tr[q].rs, mid + 1, r, s, t);
    tr[p].cnt = tr[tr[p].ls].cnt + tr[tr[p].rs].cnt;
    tr[q].cnt = tr[tr[q].ls].cnt + tr[tr[q].rs].cnt;
}

void modify(int& p, int l, int r, int v, ll d) {
    if (r < v || l > v) return;
    if (!p) nownode(p);
    if (l == r) {
        tr[p].cnt += d;
        return;
    }

    int mid = l + r >> 1;
    modify(tr[p].ls, l, mid, v, d);
    modify(tr[p].rs, mid + 1, r, v, d);
    tr[p].cnt = tr[tr[p].ls].cnt + tr[tr[p].rs].cnt;
}

ll query(int p, int l, int r, int x, int y) {
    if (r < x || l > y) return 0;
    if (!p) return 0;

    if (x <= l && r <= y) {
        return tr[p].cnt;
    }

    int mid = l + r >> 1;
    return query(tr[p].ls, l, mid, x, y) + query(tr[p].rs, mid + 1, r, x, y);
}

ll kthnum(int p, int l, int r, ll k) {
    if (!p) return -1;

    if (l == r) {
        if (tr[p].cnt >= k) return l;
        else return -1;
    }

    int mid = l + r >> 1;
    if (tr[tr[p].ls].cnt >= k) return kthnum(tr[p].ls, l, mid, k);
    else return kthnum(tr[p].rs, mid + 1, r, k - tr[tr[p].ls].cnt);
}
