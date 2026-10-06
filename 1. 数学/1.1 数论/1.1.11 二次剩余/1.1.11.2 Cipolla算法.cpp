ll mod;
ll II; // 虚数单位的平方
struct Complex {
	ll real, imag;
	Complex(ll real = 0, ll imag = 0): real(real), imag(imag) { }
};

bool operator == (const Complex x, const Complex y) {
	return x.real == y.real && x.imag == y.imag;
}
Complex operator * (Complex x, Complex y) {
	return Complex((x.real * y.real + II * x.imag % mod * y.imag) % mod,
			(x.imag * y.real + x.real * y.imag) % mod);
}

Complex qpow(Complex a, int n) {
	Complex res = 1;
	while (n) {
		if (n & 1) res = res * a;
		a = a * a;
		n >>= 1;
	}
	return res;
}

bool check_if_residue(int x) {
	return qpow(x, (mod - 1) >> 1) == 1;
}

array<ll, 2> work(int n, int p) {
	if (n == 0) return {0, 0};
	mod = p;
	ll a = rand() % mod;
	while (!a || check_if_residue((a * a + mod - n) % mod)) a = rand() % mod;
	II = (a * a + mod - n) % mod;
	ll x = int(qpow(Complex(a, 1), (mod + 1) >> 1).real);
	ll y = mod - x;
	if (x > y) swap(x, y);
	return {x, y};
}
