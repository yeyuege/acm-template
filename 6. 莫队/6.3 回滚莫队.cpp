struct Q {
    int l, r, ans;
    int pos, id;
};

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> sorted(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sorted[i] = a[i];
    }

    sort(all(sorted));
    sorted.erase(unique(all(sorted)), sorted.end());

    for (int i = 0; i < n; i++) {
        a[i] = lower_bound(all(sorted), a[i]) - sorted.begin();
    }

    int len = sqrt(n);
    int cnt = sorted.size();

    int m;
    cin >> m;
    vector<Q> qr(m);
    for (int i = 0; i < m; i++) {
        cin >> qr[i].l >> qr[i].r;
        qr[i].l--, qr[i].r--;
        qr[i].pos = i;
        qr[i].id = qr[i].l / len;
    }

    sort(all(qr), [&](Q x, Q y) {
        if (x.id == y.id) {
            return x.r < y.r;
        }

        return x.id < y.id;
    });

    vector<int> maxn(cnt, 0), minn (cnt, 1e9);
    int res = 0;
    for (int i = 0, l = 0, r = 0, lstid = -1; i < m; i++) {
        if (lstid != qr[i].id) {
            for (int j = 0; j < cnt; j++) {
                maxn[j] = 0;
                minn[j] = 1e9;
            }
            res = 0;
            r = (qr[i].id + 1) * len;
            lstid = qr[i].id;
        }

        vector<pii> premax, premin;
        if (qr[i].id == qr[i].r / len) {
            int resnow = res;
            for (int j = qr[i].l; j <= qr[i].r; j++) {
                premax.push_back({a[j], maxn[a[j]]});
                premin.push_back({a[j], minn[a[j]]});
                maxn[a[j]] = max(maxn[a[j]], j);
                minn[a[j]] = min(minn[a[j]], j);
                resnow = max(resnow, maxn[a[j]] - minn[a[j]]);
            }

            qr[i].ans = resnow;
            while (!premax.empty()) {
                maxn[premax.back().first] = premax.back().second;
                premax.pop_back();
            }
            while (!premin.empty()) {
                minn[premin.back().first] = premin.back().second;
                premin.pop_back();
            }
            continue;
        }
        while (r <= qr[i].r) {
            maxn[a[r]] = max(maxn[a[r]], r);
            minn[a[r]] = min(minn[a[r]], r);
            res = max(res, maxn[a[r]] - minn[a[r]]);
            r++;
        }
        int resnow = res;
        l = (qr[i].id + 1) * len - 1;
        while (l >= qr[i].l) {
            premax.push_back({a[l], maxn[a[l]]});
            premin.push_back({a[l], minn[a[l]]});
            maxn[a[l]] = max(maxn[a[l]], l);
            minn[a[l]] = min(maxn[a[l]], l);
            resnow = max(resnow, maxn[a[l]] - minn[a[l]]);
            l--;
        }
        qr[i].ans = resnow;
        while (!premax.empty()) {
            maxn[premax.back().first] = premax.back().second;
            premax.pop_back();
        }
        while (!premin.empty()) {
            minn[premin.back().first] = premin.back().second;
            premin.pop_back();
        }
    }

    sort(all(qr), [&](Q x, Q y) {
        return x.pos < y.pos;
    });

    for (int i = 0; i < m; i++) {
        cout << qr[i].ans << "\n";
    }
}
