const double EPS = 1e-9;

vector<double> gauss(vector<vector<double>>& a, vector<double>& b) {
    int n = a.size();
    vector<vector<double>> c(n, vector<double>(n + 1));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            c[i][j] = a[i][j];
        }
        c[i][n] = b[i];
    }

    for (int i = 0; i < n; i++) {
        int row = i;
        for (int j = i + 1; j < n; j++) {
            if (fabs(c[j][i]) > fabs(c[row][i])) {
                row = j;
            }
        }

        assert(fabs(c[row][i]) >= EPS);
        swap(c[i], c[row]);
        
        double tmp = c[i][i];
        for (int j = i; j <= n; j++) {
            c[i][j] /= tmp;
        }

        for (int j = i + 1; j < n; j++) {
            double tmp1 = c[j][i];
            if (fabs(tmp1) > EPS) {
                for (int k = i; k <= n; k++) {
                    c[j][k] -= tmp1 * c[i][k];
                }
            }
        }
    }

    vector<double> x(n);
    for (int i = n - 1; i >= 0; i--) {
        x[i] = c[i][n];
        for (int j = i + 1; j < n; j++) {
            x[i] -= c[i][j] * x[j];
        }
    }

    return x;
}
