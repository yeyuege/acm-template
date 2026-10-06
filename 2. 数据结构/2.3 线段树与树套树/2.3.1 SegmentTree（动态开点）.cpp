const int NST = 2e5 + 5;
struct SegTree{
    int n, cnt, root;
	int ls[NST << 5], rs[NST << 5];
	ll sum[NST << 5], tag[NST << 5];
	SegTree() {}
    SegTree(int n_) {
		init(n_);
    }

	void init(int n_) {
        n = n_;
        cnt = 0;
        root = 0;
	}

    void newnode(int& p) {
        p = ++cnt;
		ls[p] = rs[p] = sum[p] = tag[p] = 0;
    }

    void pushdown(int p, int s, int t) {
        if (!ls[p]) newnode(ls[p]);
        if (!rs[p]) newnode(rs[p]);
        tag[ls[p]] += tag[p];
        tag[rs[p]] += tag[p];
        int mid = s + t >> 1;
        sum[ls[p]] += tag[p] * (mid - s + 1LL);
        sum[rs[p]] += tag[p] * (t - mid);
        tag[p] = 0;
    }

    void pushup(int p) {
        sum[p] = sum[ls[p]] + sum[rs[p]];
    }

    void update(int &p, int l, int r, int s, int t, ll val) {
        if (!p) newnode(p);
        if (t < l || s > r) return;
        if (l <= s && t <= r) {
            sum[p] += val * (t - s + 1);
            tag[p] += val;
            return;
        }
        int mid = s + t >> 1;
        pushdown(p, s, t);
        update(ls[p], l, r, s, mid, val);
        update(rs[p], l, r, mid + 1, t, val);
        pushup(p);
    }

    void update(int l, int r, ll val) {
        update(root, l, r, 0, n, val);
    }

    ll query(int p, int l, int r, int s, int t) {
        if (!p) return 0;
        if (t < l || s > r) return 0;
        if (l <= s && t <= r) {
            return sum[p];
        }
        int mid = s + t >> 1;
        pushdown(p, s, t);
        return query(ls[p], l, r, s, mid) + query(rs[p], l, r, mid + 1, t);
    }

    ll query(int l, int r) {
        return query(root, l, r, 0, n);
    }
} seg;
