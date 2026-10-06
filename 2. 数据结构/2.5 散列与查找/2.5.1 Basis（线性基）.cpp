const int N = 60;
template <typename T>
struct Basis {
    T a[N] {};
    T t[N] {};
    vector<T> rebuilt;
    bool has_zero;

    Basis() {
        std::fill(a, a + N, 0);
        std::fill(t, t + N, -1);
        has_zero = false;
    }

    void add(T num, int y = 1E9) {
        for (int i = N - 1; i >= 0; i--) {
            if (num >> i & 1) {
                if(a[i] == 0) {
                    a[i] = num;
                    t[i] = y;
                    return;
                }
                num ^= a[i];
            }
        }
        has_zero = true;
    }

    bool query(T x, int y = 0) {
        for (int i = N - 1; i >= 0; i--) {
            if ((x >> i & 1) && t[i] >= y) {
                x ^= a[i];
            }
            return x == 0;
        }
    }

    T getmax() {
        T res = 0;
        for (int i = N - 1; i >= 0; i--) {
            if(a[i] != 0) {
                res = max(res, res ^ a[i]);
            }
        }
        return res;
    }

    T getmin() {
        if (has_zero) return 0;
        for (int i = 0; i < N; i++) {
            if (a[i] != 0) return a[i];
        }
        return 0;
    }

    void rebuild() {
        rebuilt.clear();
        T temp[N];
        std::copy(a, a + N, temp);

        for (int i = N - 1; i >= 0; i--) {
            if (temp[i] == 0) continue;

            for(int j = i - 1; j >= 0; j--) {
                if (temp[j] && (temp[i] >> j & 1)) {
                    temp[i] ^= temp[j];
                }
            }

            rebuilt.push_back(temp[i]);
        }

        std::reverse(rebuilt.begin(), rebuilt.end());
    }

    T kth_xor(T k) {
        if (rebuilt.empty()) {
            rebuild();
        }

        if (has_zero) {
            if (k == 0) return 0;
            k--;
        }

        if (k >= (1LL << rebuilt.size())) {
            return -1;
        }

        T res = 0;
        for (int i = 0; i <= rebuilt.size(); i++) {
            if (k >> i & 1) {
                res ^= rebuilt[i];
            }
        }

        return res;
    }

    T getrank(T x) {
        if (rebuilt.empty()) {
            rebuild();
        }

        T res = 0;
        T temp = x;

        for (int i = 0; i < rebuilt.size(); i++) {
            int pivot = 0;
            T val = rebuilt[i];
            while (val > 0 && (val & 1) == 0) {
                val >>= 1;
                pivot++;
            }

            if (temp >> pivot & 1) {
                res |= (1LL << i);
                temp ^= rebuilt[i];
            }
        }

        if (temp != 0) return -1;

        if (has_zero) res++;

        return res;
    }
};
