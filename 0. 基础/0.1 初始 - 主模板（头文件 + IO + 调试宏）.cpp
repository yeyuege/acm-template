#include<bits/stdc++.h>
// #pragma GCC optimize("Ofast,unroll-loops")
// #pragma GCC target("avx2,popcnt")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
// using namespace std::chrono;
using namespace std;
// #define int long long
typedef long long ll;
typedef unsigned long long ull;

template<class T1, class T2> istream &operator>>(istream &cin, pair<T1, T2> &a) { return cin >> a.first >> a.second; }
template <std::size_t Index = 0, typename... Ts> typename std::enable_if<Index == sizeof...(Ts), void>::type tuple_read(std::istream &is, std::tuple<Ts...> &t) { }
template <std::size_t Index = 0, typename... Ts> typename std::enable_if < Index < sizeof...(Ts), void>::type tuple_read(std::istream &is, std::tuple<Ts...> &t) { is >> std::get<Index>(t); tuple_read<Index + 1>(is, t); }
template <typename... Ts>std::istream &operator>>(std::istream &is, std::tuple<Ts...> &t) { tuple_read(is, t); return is; }
template<class T1> istream &operator>>(istream &cin, valarray<T1> &a);
template<class T1> istream &operator>>(istream &cin, valarray<T1> &a) { for (auto &x : a) cin >> x; return cin; }
template<class T1, size_t N> istream &operator>>(istream &cin, array<T1, N> &a) { for (auto &x : a) cin >> x; return cin; }
template<class T1> istream &operator>>(istream &cin, vector<T1> &a) { for (auto &x : a) cin >> x; return cin; }

using u8 = uint8_t;
using u16 = uint16_t;
using u32 = uint32_t;
using i64 = long long;
using u64 = uint64_t;
using i128 = __int128;
using u128 = unsigned __int128;
using f128 = __float128;    

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define MIN(v) *min_element(all(v))
#define MAX(v) *max_element(all(v))

template <typename T, typename U>
T SUM(const U &A) {
  return std::accumulate(A.begin(), A.end(), T{});
}

namespace DBG
{

    template <class T, class U>
    ostream& operator << (ostream& os,const pair<T, U> &v)
    {
        os<<"(";
        os << v.first << ", " << v.second;
        os<<")";
        return os;
    }

    template <class T,size_t N>
    ostream& operator << (ostream& os,const array<T,N> &v)
    {
        os<<"[ ";
        for (int i=0;i<v.size();i++)
        {
            os<<v[i];
            if (i+1<v.size())
                os<<", ";
        }
        os<<" ]";
        return os;
    }

    template <class T>
    ostream& operator << (ostream& os,const vector<T> &v)
    {
        os<<"[";
        for (int i=0;i<v.size();i++)
        {
            os<<v[i];
            if (i+1<v.size())
                os<<", ";
        }
        os<<"]";
        return os;
    }

    template <class T>
    void _dbg(const char *f,T t)
    {
        cerr<<f<<" = "<<t<<'\n';
    }

    template <class A,class... B>
    void _dbg(const char *f,A a,B... b)
    {
        while (*f!=',') cerr<<*f++;
        cerr<<" = "<<a<<",";
        _dbg(f+1,b...);
    }

    #define dbg(...) _dbg(#__VA_ARGS__, __VA_ARGS__)
}

using namespace DBG;
bool BM;

void yeyuege() {

}

void solve() {
    
}

bool EM;
double MM;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cout << fixed << setprecision(15);
    // auto start = high_resolution_clock::now();
    yeyuege();
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    // auto end = high_resolution_clock::now();
    // auto duration = duration_cast<microseconds>(end - start);
    // MM = (&EM-&BM)/1024.0/1024;
    // cerr << "Time: " << duration.count()/1000 << " ms" << endl;
    // std::cerr << "Memory: " << MM << "MB" << '\n';
    return 0;
}
