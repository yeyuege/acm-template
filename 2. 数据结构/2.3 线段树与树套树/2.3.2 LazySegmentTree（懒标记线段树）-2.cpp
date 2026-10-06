// ==================== Info 和 Tag 定义示例 ====================

// 示例1：区间最小值
struct TagMin {
    int x = 1e9;
    void apply(const TagMin &t) & {
        x = min(x, t.x);
    }
};

struct InfoMin {
    int x = 1e9;
    void apply(const TagMin &t) & {
        x = min(x, t.x);
    }
};

InfoMin operator+(const InfoMin &a, const InfoMin &b) {
    return {min(a.x, b.x)};
}

// 示例2：区间和 + 最值
struct TagSum {
    ll add = 0;
    void apply(const TagSum &t) & {
        add += t.add;
    }
};

struct InfoSum {
    ll sum = 0;
    ll mn = LLONG_MAX / 2;
    ll mx = LLONG_MIN / 2;
    
    void apply(const TagSum &t) & {
        sum += t.add;
        mn += t.add;
        mx += t.add;
    }
};

InfoSum operator+(const InfoSum &a, const InfoSum &b) {
    InfoSum res;
    res.sum = a.sum + b.sum;
    res.mn = min(a.mn, b.mn);
    res.mx = max(a.mx, b.mx);
    return res;
}

// ==================== 动态开点线段树模板 ====================

template<class Info, class Tag, int MAXNODE>
struct DynamicSegTree {
    // 静态数组
    int ls[MAXNODE], rs[MAXNODE];
    Info info[MAXNODE];
    Tag tag[MAXNODE];
    
    int n, cnt, root;
    
    DynamicSegTree() : n(0), cnt(1), root(0) {
        ls[0] = rs[0] = -1;
        info[0] = Info();
        tag[0] = Tag();
    }
    
    DynamicSegTree(int n_) : n(n_), cnt(1), root(0) {
        ls[0] = rs[0] = -1;
        info[0] = Info();
        tag[0] = Tag();
    }
    
    void init(int n_) {
        n = n_;
        cnt = 1;
        root = 0;
        ls[0] = rs[0] = -1;
        info[0] = Info();
        tag[0] = Tag();
    }
    
    // 创建新节点
    int newNode() {
        ls[cnt] = rs[cnt] = -1;
        info[cnt] = Info();
        tag[cnt] = Tag();
        return cnt++;
    }
    
    // 确保节点存在
    int ensure(int p) {
        if (p == -1) p = newNode();
        return p;
    }
    
    // 下传标记
    void pushdown(int p, int s, int t) {
        if (s == t) return;
        
        // 检查标记是否为空（这里需要根据具体的Tag类型判断）
        // 对于不同的Tag，空标记的判断方式不同
        // 这里使用一个通用的方法：比较是否等于默认构造的Tag
        if (tag[p] == Tag()) return;
        
        if (ls[p] == -1) ls[p] = newNode();
        if (rs[p] == -1) rs[p] = newNode();
        
        int mid = (s + t) >> 1;
        
        // 左子节点应用标记
        info[ls[p]].apply(tag[p]);
        tag[ls[p]].apply(tag[p]);
        
        // 右子节点应用标记
        info[rs[p]].apply(tag[p]);
        tag[rs[p]].apply(tag[p]);
        
        tag[p] = Tag(); // 清空标记
    }
    
    // 向上更新
    void pushup(int p) {
        if (ls[p] != -1 && rs[p] != -1) {
            info[p] = info[ls[p]] + info[rs[p]];
        } else if (ls[p] != -1) {
            info[p] = info[ls[p]];
        } else if (rs[p] != -1) {
            info[p] = info[rs[p]];
        }
        // 如果都是 -1，info[p] 保持默认
    }
    
    // 区间修改 [ql, qr]
    void rangeApply(int &p, int s, int t, int ql, int qr, const Tag &v) {
        if (p == -1) p = newNode();
        if (ql <= s && t <= qr) {
            info[p].apply(v);
            tag[p].apply(v);
            return;
        }
        
        pushdown(p, s, t);
        int mid = (s + t) >> 1;
        if (ql <= mid) rangeApply(ls[p], s, mid, ql, qr, v);
        if (qr > mid) rangeApply(rs[p], mid + 1, t, ql, qr, v);
        pushup(p);
    }
    
    void rangeApply(int l, int r, const Tag &v) {
        if (l > r) return;
        rangeApply(root, 0, n, l, r, v);
    }
    
