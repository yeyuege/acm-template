template<typename T>
struct Fenwick2D{
	int n, m;
	vector<vector<T>> a, b, c, d;

	Fenwick2D(){}
	Fenwick2D(int n_, int m_) {
		init(n_, m_);
	}

	void init(int n_, int m_) {
		n = n_;
		m = m_;
		a.assign(n + 1, vector<T>(m + 1, T{}));
		b.assign(n + 1, vector<T>(m + 1, T{}));
		c.assign(n + 1, vector<T>(m + 1, T{}));
		d.assign(n + 1, vector<T>(m + 1, T{}));
	}

	void add(int x, int y, const T& v) {
		for (int i = x + 1; i <= n; i += i & -i) {
			for (int j = y + 1; j <= m; j += j & -j) {
				a[i - 1][j - 1] += v;
				b[i - 1][j - 1] += v * (x + 1);
				c[i - 1][j - 1] += v * (y + 1);
				d[i - 1][j - 1] += v * (x + 1) * (y + 1);
			}
		}
	}

	void rangeAdd(int lx, int ly, int rx, int ry, const T& v) {
		add(lx, ly, v);
		add(lx, ry, -v);
		add(rx, ly, -v);
		add(rx, ry, v);
	}

	T sum(int x, int y) {
		T ans1{}, ans2{}, ans3{}, ans4{};
		for (int i = x; i > 0; i -= i & -i) {
			for (int j = y; j > 0; j -= j & -j) {
				ans1 += a[i - 1][j - 1];
				ans2 += b[i - 1][j - 1];
				ans3 += c[i - 1][j - 1];
				ans4 += d[i - 1][j - 1];
			}
		}

		return ans1 * (x + 1) * (y + 1) - ans2 * (y + 1) - ans3 * (x + 1) + ans4;
	}

	T rangesum(int lx, int ly, int rx, int ry) {
		return sum(rx, ry) - sum(rx, ly) - sum(lx, ry) + sum(lx, ly);
	}
};
