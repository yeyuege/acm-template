struct PST{
    int tot, n, id;
	vector<int> ls, rs, rt, val;
    
    PST(){}
    PST(int n_, int m_){
        n = n_;
        id = 0;
		ls.resize(n << 5);
		rs.resize(n << 5);
		rt.resize(n << 5);
        val.resize(n << 5);
    }
    PST(vector<int>& init_) {
        tot = 0;
        id = init_.size();
        n = id;
		ls.resize(n << 5);
		rs.resize(n << 5);
		rt.resize(id + 1);
        val.assign(n << 5, -1);
        build(rt[id], 0, n);
        for (int i = id; i >= 1; i--) {
            add(rt[i - 1], rt[i], 0, n, init_[i - 1], i);
        }
    }

    void build(int& now, int l, int r) {
        now = ++tot;
        if (l == r) {
            val[now] == -1;
            return;
        }
        int mid = l + r >> 1;
        build(ls[now], l, mid);
        build(rs[now], mid + 1, r);
    }
    
    int add(int& now, int last, int l, int r, int pos, int v) {
        now = ++tot;
        ls[now] = ls[last];
        rs[now] = rs[last];
        val[now] = val[last];
        if (l == r) {
            val[now] = v;
            return now;
        }
        int mid = l + r >> 1;
        if (pos <= mid) add(ls[now], ls[last], l, mid, pos, v);
        else add(rs[now], rs[last], mid + 1, r, pos, v);
        return now;
    }
    
    int query(int now, int l, int r, int pos) {
        if (l == r) {
            return val[now];
        }
        int mid = l + r >> 1;
        if (pos <= mid) return query(ls[now], l, mid, pos);
        else return query(rs[now], mid + 1, r, pos);
    }

    int query(int now, int pos) {
        return query(rt[now], 0, n, pos);
    }
};
