struct SuffixArray{
    const int K = 21;
    int n;
    vector<int>sa,rk,ht;
    vector<vector<int>>st;
    SuffixArray(const string &s){
        n=s.length();
        sa.resize(n);
        rk.resize(n);
        ht.resize(n);
        st.resize(K, vector<int>(n));
        for (int i = 0; i < n;i++) {
            sa[i] = i;
            rk[i] = s[i];
        }

        int w = 1;

        auto cmp = [&](int x, int y) {
            if (rk[x] != rk[y])return rk[x] < rk[y];
            int rx = (x + w < n ? rk[x + w] : -1);
            int ry = (y + w < n ? rk[y + w] : -1);
            return rx < ry;
        };

        for (w = 1; w < n; w *= 2) {
            sort(sa.begin(), sa.begin() + n, cmp);
            vector<int>rkt(n);
            rkt[sa[1]] = 1;
            for(int i = 1; i < n; i++){
                rkt[sa[i]] = rkt[sa[i - 1]] + cmp(sa[i - 1], sa[i]);
            }
            for(int i = 0; i < n; i++){
                rk[i] = rkt[i];
            }
        }

        ht[0] = 0;
        for(int i = 0, h = 0; i < n; i++){
            if(rk[i] == 0)continue;
            if(h > 0){
                h--;
            }
            while(i + h < n && sa[rk[i] - 1] + h < n && s[i + h] == s[sa[rk[i] - 1] + h]){
                h++;
            }
            ht[rk[i]] = h;
        }

        for(int i = 0; i < n; i++){
            st[0][i] = ht[i];
        }

        for(int j = 0; j < K - 1; j++){
            for(int i = 0; i + (2 << j) <= n - 1; i++){
                st[j + 1][i] = min(st[j][i], st[j][i + (1 << j)]);
            }
        }

    }

    int lcp(int l,int r){
        int k = log2(r - l);
        l++;
        return min(st[k][l], st[k][r - (1 << k) + 1]);
    } 
};
