struct node {
    int l, r;
    mutable ll val;
    int operator < (const node &a) const{
        return l < a.l;
    }
    node(int L, int R, ll Val) : l(L), r(R), val(Val) {}
    node(int L) : l(L) {}
};  

set<node>s;
#define sit set<node>::iterator
sit Split(int pos) {
    sit it = s.lower_bound(node(pos));
    if (it != s.end() && it->l == pos) return it;
    --it;
    int l = it->l, r = it->r;
    ll val = it->val;
    s.erase(it);
    s.insert(node(l, pos - 1, val));
    return s.insert(node(pos, r, val)).first;
}

void Assign(int l, int r, ll val) {
    sit it2 = Split(r + 1), it1 = Split(l);
    s.erase(it1, it2);
    s.insert(node(l, r, val));
}

void Add(int l, int r, ll val) {
    sit it2 = Split(r + 1), it1 = Split(l);
    for (sit it = it1; it != it2; ++it) {
        it->val += val;
    }
}

ll Kth(int l, int r, ll k) {
    sit it2 = Split(r + 1), it1 = Split(l);
    vector<pli> aa;
    aa.clear();
    for (sit it = it1; it != it2; ++it) {
        aa.push_back(pair<ll, int>(it->val, it->r - it->l + 1));
    }

    sort(aa.begin(), aa.end());
    for (int i = 0; i < aa.size(); i++) {
        k -= aa[i].second;
        if (k <= 0) return aa[i].first;
    }
}
