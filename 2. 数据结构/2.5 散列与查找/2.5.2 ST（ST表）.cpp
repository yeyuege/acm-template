template <typename T, typename Func = function<T(const T &, const T &)>>
struct ST {
    vector<vector<T>> st;
    Func func;
 
    ST() = default;
    ST(const vector<T> &v, Func func = [](const T &a, const T &b) {
        return max(a, b);
    }) : func(move(func)) {
        int k = bit_width<unsigned>(v.size());
        st.resize(k + 1, vector<T>(v.size()));
        st[0] = v;
        for (int i = 0; i < k; ++i) {
            for (int j = 0; j + (1 << (i + 1)) - 1 < v.size(); ++j) {
                st[i + 1][j] = this->func(st[i][j], st[i][j + (1 << i)]);
            }
        }
    }
    T range(int l, int r) {
        int t = __lg(r - l + 1);
        return func(st[t][l], st[t][r + 1 - (1 << t)]);
    }
};
