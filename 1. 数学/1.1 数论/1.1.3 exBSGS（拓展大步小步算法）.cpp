ll BSGS(ll a, ll b, ll p, ll ad) { // ad 是前面约分掉的系数积
    map<ll, ll> mp;
    ll t = ceil(sqrt(p));
    ll tmp1 = b % p;
    for (int i = 0; i < t; i++) {
        mp[tmp1] = i;
        tmp1 = tmp1 * a % p;
    }
    
    ll step = quick_power(a, t, p);
    ll tmp2 = ad % p; // 从系数 D 开始跳
    for (int i = 1; i <= t + 1; i++) {
        tmp2 = tmp2 * step % p;
        if (mp.count(tmp2)) {
            ll res = i * t - mp[tmp2];
            if (res >= 0) return res;
        }
    }
    return -1;
}

ll exBSGS(ll a, ll b, ll p) {
    b %= p;
    if (b == 1 || p == 1) return 0; // 特判
    
    ll g, D = 1, cnt = 0;
    while ((g = gcd(a, p)) != 1) {
        if (b % g != 0) return -1; // 无解
        cnt++;
        p /= g;
        b /= g;
        D = D * (a / g) % p; // 累积系数
        if (D == b) return cnt; // 检查约分过程中是否已经相等
    }
    
    ll res = BSGS(a, b, p, D);
    return res == -1 ? -1 : res + cnt;
}
