bool Gauss_jordan(vector<vector<ll>>& a, vector<vector<ll>>& ans, ll mod) {
    int n = a.size();
    for (int i = 0; i < n; i++) {
        int r = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j][i] > a[r][i]) r = j;
        }
        if (r != i) swap(a[r], a[i]);
        if (r != i) swap(ans[r], ans[i]);
        if (!a[i][i]) return false;

        ll tmp = inv(a[i][i], mod);

        for (int k = 0; k < n; k++) {
            if (k == i) {
                continue;
            }
            ll p = a[k][i] * tmp % mod;
            for (int j = i; j < n; j++) {
                a[k][j] = ((a[k][j] - p * a[i][j]) % mod + mod) % mod;
            }
            for (int j = 0; j < n; j++) {
                ans[k][j] = ((ans[k][j] - p * ans[i][j]) % mod + mod) % mod;
            }
        }

        for (int j = 0; j < n; j++) {
            a[i][j] = (a[i][j] * tmp) % mod;
            ans[i][j] = (ans[i][j] * tmp) % mod;
        }
    }

    return true;
}