    // 区间查询 [ql, qr]
    Info rangeQuery(int p, int s, int t, int ql, int qr) {
        if (p == -1) return Info();
        if (ql <= s && t <= qr) {
            return info[p];
        }
        
        pushdown(p, s, t);
        int mid = (s + t) >> 1;
        
        if (qr <= mid) return rangeQuery(ls[p], s, mid, ql, qr);
        if (ql > mid) return rangeQuery(rs[p], mid + 1, t, ql, qr);
        
        Info left = rangeQuery(ls[p], s, mid, ql, qr);
        Info right = rangeQuery(rs[p], mid + 1, t, ql, qr);
        return left + right;
    }
    
    Info rangeQuery(int l, int r) {
        if (l > r) return Info();
        return rangeQuery(root, 0, n, l, r);
    }
    
    // 单点修改（便捷接口）
    void modify(int pos, const Info &v) {
        function<void(int, int, int)> modify = [&](int p, int s, int t) {
            if (p == -1) p = newNode();
            if (s == t) {
                info[p] = v;
                return;
            }
            pushdown(p, s, t);
            int mid = (s + t) >> 1;
            if (pos <= mid) modify(ls[p], s, mid);
            else modify(rs[p], mid + 1, t);
            pushup(p);
        };
        modify(root, 0, n);
    }
    
    // 单点加（便捷接口）
    void add(int pos, const Tag &v) {
        rangeApply(pos, pos, v);
    }
    
    // 获取单点值
    Info get(int pos) {
        return rangeQuery(pos, pos);
    }
    
    // 特化：区间取半操作（向下取整）- 仅当Info有mx和mn字段时可用
    void half(int p, int s, int t, int ql, int qr) {
        if (p == -1) return;
        if (ql > t || qr < s) return;
        
        // 这里假设Info有mx和mn字段，并且支持除法
        // 如果Info没有这些字段，这个函数需要特化或移除
        if (ql <= s && t <= qr && (info[p].mx / 2) == ((info[p].mn + 1) / 2)) {
            Tag v;
            // 这里需要根据具体的Tag类型设置值
            // 假设Tag有add字段
            v.add = -(info[p].mx / 2);
            info[p].apply(v);
            tag[p].apply(v);
            return;
        }
        
        if (s == t) {
            Tag v;
            v.add = -(info[p].sum / 2);
            info[p].apply(v);
            return;
        }
        
        pushdown(p, s, t);
        int mid = (s + t) >> 1;
        if (ql <= mid) half(ls[p], s, mid, ql, qr);
        if (qr > mid) half(rs[p], mid + 1, t, ql, qr);
        pushup(p);
    }
    
    void half(int l, int r) {
        if (l > r) return;
        half(root, 0, n, l, r);
    }
    
    // 查找第一个满足条件的元素
    template<class F>
    int findFirst(int p, int s, int t, int ql, int qr, F &&pred) {
        if (p == -1) return -1;
        if (ql > t || qr < s) return -1;
        if (ql <= s && t <= qr && !pred(info[p])) {
            return -1;
        }
        if (s == t) {
            return s;
        }
        
        pushdown(p, s, t);
        int mid = (s + t) >> 1;
        int res = -1;
        
        if (ql <= mid) {
            res = findFirst(ls[p], s, mid, ql, qr, pred);
        }
        if (res == -1 && qr > mid) {
            res = findFirst(rs[p], mid + 1, t, ql, qr, pred);
        }
        return res;
    }
    
    template<class F>
    int findFirst(int l, int r, F &&pred) {
        if (l > r) return -1;
        return findFirst(root, 0, n, l, r, pred);
    }
    
    // 查找最后一个满足条件的元素
    template<class F>
    int findLast(int p, int s, int t, int ql, int qr, F &&pred) {
        if (p == -1) return -1;
        if (ql > t || qr < s) return -1;
        if (ql <= s && t <= qr && !pred(info[p])) {
            return -1;
        }
        if (s == t) {
            return s;
        }
        
        pushdown(p, s, t);
        int mid = (s + t) >> 1;
        int res = -1;
        
        if (qr > mid) {
            res = findLast(rs[p], mid + 1, t, ql, qr, pred);
        }
        if (res == -1 && ql <= mid) {
            res = findLast(ls[p], s, mid, ql, qr, pred);
        }
        return res;
    }
    
    template<class F>
    int findLast(int l, int r, F &&pred) {
        if (l > r) return -1;
        return findLast(root, 0, n, l, r, pred);
    }
    
    // 调试：获取节点数量
    int nodeCount() const {
        return cnt;
    }
};

// ==================== 使用示例 ====================

const int MAXNODE = 20000000;

// 使用区间最小值版本
using SegTreeMin = DynamicSegTree<InfoMin, TagMin, MAXNODE>;
SegTreeMin segMin;

// 使用区间和版本
using SegTreeSum = DynamicSegTree<InfoSum, TagSum, MAXNODE>;
SegTreeSum segSum;
