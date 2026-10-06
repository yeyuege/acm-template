vector<int> get_prefer(vector<int>& f, int rt = 0) {
    int n = f.size();
    vector<int> in(n, 0);
    vector<int> p(n - 2);
    for (int i = 0; i < n; i++) {
        if (rt == i) continue;
        in[f[i]]++;
    }

    for (int i = 0, j = 0; i < n - 2; i++, j++) {
        while (in[j]) j++;
        p[i] = f[j];
        while (i < n - 3 && !(--in[p[i]]) && p[i] < j) {
            p[i + 1] = f[p[i]];
            i++;
        }
    }

    return p;
}

vector<int> get_tree(vector<int>& p, int rt = 0) {
    int n = p.size() + 2;
    p.push_back(rt);
    vector<int> f(n, -1), in(n, 0);
    for (int i = 0; i < n - 2; i++) {
        in[p[i]]++;
    }

    for (int i = 0, j = 0; i < n - 1; i++, j++) {
        while (in[j]) j++;
        f[j] = p[i];
        while (i < n - 1 && !(--in[p[i]]) && p[i] < j) {
            f[p[i]] = p[i + 1], ++i;
        }
    }

    return f;
}
