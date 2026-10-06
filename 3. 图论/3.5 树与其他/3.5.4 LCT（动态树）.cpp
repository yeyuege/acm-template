const int mod = 51061;

struct Tag {
    int sum = 0;
    int mul = 1;
    void apply(const Tag &t) & {
        mul = mul * t.mul % mod;
        sum = sum * t.mul % mod;
        sum = (sum + t.sum) % mod;
    }
};

struct Info {
    int sum = 0;
    int val = 1;
    int siz = 0;
    void apply(const Tag &t) & {
        sum = sum * t.mul % mod;
        sum = (sum + t.sum * siz % mod) % mod;
        val = val * t.mul % mod;
        val = (val + t.sum) % mod;
    }
};

// Info operator+(const Info &a, const Info &b) {
//     return {(a.sum + b.sum) % mod};
// }

const int N = 1e6 + 5;
int ch[N][2], f[N], tag[N], siz[N];
Tag laz[N];
Info info[N];
int std_tag = 0;

#define ls ch[p][0]
#define rs ch[p][1]

void Apply(int p, const Tag& t) {
    laz[p].apply(t);
    info[p].apply(t);
}

inline void push_up(int p) {
    info[0].val = 0;
    info[0].sum = 0;
	siz[p] = siz[ls] + siz[rs] + 1;
    info[p].siz = siz[p];
    info[p].sum = (info[ls].sum + info[rs].sum + info[p].val) % mod;
}

inline void push_down(int p) {
    info[0].val = 0;
    info[0].sum = 0;
    if (ch[p][0]) {
        laz[ch[p][0]].apply(laz[p]);
        info[ch[p][0]].apply(laz[p]);
    }
    if (ch[p][1]) {
        laz[ch[p][1]].apply(laz[p]);
        info[ch[p][1]].apply(laz[p]);
    }
    laz[p] = Tag();
	if (tag[p] != std_tag) {
		swap(ls, rs);
        if (ls) tag[ls] ^= 1;
        if (rs) tag[rs] ^= 1;
		tag[p] = std_tag;
	}
}

#define Get(x) (ch[f[x]][1] == x)

#define isRoot(x) (ch[f[x]][0] != x && ch[f[x]][1] != x)

inline void rotate(int x) {
	int y = f[x], z = f[y], k = Get(x), w = ch[x][!k];
	if (!isRoot(y)) ch[z][ch[z][1] == y] = x;
	ch[y][k] = ch[x][!k];
	ch[x][!k] = y;
	f[w] = y, f[y] = x, f[x] = z;
	push_up(y);
	push_up(x);
}

inline void update(int p) {
	if (!isRoot(p)) update(f[p]);
	push_down(p);
}

inline void splay(int x) {
	update(x);
	for (int fa; fa = f[x], !isRoot(x); rotate(x)) {
		if (!isRoot(fa)) rotate(Get(fa) == Get(x) ? fa : x);
	}
	push_up(x);
}

inline int access(int x) {
	int p;
	for (p = 0; x; p = x, x = f[x]) {
		splay(x), ch[x][1] = p, push_up(x);
	}

	return p;
}

inline void makeroot(int p) {
	access(p);
	splay(p);
	tag[p] ^= 1;
}

inline int find(int p) {
	access(p);
	splay(p);
	while (ls) push_down(p), p = ls;
	return p;
}

inline bool link(int x, int y) {
	makeroot(x);
	if (find(y) == x) return 0;
	f[x] = y;
	return 1;
}

inline void split(int x, int y) {
	makeroot(x);
	access(y);
	splay(y);
}

inline bool cut(int x, int p) {
	split(x, p);
	if (ch[p][!Get(x)] || f[x] != p || ch[x][1]) return 0;
	f[x] = ch[p][0] = 0;
	push_up(p);
	return 1;
}
