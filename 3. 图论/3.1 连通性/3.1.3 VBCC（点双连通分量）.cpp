struct VBCC {
    int n;
    std::vector<std::vector<int>> adj, bel;
    std::vector<int> stk;
    std::vector<int> dfn, low;
    int cur, cnt;

    VBCC() {}
    VBCC(int n) {
        init(n);
    }

    void init(int n) {
        this->n = n;
        adj.assign(n, {});
        dfn.assign(n, -1);
        low.resize(n);
        bel.assign(n, {});
        stk.clear();
        cur = cnt = 0;
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void dfs(int x, int p) {
        dfn[x] = low[x] = ++cur;
        stk.push_back(x);
        int son = 0;

        for (int v : adj[x]) {
            if (v == p) continue;
            if (dfn[v] == -1) {
                son++;
                dfs(v, x);
                low[x] = min(low[x], low[v]);
                
                if (low[v] >= dfn[x]) {
                    vector<int> bcc;
                    int y;
                    do {
                        y = stk.back();
                        stk.pop_back();
                        bel[y].push_back(cnt);
                    } while (y != v);
                    bel[x].push_back(cnt);
                    cnt++;
                }
            }
            else {
                low[x] = min(low[x], dfn[v]);
            }
        }

        if (p == -1 && son == 0) {
            bel[x].push_back(cnt);
            cnt++;
        }
    }

    std::vector<vector<int>> work() {
        for (int i = 0; i < n; i++) {
            if (dfn[i] == -1) {
                dfs(i, -1);
            }
        }
        
        return bel;
    }
};
