const int mod = 1e9 + 7;
const int N = 5e5 + 5;
int tot;
bool Prime[N];
ll n, sqn, w[N], p[N], id, id1[N], id2[N], g1[N], g2[N];
ll sum1[N], sum2[N];
// id1 id2 如文中所示 w[k] 为第 k 个需要处理的数 
// 文中的 g 为 g2 - g1, g1 : f'(k) = k, g2: f'(k) = k ^ 2
// sum1 质数前缀和, sum2 质数前缀平方和

void xxs() { // 线性筛
	for (int i = 2; i <= sqn; i++)  {
		if(!Prime[i]) ++tot, p[tot] = i;
		for(int j = 1; p[j] * i <= sqn && j <= tot; j++) {
			Prime[p[j] * i] = 1;
			if(i % p[j] == 0) break;
		}
	}
    for (int i = 1; i <= tot; i++) {
		sum1[i] = (sum1[i - 1] + p[i]) % mod;
		sum2[i] = (sum2[i - 1] + p[i] * p[i] % mod) % mod;
	}
}

ll getid(ll x) {
	if(x <= sqn) return id1[x];
	else return id2[n / x];
}
ll f1(ll x) { // 1 ~ x 前缀和
	x %= mod;
	return x * (x + 1) / 2 % mod;
}
ll f2(ll x) { // 1 ~ x 前缀平方和
	x %= mod;
	return x * (x + 1) % mod * (2 * x % mod + 1) % mod * 166666668 % mod;
}
ll S(ll x, int j) {
	if(p[j] > x) return 0;
	ll Ans = ((g2[getid(x)] - g1[getid(x)] + mod) % mod - (sum2[j] - sum1[j] + mod) % mod + mod) % mod;
	for(int i = j + 1; i <= tot && p[i] * p[i] <= x; i ++) 
		for(ll e = 1, sp = p[i]; sp <= x; sp *= p[i], e ++) 
			Ans = (Ans + sp % mod * (sp % mod - 1) % mod * (S(x / sp, i) + (e > 1)) % mod) % mod;
	return Ans;
}

ll work(ll x) {
    n = x;
    sqn = sqrt(x);
    xxs();
	for(ll l = 1, r; l <= n; l = r + 1) {
		r = (n / (n / l)), w[++id] = n / l;
		g1[id] = f1(w[id]) - 1, g2[id] = f2(w[id]) - 1; // 处理 g(?, 0)
		if(w[id] <= sqn) id1[w[id]] = id;
		else id2[n / w[id]] = id;
	}
	for (int i = 1; i <= tot; i++) { // dp 处理 g 函数
		for(int j = 1; j <= id && p[i] * p[i] <= w[j]; j++) {
			g1[j] = (g1[j] - p[i] * (g1[getid(w[j] / p[i])] - sum1[i - 1]) % mod + mod) % mod;
			g2[j] = (g2[j] - p[i] * p[i] % mod * (g2[getid(w[j] / p[i])] - sum2[i - 1]) % mod + mod) % mod;
		}
	}
	return (S(n, 0) + 1) % mod;
}
