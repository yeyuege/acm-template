// 组合数预处理（需提前预计算阶乘和逆元）
const ll MOD = 1e9+7;
const int MAXN = 1e6+5;
ll fac[MAXN], inv_fac[MAXN];

ll qpow(ll a,ll n,ll mod){
	ll ans=1;
	while(n > 0){
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

const int mod=1e9+7;

vector<ll> lagrange_interpolation(vector<pll>& point) {
  	const int n = point.size();

  	
  	vector<ll> x(n), y(n);
  	for(int i = 0; i < n; i++){
  		x[i] = point[i].first;
  		y[i] = point[i].second;
  	}


  	vector<ll> M(n + 1), px(n, 1), f(n);
  	M[0] = 1;
  	// 求出 M(x) = prod_(i=0..n-1)(x - x_i)
  	for (int i = 0; i < n; ++i) {
    	for (int j = i; j >= 0; --j) {
     		M[j + 1] = (M[j] + M[j + 1]) % mod;
      		M[j] = M[j] * (mod - x[i]) % mod;
    	}
  	}
  	// 求出 px_i = prod_(j=0..n-1, j!=i) (x_i - x_j)
  	for (int i = 0; i < n; ++i) {
    	for (int j = 0; j < n; ++j)
      	if (i != j) {
        	px[i] = px[i] * (x[i] - x[j] + mod) % mod;
      	}
  	}
  	// 组合出 f(x) = sum_(i=0..n-1)(y_i / px_i)(M(x) / (x - x_i))
  	for (int i = 0; i < n; ++i) {
    	ll t = y[i] * inv(px[i]) % mod, k = M[n];
    	for (int j = n - 1; j >= 0; --j) {
      		f[j] = (f[j] + k * t) % mod;
      		k = (M[j] + k * x[i]) % mod;
    	}
  	}
  	return f;
}


ll lagrange_interpolation_consecutive(const vector<pll>& points, ll x) {
    int n = points.size();
    vector<ll> y(n);
    for(int i = 0; i < n; i++) {
        y[i] = points[i].second;
    }

    // 预处理前缀积和后缀积
    vector<ll> p(n + 1), s(n + 1);
    p[0] = (x - 0 + mod) % mod;  // 处理负数情况
    for(int i = 1; i < n; i++) {
        p[i] = p[i - 1] * (x - i + mod) % mod;
    }
    
    s[n] = 1;
    for(int i = n - 1; i >= 0; i--) {
        s[i] = s[i + 1] * (x - i + mod) % mod;
    }

    ll ans = 0;
    for(int i = 1; i < n; i++) {
        // 计算分子部分: product_{j≠i} (x-j)
        ll res = p[i - 1] * s[i + 1] % mod;
        
        // 计算分母部分: (-1)^{n-1-i} * i! * (n-1-i)!
        res = res * inv_fac[i] % mod;
        res = res * inv_fac[n - 1 - i] % mod;
        if((n - 1 - i) % 2) res = mod - res;  // 处理符号
        
        // 计算当前项贡献
        res = res * y[i] % mod;
        ans = (ans + res) % mod;
    }
    
    return ans;
}
