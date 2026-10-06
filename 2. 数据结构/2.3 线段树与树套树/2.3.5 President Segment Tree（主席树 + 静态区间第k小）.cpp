const int NPST = 2e5 + 5;
struct PST{
    int tot, n, id;
	int sum[NPST << 5], ls[NPST << 5], rs[NPST << 5], rt[NPST << 5];
    
    PST(){}
    PST(int n_){
		init(n_);
    }

	void init(int n_) {
        n = n_;
        id = 1;
	}
    
    void add(int& now, int last, int l, int r, int x) {
        now = ++tot;
        sum[now] = sum[last] + 1;
        ls[now] = ls[last];
        rs[now] = rs[last];
        if (l == r) return;
        int mid = l + r >> 1;
        if (x <= mid) add(ls[now], ls[last], l, mid, x);
        else add(rs[now], rs[last], mid + 1, r, x);
    }
    
    void add(int x) {
        add(rt[id], rt[id - 1], 0, n, x);
        id++;
    }
    
    int query(int L, int R, int l, int r, int x) {
        if (l == r) return l;
        int p = sum[ls[R]] - sum[ls[L]];
        int mid = l + r >> 1;
        if (p >= x) return query(ls[L], ls[R], l, mid, x);
        else return query(rs[L], rs[R], mid + 1, r, x - p);
    }
    
    int query(int L, int R, int x) {
        return query(rt[L - 1], rt[R], 0, n, x);
    }
} pst;
