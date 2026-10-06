void solve(){
    int n, m;
    cin >> n >> m;
    vector<int> u(m), v(m), in(n, 0);
    for (int i = 0; i < m; i++) {
        cin >> u[i] >> v[i];
        u[i]--, v[i]--;
        in[u[i]]++, in[v[i]]++;
    }
    vector<vector<int>> adj(n);
    for (int i = 0; i < m; i++) {
        if (in[u[i]] > in[v[i]]) swap(u[i], v[i]);
        else if (in[u[i]] == in[v[i]] && u[i] > v[i]) swap(u[i], v[i]);
        adj[u[i]].push_back(v[i]);
    }
    int ans = 0;
    vector<int> vis(n, -1);
    for (int i = 0; i < n; i++) {
        for (auto v : adj[i]) {
            vis[v] = i;
        } 
        for (auto v : adj[i]) {
            for (auto w : adj[v]) {
                if (vis[w] == i) ans++;
            }
        }
    }

    cout << ans << "\n";
}
