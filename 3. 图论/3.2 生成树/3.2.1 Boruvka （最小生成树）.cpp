ll Boruvka(int n, vector<int>& a) {
    ll ans = 0;
    DSU dsu(n);
    bool ok = 1;
    init();
    for (int i = 0; i < n; i++) {
        add(a[i], i);
    }
    vector<int> tok(n, -1);
    int t = 0;
    while (ok) {
        ok = 0;
        for (int i = tot; i >= 0; i--) {
            upd(i);
        }
        vector<ll> best(n, inf);
    
        for (int i = 0; i < n; i++) {
            int o = 1, res = 0;
            for (int j = 29; j >= 0; j--) {
                if (trie[o][(a[i] >> j) & 1] && col[trie[o][(a[i] >> j) & 1]] != dsu.find(i)) {
                    o = trie[o][(a[i] >> j) & 1];
                }
                else {
                    res += 1 << j;
                    o = trie[o][((a[i] >> j) & 1) ^ 1];
                }
            }

            if (best[dsu.find(i)] > res) {
                best[dsu.find(i)] = res;
                tok[dsu.find(i)] = col[o];
            }
        }

        for (int i = 0; i < n; i++) {
            if (dsu.find(i) == i) {
                if (best[i] == inf) continue;
                if (dsu.find(i) == dsu.find(tok[i])) continue;
                ans += best[i];
                dsu.merge(i, tok[i]);
                ok = 1;
            }
        }
    }

    return ans;
}
