template <typename T>
struct SplayTree {
	int n, rt, id;
	vector<int> fa, cnt, sz, lz;
	vector<T> val;
	vector<vector<int>> ch;

	SplayTree() {}
	SplayTree(int n_) {
		init(n_);
	}

	void init(int n_) {
		n = n_;
		rt = id = 0;
		fa.assign(n, 0);
		val.assign(n, T{});
		cnt.assign(n, 0);
		sz.assign(n, 0);
		lz.assign(n, 0);
		ch.assign(n, {0, 0});
	}

	bool dir(int x) {
		return x == ch[fa[x]][1];
	}
	
	void push_up(int x) {
		sz[x] = cnt[x] + sz[ch[x][0]] + sz[ch[x][1]];
	}

	void rotate(int x) {
		int y = fa[x], z = fa[y];
		bool r = dir(x);
		ch[y][r] = ch[x][!r];
		ch[x][!r] = y;
		if (z) ch[z][dir(y)] = x;
		if (ch[y][r]) fa[ch[y][r]] = y;
		fa[y] = x;
		fa[x] = z;
		push_up(y);
		push_up(x);
	}
	
	void splay(int& z, int x) {
		int w = fa[z];
		int y = fa[x];
		while (y != w) {
			if (fa[y] != w) rotate(dir(x) == dir(y) ? y : x);
			rotate(x);
			y = fa[x];
		}
		z = x;
	}

	void find(int& z, int v) {
		int x = z, y = fa[x];
		while (x && val[x] != v) {
			y = x;
			x = ch[x][v > val[x]];
		}
		splay(z, x ? x : y);
	}
	
	void loc(int& z, int k) {
		int x = z;
		while (true) {
			if (sz[ch[x][0]] >= k) {
				x = ch[x][0];
			}
			else if (sz[ch[x][0]] + cnt[x] >= k) {
				break;
			}
			else {
				k -= sz[ch[x][0]] + cnt[x];
				x = ch[x][1];
			}
		}
		splay(z, x);
	}
	
	int find_kth(int k) {
		if (k > sz[rt]) return -1;
		loc(rt, k);
		return val[rt];
	}
	
	int merge(int x, int y) {
		if (!x || !y) return x | y;
		loc(y, 1);
		ch[y][0] = x;
		fa[x] = y;
		push_up(y);
		return y;
	}
	
	void insert(int v) {
		int x = rt, y = 0;
		while (x && val[x] != v) {
			y = x;
			x = ch[x][v > val[x]];
		}
		if (x) {
			cnt[x]++;
			sz[x]++;
		}
		else {
			x = ++id;
			val[x] = v;
			cnt[x] = sz[x] = 1;
			fa[x] = y;
			if (y) ch[y][v > val[y]] = x;
		}
		splay(rt, x);
	}
	
	bool remove(int v) {
		find(rt, v);
		if (!rt || val[rt] != v) return false;
		cnt[rt]--;
		sz[rt]--;
		if (!cnt[rt]) {
			int x = ch[rt][0];
			int y = ch[rt][1];
			fa[x] = fa[y] = 0;
			rt = merge(x, y);
		}
		return true;
	}
	
	int find_rank(int v) {
		find(rt, v);
		return sz[ch[rt][0]] + (val[rt] < v ? cnt[rt] : 0) + 1;
	}
	
	int find_prev(int v) {
		find(rt, v);
		if (rt && val[rt] < v) return val[rt];
		int x = ch[rt][0];
		if (!x) return -1;
		while (ch[x][1]) {
			x = ch[x][1];
		}
		splay(rt, x);
		return val[rt];
	}
	
	int find_next(int v) {
		find(rt, v);
		if (rt && val[rt] > v) return val[rt];
		int x = ch[rt][1];
		if (!x) return -1;
		while (ch[x][0]) {
			x = ch[x][0];
		}
		splay(rt, x);
		return val[rt];
	}
	
	void lazy_reverse(int x) {
		swap(ch[x][0], ch[x][1]);
		lz[x] ^= 1;
	}
	
	void push_down(int x) {
		if (lz[x]) {
			if (ch[x][0]) lazy_reverse(ch[x][0]);
			if (ch[x][1]) lazy_reverse(ch[x][1]);
			lz[x] = 0;
		}
	}

	void loc1(int& z, int k) {
		int x = z;
		while (true) {
			push_down(x);
			if (sz[ch[x][0]] >= k) {
				x = ch[x][0];
			}
			else if (sz[ch[x][0]] == k - 1) {
				break;
			}
			else {
				k -= sz[ch[x][0]] + cnt[x];
				x = ch[x][1];
			}
			push_down(x);
		}
		splay(z, x);
	}

	void build(int n) {
		for (int i = 1; i <= n + 2; i++) {
			++id;
			ch[id][0] = rt;
			if (rt) fa[rt] = id;
			rt = id;
			val[id] = i - 1;
			cnt[id]++;
			sz[id]++;
		}
		splay(rt, 1);
	}
	
	void reverse(int l, int r) {
		loc1(rt, l);
		loc1(ch[rt][1], r - l + 2);
		int x = ch[ch[rt][1]][0];
		lazy_reverse(x);
		push_down(x);
		splay(rt, x);
	}
	
	void print(int x) {
		if (!x) return;
		push_down(x);
		print(ch[x][0]);
		cout << val[x] << " ";
		print(ch[x][1]);
	}
	
	void print() {
		loc1(rt, 1);
		loc1(ch[rt][1], sz[rt] - 1);
		print(ch[ch[rt][1]][0]);
	}
};
