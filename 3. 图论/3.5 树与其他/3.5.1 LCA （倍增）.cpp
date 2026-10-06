int n, m;
cin >> n >> m;
vector<vector<int>> fa(n, vector<int>(21)), cost(n, vector<int>(21));
vector<int> dep(n);
vector<vector<int>> adj(n);
for (int i = 0; i < n - 1; i++) {
    int u, v;
    u--, v--;
    adj[u].push_back(v);
    adj[v].push_back(u);
}

auto dfs = [&](this auto&& dfs, int u, int p) -> void {
    fa[u][0] = p;
    dep[p] = dep[fa[u][0]] + 1;

    for (int i = 1; i <= 20; i++) {
        fa[u][i] = fa[fa[u][i - 1]][i - 1];
        cost[u][i] = cost[fa[u][i - 1]][i - 1] + cost[u][i - 1];
    }

    for (auto v : adj[u]) {
        if (v == p) continue;
        dfs(v, u);
    }
};

dep[0] = -1;
dfs(0, 0);
