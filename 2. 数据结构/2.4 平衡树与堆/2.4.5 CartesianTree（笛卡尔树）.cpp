struct CartesianTree{
    int root, n;
    vector<int> a;
    vector<int> ls, rs;
    vector<int> v;
    
    void clear() {
        root = 0;
        v.clear();
        for (int i = 0; i < n; i++) {
            ls[i] = rs[i] = 0;
        }
    }
    
    CartesianTree(){}
    CartesianTree(int n_) {
        n = n_;
        a.resize(n);
        ls.assign(n, -1);
        rs.assign(n, -1);
    }
    CartesianTree(vector<int>& b) {
        n = b.size();
        a.resize(n);
        for (int i = 0; i < n; i++) {
            a[i] = b[i];
        }
        ls.assign(n, -1);
        rs.assign(n, -1);
        build();
    }
    
    void modify(int pos, int val) {
        a[pos] = val;
        return;
    }
    
    void build() {
        for(int i = 0; i < n; i++) {
            int j = -1;

            // < big
            // > small
            while (v.size() && a[v.back()] > a[i]) {
                j = v.back();
                v.pop_back();
            }
            
            if (!v.size()) root = i;
            else rs[v.back()] = i;
            
            ls[i] = j;
            v.push_back(i);
        }
    }

    int query(int l, int r) {
        int x = root;
        while (!(l <= x && x <= r)) {
            if (x > r) x = ls[x];
            else if (x < l) x = rs[x];
        }

        return a[x];
    }
};
