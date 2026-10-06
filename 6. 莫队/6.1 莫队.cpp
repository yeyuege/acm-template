struct node{
    int l, r, id;
};

void solve(){
    int n, m, k;
    cin >> n >> m >> k;
    int len = sqrt(n);
    vector<int> a(n);
    vector<node> modui(m);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> modui[i].l >> modui[i].r;
        modui[i].l--, modui[i].r--;
        modui[i].id = i;
    }
    sort(modui.begin(), modui.end(), [&](node& x, node& y){
        if (x.l / len == y.l / len) return x.r < y.r;
        return x.l / len < y.l / len;
    });
    vector<int> cnt(k + 1, 0), res(m, 0);
    int ans = 0;
    
    auto add = [&](int x){
        ans += cnt[x] * 2 + 1;
        cnt[x]++;
    };
    auto del = [&](int x){
        ans -= cnt[x] * 2 - 1;
        cnt[x]--;
    };
    

    int lstl = modui[0].l, lstr = modui[0].l - 1;
    for (int i = 0; i < m; i++) {
        int l = modui[i].l, r = modui[i].r;
        while (lstl > l) --lstl, add(a[lstl]);
        while (lstl < l) del(a[lstl]), ++lstl;
        while (lstr > r) del(a[lstr]), --lstr;
        while (lstr < r) ++lstr, add(a[lstr]);
        res[modui[i].id] = ans;
    }

    for (int i = 0; i < m; i++) {
        cout << res[i] << '\n';
    }
}
