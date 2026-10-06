const ll mod=1e9+7;
template <typename T>
struct Matrix{
    int n, m;
    vector<vector<T>> v;
    Matrix(){}
    Matrix(int n_, int m_){
        init(n_, m_);
    }
    Matrix(vector<vector<T>> a) {
        n = a.size();
        m = a[0].size();
        v = a;
    }

    void init(int n_, int m_) {                   //初始化矩阵 
        n = n_, m = m_;
        v.assign(n, vector<T>(m, 0));
    }

    Matrix operator* (const Matrix &B) const {
        Matrix C(n, B.m);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < B.m; j++) {
                for (int k = 0; k < m; k++) {
                    C.v[i][j] += v[i][k] * B.v[k][j];
                    C.v[i][j] %= mod;
                }       
            }
        }
        return C;
    }

    Matrix operator* (const T &val) const {
        Matrix C(n, m);

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                C.v[i][j] = v[i][j] * val;
                C.v[i][j] %= mod;
            }
        }
        return C;
    }

    void print() {
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++)
                cout << v[i][j] << " ";
            cout << endl;
        }
    }
};

Matrix<ll> quick_Martix(Matrix<ll> a, ll n){
    Matrix<ll> ans(a.n,a.m);
    for(int i=0;i<a.n;i++){
        ans.v[i][i]=1;
    }
    while(n){
        if(n&1)ans=ans*a;
        a=a*a;
        n>>=1;
    }
    return ans;
}
