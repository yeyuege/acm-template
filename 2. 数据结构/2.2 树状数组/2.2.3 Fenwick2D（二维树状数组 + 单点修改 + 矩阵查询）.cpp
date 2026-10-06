template<typename T>
struct Fenwick2D{
	int n, m;
	vector<vector<T>> a;

	Fenwick2D(){}
	Fenwick2D(int n_, int m_) {
		init(n_, m_);
	}

	void init(int n_, int m_) {
		n = n_;
		m = m_;
		a.assign(n, vector<T>(m, T{}));
	}

	void add(int x, int y, const T& v) {
		for (int i = x + 1; i <= n; i += i & -i) {
			for (int j = y + 1; j <= m; j += j & -j) {
				a[i - 1][j - 1] += v;
			}
		}
	}

	T sum(int x, int y) {
		T ans{};
		for (int i = x; i > 0; i -= i & -i) {
			for (int j = y; j > 0; j -= j & -j) {
				ans += a[i - 1][j - 1];
			}
		}

		return ans;
	}

	T rangesum(int lx, int ly, int rx, int ry) {
		return sum(rx, ry) - sum(rx, ly) - sum(lx, ry) + sum(lx, ly);
	}
};
