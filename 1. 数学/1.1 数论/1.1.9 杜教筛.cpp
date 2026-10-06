map<ll, ll> mp1, mp2;

ll getsum1(ll n) {
    if (n <= 1e6) return prephi[n];
    if (mp1.count(n)) return mp1[n];
    ll ans = n * (n + 1LL) / 2;
    for (ll i = 2, j; i <= n; i = j + 1) {
        j = min(n, n / (n / i));
        ans -= (j - i + 1LL) * getsum1(n / i);
    }

    mp1[n] = ans;
    return ans;
}

ll getsum2(ll n) {
    if (n <= 1e6) return premu[n];
    if (mp2.count(n)) return mp2[n];
    ll ans = 1;
    for (ll i = 2, j; i <= n; i = j + 1) {
        j = min(n, n / (n / i));
        ans -= (j - i + 1LL) * getsum2(n / i);
    }

    mp2[n] = ans;
    return ans;
}

void solve() {
    ll n;
    cin >> n;
    cout << getsum1(n) << " " << getsum2(n) << "\n";
}
