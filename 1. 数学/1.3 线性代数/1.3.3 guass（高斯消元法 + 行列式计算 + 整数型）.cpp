ll Guass(vector<vector<ll>>& a, ll mod) {
    int n = a.size();
    ll ans = 1, w = 1;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            while (a[i][i]) {
                ll div = a[j][i] / a[i][i];
                for (int k = i; k < n; k++) {
                    a[j][k] = (a[j][k] - div * a[i][k] % mod + mod) % mod;
                }
                swap(a[i], a[j]);
                w = -w;
            }
            swap(a[i], a[j]);
            w = -w;
        }
    }
    
    for (int i = 0; i < n; i++) {
        ans = ans * a[i][i] % mod;
    }

    return (ans * w + mod) % mod;
}
