void solve(){
    int n, m;
    cin >> n >> m;
    VBCC vbcc(n);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        u--, v--;
        vbcc.addEdge(u, v);
    }

    auto bel = vbcc.work();
    vector<vector<int>> adj(n + vbcc.cnt);
    vector<int> in(n, 0);
    for (int i = 0; i < n; i++) {
        for (int v : bel[i]) {
            adj[i].push_back(v + n);
            adj[v + n].push_back(i);
            in[i]++;
        }
    }
}
