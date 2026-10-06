struct Q {
    int l, r, id, pos;
    ll ans = 0;
};

struct Q1
{
    int l, r, id, x;
    ll c;
};

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    int len = sqrt(n);
    vector<Q> qr(m);
    vector<int> num;

    for (int i = 0; i < (1 << 15); i++) {
        if (__builtin_popcount(i) == k) {
            num.push_back(i);
        }
    }

    vector<ll> pre(n + 1, 0);
    vector<ll> cnt((1 << 15), 0);

    for (int i = 1; i <= n; i++) {
        pre[i] = cnt[a[i]];

        for (int x : num) {
            cnt[x ^ a[i]]++;
        }   
    }

    for (int i = 0; i < m; i++) {
        cin >> qr[i].l >> qr[i].r;
        qr[i].id = qr[i].l / len;
        qr[i].pos = i;
    }

    sort(all(qr), [&](Q x, Q y) {
        if (x.id == y.id) {
            return x.r < y.r;
        }

        return x.id < y.id;
    });

    vector<vector<Q1>> mmd(n + 1);

    for (int i = 0, l = 1, r = 0; i < m; i++) {
        if (r < qr[i].r) {
            mmd[l - 1].push_back(Q1{r + 1, qr[i].r, i, a[r + 1], -1});
        }
        while (r < qr[i].r) {
            r++;
            qr[i].ans += pre[r];
        }
        if (r > qr[i].r) {
            mmd[l - 1].push_back(Q1{qr[i].r + 1, r, i, a[r], 1});
        }
        while (r > qr[i].r) {
            qr[i].ans -= pre[r];
            r--;
        }
        if (l < qr[i].l) {
            mmd[r].push_back(Q1{l, qr[i].l - 1, i, a[l], -1});
        }
        while (l < qr[i].l) {
            qr[i].ans += pre[l];
            if (k == 0) qr[i].ans++;
            l++;
        }
        if (l > qr[i].l) {
            mmd[r].push_back(Q1{qr[i].l, l - 1, i, a[l - 1], 1});
        }
        while (l > qr[i].l) {
            l--;
            qr[i].ans -= pre[l];
            if (k == 0) qr[i].ans--;
        }
    }

    for (int i = 0; i < cnt.size(); i++) cnt[i] = 0;

    for (int i = 1; i <= n + 1; i++) {

        for (auto x : mmd[i - 1]) {
            ll tmp = 0;
            for (int j = x.l; j <= x.r; j++) {
                tmp += cnt[a[j]];
            }
            qr[x.id].ans += x.c * tmp;
        }

        if (i == n + 1) break;

        for (int x : num) {
            cnt[x ^ a[i]]++;
        }
    }

    for (int i = 1; i < m; i++) {
        qr[i].ans += qr[i - 1].ans;
    }

    sort(all(qr), [&](Q x, Q y) {
        return x.pos < y.pos;
    });

    for (int i = 0; i < m; i++) {
        cout << qr[i].ans << "\n";
    }
}
