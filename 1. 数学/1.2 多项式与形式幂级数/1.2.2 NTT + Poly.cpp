using Poly = vector<ll>;

// 常用 NTT 模数
// 998244353=2^23×119+1，1004535809=2^21×479+1，469762049=2^26×7+1
const int MOD = 998244353;      // 2^23 * 119 + 1
const int G = 3;                // 原根
unordered_map<int, vector<int>> rev_cache;
vector<ll> wmid_cache = {0};
vector<ll> wmidinv_cache = {0};

// 快速幂
ll qpow(ll a, ll b, ll mod = MOD) {
    ll res = 1;
    while (b) {
        if (b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

ll inv(ll a, ll mod = MOD) {
    return qpow(a, mod - 2, mod);
}

// NTT 变换
// type = 1: 正变换, type = -1: 逆变换
void NTT(Poly& a, int type) {
    int n = a.size();
    
    // 蝴蝶变换（位逆序置换）
    if (!rev_cache.count(n)) {
        int bit = 0;
        while ((1 << bit) < n) bit++;
        vector<int> rev(n);
        for (int i = 0; i < n; i++) {
            rev[i] = (rev[i >> 1] >> 1) | ((i & 1) << (bit - 1));
        }
        rev_cache[n] = move(rev);
    }
    const auto& rev = rev_cache[n];
    
    for (int i = 0; i < n; i++) {
        if (i < rev[i]) swap(a[i], a[rev[i]]);
    }
    
    // 迭代合并
    for (int mid = 1; mid < n; mid <<= 1) {
        // 计算当前单位根：g^((MOD-1)/(2*mid))
        while (wmid_cache.size() <= mid) {
            wmid_cache.push_back(qpow(G, (MOD - 1) / (mid << 1), MOD));
            wmidinv_cache.push_back(qpow(wmid_cache.back(), MOD - 2, MOD));
        }
        ll wmid = wmid_cache[mid];
        if (type == -1) {
            wmid = wmidinv_cache[mid];  // 逆变换用逆元
        }
        
        for (int i = 0; i < n; i += (mid << 1)) {
            ll w = 1;  // 当前单位根
            for (int j = 0; j < mid; j++, w = w * wmid % MOD) {
                ll x = a[i + j];
                ll y = w * a[i + j + mid] % MOD;
                
                a[i + j] = (x + y) % MOD;
                a[i + j + mid] = (x - y + MOD) % MOD;
            }
        }
    }
    
    // 逆变换除以 n
    if (type == -1) {
        ll inv_n = qpow(n, MOD - 2, MOD);
        for (auto& x : a) {
            x = x * inv_n % MOD;
        }
    }
}

// 多项式乘除 x^k
Poly shift(Poly a, int k) {
    if (k >= 0) { // 乘
        a.insert(a.begin(), k, 0);
        return a;
    }
    else if (a.size() < -k) { 
        return Poly();
    }
    else return Poly(a.begin() + (-k), a.end());
}

// 多项式取模 % x ^ k
Poly trunc(Poly a, int k) {
    a.resize(k);
    return a;
}

// 多项式加法
Poly operator+(Poly p, Poly q) {
    int need = max(p.size(), q.size());
    Poly res(need);
    for (int i = 0; i < p.size(); i++) {
        res[i] = (res[i] + p[i]) % MOD;
    }
    for (int i = 0; i < q.size(); i++) {
        res[i] = (res[i] + q[i]) % MOD;
    }
    while (res.size() > 1 && res.back() == 0) res.pop_back();
    return res;
}

// 多项式减法
Poly operator-(Poly p, Poly q) {
    int need = max(p.size(), q.size());
    Poly res(need);
    for (int i = 0; i < p.size(); i++) {
        res[i] = (res[i] + p[i]) % MOD;
    }
    for (int i = 0; i < q.size(); i++) {
        res[i] = (res[i] - q[i] + MOD) % MOD;
    }
    while (res.size() > 1 && res.back() == 0) res.pop_back();
    return res;
}

// 多项式乘法（适用于整数系数）
Poly operator*(Poly p, Poly q) {
    int n = 1;
    int need = p.size() + q.size() - 1;
    while (n < need) n <<= 1;  // 补齐到 2 的幂次
    
    Poly a(n), b(n);
    for (int i = 0; i < p.size(); i++) a[i] = p[i] % MOD;
    for (int i = 0; i < q.size(); i++) b[i] = q[i] % MOD;
    
    NTT(a, 1);  // 正变换
    NTT(b, 1);
    
    for (int i = 0; i < n; i++) {
        a[i] = a[i] * b[i] % MOD;
    }
    
    NTT(a, -1);  // 逆变换
    
    Poly res(need);
    for (int i = 0; i < need; i++) {
        res[i] = a[i] % MOD;
    }
    return res;
}

Poly operator*(Poly p, ll k) {
    for (auto& x : p) {
        x = x * k % MOD;
    }
    return p;
}

Poly operator*(ll k, Poly p) {
    return p * k;
}

Poly operator/(Poly p, ll k) {
    for (auto& x : p) {
        x = x * inv(k) % MOD;
    }
    return p;
}

// 多项式求逆 (mod x ^ m)
Poly inv(Poly a, int m, ll mod = MOD) {
    assert(a.size() != 0);
    Poly x{inv(a[0], mod)};
    int k = 1;
    while (k < m) {
        k *= 2;
        x = trunc(x * (Poly(1, 2) - trunc(a, k) * x), k);
    }
    return x;
}

// 多项式除法 (a / b)
// 要求: b 的首项系数不为 0
Poly operator/(Poly a, Poly b) {
    assert(b.size() != 0 && !(b.size() == 1 && b[0] == 0));
    
    int n = a.size(), m = b.size();
    if (n < m) return Poly();
    
    reverse(all(a));
    reverse(all(b));
    
    // 计算商: q_rev = a_rev * inv(b_rev) mod x^(n-m+1)
    Poly b_inv = inv(b, n - m + 1);
    Poly q_rev = trunc(a * b_inv, n - m + 1);
    
    reverse(all(q_rev));
    return q_rev;
}

// 多项式取模 (a % b)
// 要求: b 的首项系数不为 0
Poly operator%(Poly a, Poly b) {
    assert(b.size() != 0 && !(b.size() == 1 && b[0] == 0));
    
    int n = a.size(), m = b.size();
    if (n < m) return a;  // 被除数次数小于除数，余数为 a 本身
    
    Poly q = a / b;
    
    Poly r = a - q * b;
    
    // 去除前导零
    while (r.size() > 0 && r.back() == 0) {
        r.pop_back();
    }
    if (r.empty()) return Poly{0};
    return r;
}

// 多项式求导
Poly deriv(Poly a) {
    if (a.size() <= 1) return Poly{0};
    Poly res(a.size() - 1);
    for (int i = 1; i < a.size(); i++) {
        res[i - 1] = a[i] * i % MOD;
    }
    return res;
}

// 多项式积分（常数项为 0）
Poly integr(Poly a) {
    Poly res(a.size() + 1);
    res[0] = 0;
    for (int i = 0; i < a.size(); i++) {
        res[i + 1] = a[i] * inv(i + 1) % MOD;
    }
    return res;
}

// 多项式对数 ln(f) mod x^n
// 要求: f[0] = 1
Poly ln(Poly f, int n) {
    assert(f.size() > 0 && f[0] == 1);
    Poly df = deriv(f);
    Poly inv_f = inv(f, n);
    Poly res = trunc(df * inv_f, n - 1);
    res = integr(res);
    res.resize(n);
    return res;
}

// 多项式指数 exp(f) mod x^n
// 要求: f[0] = 0
Poly exp(Poly f, int n) {
    assert(f.size() > 0 && f[0] == 0);
    Poly res{1};
    int k = 1;
    while (k < n) {
        k <<= 1;
        Poly ln_res = ln(res, k);
        Poly tmp = f - ln_res;
        tmp[0] = (tmp[0] + 1) % MOD;
        res = trunc(res * tmp, k);
    }
    return trunc(res, n);
}

// 多项式幂运算 f(x)^k mod x^m
// 要求: f[0] 可能为 0，但最低非零项的次数 * k < m
// 时间复杂度: O(m log m)
// k1 是 f[0] ^ (k1 & phi[MOD]), vis = (k >= MOD) ? 1 : 0
Poly pow(Poly f, ll k, ll m, ll k1 = -1, int vis = 0) {
    if (k1 == -1) k1 = k;
    if (k == 0) {
        Poly res(m, 0);
        res[0] = 1;
        return res;
    }
    // 找到第一个非零系数
    int i = 0;
    while (i < f.size() && f[i] == 0) {
        i++;
    }
    
    // 如果全是零，或者最低次项次数 * k >= m，结果为 0
    if (i == f.size() || 1LL * i * k >= m) {
        return Poly(m);
    }

    if (i != 0 && vis) {
        return Poly(m);
    }
    
    // 提取首项系数
    ll v = f[i];
    ll inv_v = inv(v);
    
    // 将最低次项变为常数项，并归一化
    // f = x^i * v * (1 + ...)
    auto g = shift(f, -i);  // 右移 i 位
    for (auto& x : g) {
        x = x * inv_v % MOD;
    }
    
    // f^k = x^(i*k) * v^k * exp(k * ln(g))
    // 注意: g[0] = 1，满足 ln 的前提条件
    Poly log_g = ln(g, m - i * k);
    for (auto& x : log_g) {
        x = x * k % MOD;
    }
    Poly exp_log = exp(log_g, m - i * k);
    
    // 乘以 v^k
    ll vk = qpow(v, k1);
    for (auto& x : exp_log) {
        x = x * vk % MOD;
    }
    
    // 左移 i*k 位
    Poly res = shift(exp_log, i * k);
    
    // 确保结果长度为 m
    res.resize(m);
    return res;
}

// 多项式开方 sqrt(f) mod x^m
// 要求: f[0] 是二次剩余（在模意义下），通常 f[0] = 1
// 时间复杂度: O(m log m)
Poly sqrt(Poly f, int m) {
    assert(f.size() > 0 && f[0] == 1);  // 要求常数项为 1
    
    Poly x{1};  // 初始猜测 sqrt(f) = 1
    int k = 1;
    
    // Newton 迭代: x = (x + f/x) / 2
    while (k < m) {
        k <<= 1;
        Poly f_trunc = trunc(f, k);
        Poly inv_x = inv(x, k);
        Poly temp = trunc(f_trunc * inv_x, k);
        
        // x = (x + temp) / 2
        x.resize(k);
        for (int i = 0; i < k; i++) {
            x[i] = (x[i] + temp[i]) % MOD;
            x[i] = x[i] * inv(2) % MOD;
        }
    }
    
    return trunc(x, m);
}

// ============ 中项卷积（Middle Product） ============

// 计算 f 和反转后的 b 的卷积的中间部分
// 如果 h = f * rev(b)，返回 h[n-1], h[n], ..., h[n+deg(f)-1]
// 时间复杂度: O(n log n)
Poly mulT(Poly f, Poly b) {
    if (b.size() == 0) {
        return Poly();
    }
    
    int n = b.size();
    
    // 反转 b
    Poly rev_b = b;
    reverse(rev_b.begin(), rev_b.end());
    
    // 计算卷积 h = f * rev_b
    Poly h = f * rev_b;
    
    // 返回从 n-1 开始的项
    return shift(h, -(n - 1));
}

// ============ 多项式多点求值 ============

// 在多个点上计算多项式的值 f(x_i)
// 时间复杂度: O(n log² n)，其中 n = max(f.size(), x.size())
// 空间复杂度: O(n log n)
vector<ll> eval(Poly f, vector<ll> x) {
    if (f.size() == 0) {
        return vector<ll>(x.size(), 0);
    }
    
    int n = max(x.size(), f.size());
    vector<ll> ans(x.size());
    
    // 1. 构建分治树：q[p] = ∏(x - x_i)
    vector<Poly> q(4 * n);
    x.resize(n);
    function<void(int, int, int)> build = [&](int p, int l, int r) {
        if (r - l == 1) {
            q[p] = Poly{1, (-x[l] + MOD) % MOD};
        } else {
            int m = (l + r) / 2;
            build(p * 2, l, m);
            build(p * 2 + 1, m, r);
            q[p] = q[p * 2] * q[p * 2 + 1];
        }
    };
    build(1, 0, n);
    
    // 2. 自顶向下求值
    function<void(int, int, int, const Poly&)> work = [&](int p, int l, int r, const Poly& num) {
        if (r - l == 1) {
            if (l < ans.size()) {
                ans[l] = num[0];
            }
        } else {
            int m = (l + r) / 2;
            
            // 左子树：num mod q[left]
            Poly left_num = mulT(num, q[p * 2 + 1]);
            left_num = trunc(left_num, m - l);
            
            // 右子树：num mod q[right]
            Poly right_num = mulT(num, q[p * 2]);
            right_num = trunc(right_num, r - m);
            
            work(p * 2, l, m, left_num);
            work(p * 2 + 1, m, r, right_num);
        }
    };
    
    Poly q_inv = inv(q[1], f.size());
    Poly init = mulT(f, q_inv);
    init = trunc(init, n);
    
    work(1, 0, n, init);
    
    return ans;
}

// ============ 多项式插值 ============

// 给定点集 (x_i, y_i)，插值得到多项式 f(x)
// 要求: x_i 互不相同
// 时间复杂度: O(n log² n)
Poly interpolate(vector<ll> x, vector<ll> y) {
    int n = x.size();
    if (n == 0) return Poly{0};
    if (n == 1) return Poly{y[0]};
    
    // 1. 构建分治树：tree[p] = ∏_{i=l}^{r-1} (x - x_i)
    vector<Poly> tree(4 * n);
    
    function<void(int, int, int)> build = [&](int p, int l, int r) {
        if (r - l == 1) {
            // 叶子节点：x - x_l
            tree[p] = { (MOD - x[l]) % MOD, 1 };
        } else {
            int m = (l + r) / 2;
            build(p * 2, l, m);
            build(p * 2 + 1, m, r);
            tree[p] = tree[p * 2] * tree[p * 2 + 1];
        }
    };
    build(1, 0, n);
    
    // 2. 计算 P'(x)，其中 P(x) = ∏_{i=0}^{n-1} (x - x_i)
    Poly dP = deriv(tree[1]);
    
    // 3. 多点求值：计算 P'(x_i) = ∏_{j≠i} (x_i - x_j)
    vector<ll> P_prime = eval(dP, x);
    
    // 4. 计算权重 d_i = y_i / P'(x_i)
    vector<ll> d(n);
    for (int i = 0; i < n; i++) {
        d[i] = y[i] * inv(P_prime[i]) % MOD;
    }
    
    // 5. 分治计算 F_{l,r}(x) = ∑ d_i * ∏_{j≠i} (x - x_j)
    function<Poly(int, int, int)> solve = [&](int p, int l, int r) -> Poly {
        if (r - l == 1) {
            // 叶子节点：d_l
            return Poly{d[l]};
        }
        int m = (l + r) / 2;
        
        // 左半部分
        Poly left = solve(p * 2, l, m);
        // 乘以右半部分的 ∏ (x - x_j)
        left = left * tree[p * 2 + 1];
        
        // 右半部分
        Poly right = solve(p * 2 + 1, m, r);
        // 乘以左半部分的 ∏ (x - x_j)
        right = right * tree[p * 2];
        
        // 合并
        Poly res = left + right;
        return res;
    };
    
    Poly result = solve(1, 0, n);
    
    result.resize(n);
    return result;
}

// ============ 多项式复合 ============

// 计算 f(g(x)) mod x^n
// 时间复杂度: O(n log n)（使用特殊算法）或 O(n²)（朴素）
Poly compose(Poly f, Poly g, int n) {
    // 朴素实现 O(n²)，适合小规模
    Poly result(n);
    Poly power(n);
    power[0] = 1;  // g^0 = 1
    
    for (int i = 0; i < min(int(f.size()), n); i++) {
        for (int j = 0; j < n; j++) {
            result[j] = (result[j] + f[i] * power[j]) % MOD;
        }
        
        // 计算下一个 g^i = g^i * g
        if (i + 1 < n) {
            Poly temp = power * g;
            power = trunc(temp, n);
        }
    }
    
    return result;
}

// 多项式转化成整数
Poly tonum(Poly a) {
    Poly res;
    ll sum = 0;
    for (int i = 0; i < a.size(); i++) {
        sum += a[i];
        res.push_back(sum % 10);
        sum /= 10;
    }
    while (sum != 0) {
        res.push_back(sum % 10);
        sum /= 10;
    }

    return res;
}
