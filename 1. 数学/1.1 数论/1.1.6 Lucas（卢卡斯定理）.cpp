ll comb(int n, int m, ll p) {
	if (n < m) return 0;
	if (n < p && m < p) {
		return fac[n] * invfac[m] % p * invfac[n - m] % p;
	}
	return comb(n / p, m / p, p) * comb(n % p, m % p, p) % p;
}
