// 组合数预处理（需提前预计算阶乘和逆元）
const ll MOD = 998244353;
const int MAXN = 1e5+5;
ll fac[MAXN], inv_fac[MAXN];

ll qpow(ll a,ll n,ll mod){
    ll ans=1;
    while(n){
        if(n&1)ans=(ans*a)%mod;
        n>>=1;
        a=(a*a)%mod;
    }
    return ans;
}

ll inv(ll num) {
    return qpow(num, MOD-2, MOD);
}

void init_comb() {
    fac[0] = 1;
    for (int i = 1; i < MAXN; ++i)
        fac[i] = fac[i-1] * i % MOD;
    inv_fac[MAXN-1] = inv(fac[MAXN-1]);
    for (int i = MAXN-2; i >= 0; --i)
        inv_fac[i] = inv_fac[i+1] * (i+1) % MOD;
}

ll comb(int n, int k) {
    if (k < 0 || k > n) return 0;
    return fac[n] * inv_fac[k] % MOD * inv_fac[n-k] % MOD;
}
