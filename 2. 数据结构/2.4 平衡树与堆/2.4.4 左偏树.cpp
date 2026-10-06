const int NLT = 1e5 + 5;
struct LeftistTree{
	int n;
	int val[NLT], ls[NLT], rs[NLT], d[NLT];
	int fa[NLT];
	LeftistTree(){}
	LeftistTree(int n_) {
		init(n_);
	}

	void init(int n_) {
		n = n_;
		d[0] = -1;
		for (int i = 0; i <= n; i++) {
			val[i] = ls[i] = rs[i] = d[i] = 0;
			fa[i] = i;
		}
	}

	int find(int x) {
		while (x != fa[x]) x = fa[x] = fa[fa[x]];
		return x;
	}

	int merge(int x, int y) {
		if (!x || !y) return x | y;
		if (val[x] > val[y]) swap(x, y);
		pushdown(x);
		rs[x] = merge(rs[x], y);
		if (d[rs[x]] > d[ls[x]]) swap(ls[x], rs[x]);
		d[x] = d[rs[x]] + 1;
		fa[x] = x;
		fa[ls[x]] = x;
		fa[rs[x]] = x;
		return x;
	}

	void merge_node(int x, int y) {
		x = find(x), y = find(y);
		if (x == y) return;
		merge(x, y);
	}

	int top(int x) {
		return val[find(x)];
	}

	void pop(int x) {
		erase(find(x));
	}

	void erase(int x) {
		int rt = merge(ls[x], rs[x]);
		if (ls[fa[x]] == x) {
			ls[fa[x]] = rt;
			fa[rt] = fa[x];
		}
		else if (rs[fa[x]] == x) {
			rs[fa[x]] = rt;
			fa[rt] = fa[x];
		}
		else {
			fa[rt] = rt;
			fa[x] = rt;
		}
		pushup(fa[x]);
	}

	void pushdown(int x) {
		
	}

	void pushup(int x) {
		if (!x) return;
		if (d[x] != d[rs[x]] + 1) {
			d[x] = d[rs[x]] + 1;
			pushup(fa[x]);
		}
	}
} ltr;
