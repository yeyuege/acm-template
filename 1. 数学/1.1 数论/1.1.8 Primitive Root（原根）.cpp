bool isrt(int n) {
    if (n == 1) return false;
    if (n == 2 || n == 4) return true;
    if (n % 2 == 0) {
        n /= 2;
        if (n % 2 == 0) return false;
    }
    int p = minp[n];
    while (n % p == 0) n /= p;
    if (n == 1) return true;
    return false;
}

vector<int> findrt(int n) {
    vector<int> ans;
    if (!isrt(n)) return ans;
    int g;
    vector<int> fac;
    int tmp = phi[n];
    while (tmp != 1) {
        int p = minp[tmp];
        fac.push_back(minp[tmp]);
        while (tmp % p == 0) tmp /= p;
    }

    for (int i = 1; i < n; i++) {
        if (quick_power(i, phi[n], n) == 1) {
            bool flag = 1;
            for (int x : fac) {
                if (quick_power(i, phi[n] / x, n) == 1) {
                    flag = 0;
                    break;
                }
            }
            if (flag) {
                g = i;
                break;
            }
        }
    }

    int x = 1;
    for (int i = 1; i <= phi[n]; i++) {
        x = (1LL * x * g) % n;
        if (gcd(phi[n], i) == 1) {
            ans.push_back(x);
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}
