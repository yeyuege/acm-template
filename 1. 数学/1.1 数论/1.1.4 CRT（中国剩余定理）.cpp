ll CRT(int k, vector<ll>& a, vector<ll>& r) {
    ll n = 1, ans = 0;
    for (int i = 0; i < k; i++) {
        n *= r[i];
    }
    for (int i = 0; i < k; i++) {
        ll m = n / r[i], b, y;
        exgcd(m, r[i], b, y); // b * m mod r[i] = 1
        b %= n;
        ans = (ans + a[i] * m % n * b % n) % n;
    }

    return (ans % n + n) % n;
}
