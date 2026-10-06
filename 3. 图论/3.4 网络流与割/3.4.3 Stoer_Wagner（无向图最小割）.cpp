struct Stoer_Wagner {
    int n;
    vector<vector<ll>> g;
    vector<int> vis1, vis2;
    vector<ll> w;
    Stoer_Wagner(){}
    Stoer_Wagner(int n_) {
        n = n_;
        g.assign(n, vector<ll>(n, 0));
        vis1.assign(n, 0);
        vis2.assign(n, 0);
        w.assign(n, 0);
    }

    void addEdge(int u, int v, ll val) {
        g[u][v] += val;
        g[v][u] += val;
    }

    ll work() {
        ll ans = LLONG_MAX;
        for (int i = 0; i < n - 1; i++) {
            int s = 0, t = 0;
            for (int i = 0; i < n; i++) {
                w[i] = 0;
                vis2[i] = 0;
            }
            for (int j = 0; j < n - i; j++) {
                int now = -1;
                for (int k = 0; k < n; k++) {
                    if (!vis1[k] && !vis2[k] && (now == -1 || w[k] > w[now])) now = k;
                }
                s = t, t = now;
                vis2[now] = 1;
                for (int k = 0; k < n; k++) {
                    w[k] += g[k][now];
                }
            }
            ans = min(ans, w[t]);
            vis1[t] = 1;
            for (int j = 0; j < n; j++) {
                if (j != s) {
                    g[s][j] += g[t][j], g[j][s] += g[j][t];
                }
            }
        }

        return ans;
    }
};
