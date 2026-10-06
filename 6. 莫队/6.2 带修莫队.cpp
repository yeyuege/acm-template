const int MAXN = 1e6 + 5;
int cnt[MAXN], a[MAXN], ans[MAXN], sum, cntq, cntc;

struct Q{
    int l, r, t, id;
}qr[MAXN];

struct C{
    int pos, val;
}qc[MAXN];

void add(int x) {
    sum += !cnt[x]++;
}

void del(int x) {
    sum -= !--cnt[x];
}

void upd(int x, int t) {
    if (qr[x].l <= qc[t].pos && qc[t].pos <= qr[x].r) {
        del(a[qc[t].pos]);
        add(qc[t].val);
    }
    swap(a[qc[t].pos], qc[t].val);
}

void solve() {
    int n, m;
    cin >> n >> m;
    int sz = pow(n, 0.6666);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i <= m; i++) {
        char op;
        cin >> op;
        if (op == 'Q') {
            ++cntq;
            cin >> qr[cntq].l >> qr[cntq].r;
            qr[cntq].id = cntq;
            qr[cntq].t = cntc;
        }
        if (op == 'R') {
            ++cntc;
            cin >> qc[cntc].pos >> qc[cntc].val;
        }
    }

    sort(qr + 1, qr + 1 + cntq, [&](Q x, Q y) {
        if (x.l / sz == y.l / sz) {
            if (x.r / sz == y.r / sz) {
                return x.t < y.t;
            }
            return x.r / sz < y.r / sz;
        }
        return x.l / sz < y.l / sz;
    });

    int l = 1, r = 0, t = 0;
    for (int i = 1; i <= cntq; i++) {
		while (l > qr[i].l) add(a[--l]);
		while (l < qr[i].l) del(a[l++]);
		while (r > qr[i].r) del(a[r--]);
		while (r < qr[i].r) add(a[++r]);
		while (t < qr[i].t) upd(i, ++t);
		while (t > qr[i].t) upd(i, t--);
        ans[qr[i].id] = sum;
    }
    
    for (int i = 1; i <= cntq; i++) {
        cout << ans[i] << "\n";
    }
}
