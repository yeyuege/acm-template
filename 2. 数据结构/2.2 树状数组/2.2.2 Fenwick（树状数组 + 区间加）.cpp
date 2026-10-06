template<typename T>
struct Fenwick{
	int n;
	vector<T> a, b;

	Fenwick(){}
	Fenwick(int n_) {
		init(n_);
	}

	void init(int n_) {
		n = n_;
		a.assign(n + 1, T{});
		b.assign(n + 1, T{});
	}

	void add(int x, const T& v) {
		for (int i = x + 1; i <= n; i += i & -i) {
			a[i - 1] += v;
			b[i - 1] += (x + 1) * v;
		}
	}

	void rangeAdd(int l, int r, const T& v) {
		add(l, v), add(r, -v);
	}

	T sum(int x) {
		T ans1{}, ans2{};
		for (int i = x; i > 0; i -= i & -i) {
			ans1 += a[i - 1];
			ans2 += b[i - 1];
		}

		return ans1 * (x + 1) - ans2;
	}

	T rangeSum(int l, int r) {
		return sum(r) - sum(l);
	}
};
