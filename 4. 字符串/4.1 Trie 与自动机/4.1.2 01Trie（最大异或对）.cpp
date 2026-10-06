constexpr int N = 2e5 * 40;
int tot;

int trie[N][2];
int cnt[N];

int newNode() {
    int x = ++tot;
    trie[x][0] = 0, trie[x][1] = 0;
    cnt[x] = 0;
    return x;
}

void init(){
    tot = 0;
    newNode(); // root
}

void add(int x, int t){
    int o = 1;
    for (int i = 29; i >= 0; i--) {
        if (!trie[o][(x >> i) & 1]) {
            trie[o][(x >> i) & 1] = newNode();
        }
        o = trie[o][(x >> i) & 1];
        cnt[o] += t;
    }
}

int query(int x) {
    int o = 1;
    int ans = 0;
    for (int i = 29; i >= 0; i--) {
        if (cnt[trie[o][1 ^ ((x >> i) & 1)]]) {
            o = trie[o][1 ^ ((x >> i) & 1)];
            ans |= 1 << i;
        }
        else o = trie[o][(x >> i) & 1];
    }
    
    return ans;
}
