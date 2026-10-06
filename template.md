# 目录

- [0. 基础](#0.-基础)
  - [0.1 初始 / 主模板（头文件 + IO + 调试宏）](#0.1-初始--主模板头文件--io--调试宏)
  - [0.2 c++头文件](#0.2-c头文件)
  - [0.3 快读](#0.3-快读)
  - [0.4 Python](#0.4-python)
  - [0.5 I128](#0.5-i128)
  - [0.6 pb_ds + 部分STL](#0.6-pb_ds--部分stl)
- [1. 数学](#1.-数学)
  - [1.1 数论](#1.1-数论)
    - [1.1.1 数论恒等式汇总](#1.1.1-数论恒等式汇总)
      - [1.1.1.1 基本恒等式](#1.1.1.1-基本恒等式)
      - [1.1.1.2 欧拉函数与莫比乌斯函数](#1.1.1.2-欧拉函数与莫比乌斯函数)
      - [1.1.1.3 常用数论函数表](#1.1.1.3-常用数论函数表)
      - [1.1.1.4 求和变换](#1.1.1.4-求和变换)
      - [1.1.1.5 高级函数](#1.1.1.5-高级函数)
        - [1.1.1.5.1 Jordan totient 函数](#1.1.1.5.1-jordan-totient-函数)
        - [1.1.1.5.2 Liouville 函数](#1.1.1.5.2-liouville-函数)
        - [1.1.1.5.3 Ramanujan 和](#1.1.1.5.3-ramanujan-和)
      - [1.1.1.6 狄利克雷卷积](#1.1.1.6-狄利克雷卷积)
    - [1.1.2 sieve（欧拉筛）](#1.1.2-sieve欧拉筛)
    - [1.1.3 exBSGS（拓展大步小步算法）](#1.1.3-exbsgs拓展大步小步算法)
    - [1.1.4 CRT（中国剩余定理）](#1.1.4-crt中国剩余定理)
    - [1.1.5 exgcd（拓展欧几里得）](#1.1.5-exgcd拓展欧几里得)
    - [1.1.6 Lucas（卢卡斯定理）](#1.1.6-lucas卢卡斯定理)
    - [1.1.7 Mobius（莫比乌斯）](#1.1.7-mobius莫比乌斯)
    - [1.1.8 Primitive Root（原根）](#1.1.8-primitive-root原根)
    - [1.1.9 杜教筛](#1.1.9-杜教筛)
    - [1.1.10 Min_25筛](#1.1.10-min_25筛)
    - [1.1.11 二次剩余](#1.1.11-二次剩余)
      - [1.1.11.1 欧拉准则](#1.1.11.1-欧拉准则)
      - [1.1.11.2 Cipolla算法](#1.1.11.2-cipolla算法)
    - [1.1.12 常用数学类（double gcd）](#1.1.12-常用数学类double-gcd)
  - [1.2 多项式与形式幂级数](#1.2-多项式与形式幂级数)
    - [1.2.1 Poly（with，MInt & MLong）](#1.2.1-polywithmint--mlong)
    - [1.2.2 NTT + Poly](#1.2.2-ntt--poly)
    - [1.2.3 Comb（组合数）](#1.2.3-comb组合数)
    - [1.2.4 Comb（Z）](#1.2.4-combz)
  - [1.3 线性代数](#1.3-线性代数)
    - [1.3.1 Matrix（矩阵）](#1.3.1-matrix矩阵)
    - [1.3.2 guass（高斯消元法 + 解方程 + 浮点型）](#1.3.2-guass高斯消元法--解方程--浮点型)
    - [1.3.3 guass（高斯消元法 + 行列式计算 + 整数型）](#1.3.3-guass高斯消元法--行列式计算--整数型)
    - [1.3.4 gauss_jordan（高斯约旦消元法）](#1.3.4-gauss_jordan高斯约旦消元法)
  - [1.4 数值方法](#1.4-数值方法)
    - [1.4.1 simpson（辛普森积分）](#1.4.1-simpson辛普森积分)
    - [1.4.2 lagrange_interpolation（拉格朗日差值）](#1.4.2-lagrange_interpolation拉格朗日差值)
- [2. 数据结构](#2.-数据结构)
  - [2.1 并查集](#2.1-并查集)
    - [2.1.1 DSU（并查集）](#2.1.1-dsu并查集)
    - [2.1.2 DSU With Rollback（可撤销并查集）](#2.1.2-dsu-with-rollback可撤销并查集)
  - [2.2 树状数组](#2.2-树状数组)
    - [2.2.1 Fenwick（树状数组）](#2.2.1-fenwick树状数组)
    - [2.2.2 Fenwick（树状数组 + 区间加）](#2.2.2-fenwick树状数组--区间加)
    - [2.2.3 Fenwick2D（二维树状数组 + 单点修改 + 矩阵查询）](#2.2.3-fenwick2d二维树状数组--单点修改--矩阵查询)
    - [2.2.4 Fenwick2D（二维树状数组 + 矩阵加 + 矩阵和查询）](#2.2.4-fenwick2d二维树状数组--矩阵加--矩阵和查询)
  - [2.3 线段树与树套树](#2.3-线段树与树套树)
    - [2.3.1 SegmentTree（动态开点）](#2.3.1-segmenttree动态开点)
    - [2.3.2 LazySegmentTree（懒标记线段树）](#2.3.2-lazysegmenttree懒标记线段树)
    - [2.3.3 SegmentTree（线段树合并）](#2.3.3-segmenttree线段树合并)
    - [2.3.4 SegmentTree（线段树分裂）](#2.3.4-segmenttree线段树分裂)
    - [2.3.5 President Segment Tree（主席树 + 静态区间第k小）](#2.3.5-president-segment-tree主席树--静态区间第k小)
    - [2.3.6 树套树（单点修+区域查询）](#2.3.6-树套树单点修区域查询)
    - [2.3.7 Li Chao Segment Tree（李超线段树）](#2.3.7-li-chao-segment-tree李超线段树)
  - [2.4 平衡树与堆](#2.4-平衡树与堆)
    - [2.4.1 Fhq（非旋Treap）](#2.4.1-fhq非旋treap)
    - [2.4.2 Splay（Splay树，伸展树）](#2.4.2-splaysplay树伸展树)
    - [2.4.3 文艺平衡树 （无旋Treap版）](#2.4.3-文艺平衡树-无旋treap版)
    - [2.4.4 左偏树](#2.4.4-左偏树)
    - [2.4.5 CartesianTree（笛卡尔树）](#2.4.5-cartesiantree笛卡尔树)
  - [2.5 散列与查找](#2.5-散列与查找)
    - [2.5.1 Basis（线性基）](#2.5.1-basis线性基)
    - [2.5.2 ST（ST表）](#2.5.2-stst表)
    - [2.5.3 Chtholly Tree（珂朵莉树 OTD）](#2.5.3-chtholly-tree珂朵莉树-otd)
    - [2.5.4 Subsequence Automaton（子序列自动机 + 主席树实现）](#2.5.4-subsequence-automaton子序列自动机--主席树实现)
  - [2.6 数值与数学封装](#2.6-数值与数学封装)
    - [2.6.1 Modint（取模类）](#2.6.1-modint取模类)
    - [2.6.2 Fraction（分数类）](#2.6.2-fraction分数类)
    - [2.6.3 Bigint（高精度）](#2.6.3-bigint高精度)
- [3. 图论](#3.-图论)
  - [3.1 连通性](#3.1-连通性)
    - [3.1.1 SCC（强联通分量）](#3.1.1-scc强联通分量)
    - [3.1.2 EBCC（边双连通分量）](#3.1.2-ebcc边双连通分量)
    - [3.1.3 VBCC（点双连通分量）](#3.1.3-vbcc点双连通分量)
    - [3.1.4 Block-Cut Tree（圆方树）](#3.1.4-block-cut-tree圆方树)
  - [3.2 生成树](#3.2-生成树)
    - [3.2.1 Boruvka （最小生成树）](#3.2.1-boruvka-最小生成树)
    - [3.2.2 prufer序列](#3.2.2-prufer序列)
  - [3.3 匹配](#3.3-匹配)
    - [3.3.1 HopcroftKarp（二分图最大匹配 ）](#3.3.1-hopcroftkarp二分图最大匹配-)
    - [3.3.2 Graph（一般图最大匹配 + 带花树算法）](#3.3.2-graph一般图最大匹配--带花树算法)
  - [3.4 网络流与割](#3.4-网络流与割)
    - [3.4.1 MaxFlow（最大流）](#3.4.1-maxflow最大流)
    - [3.4.2 MinCostFlow（最小费用最大流）](#3.4.2-mincostflow最小费用最大流)
    - [3.4.3 Stoer_Wagner（无向图最小割）](#3.4.3-stoer_wagner无向图最小割)
    - [3.4.4 Flow(浮点应用)](#3.4.4-flow浮点应用)
  - [3.5 树与其他](#3.5-树与其他)
    - [3.5.1 LCA （倍增）](#3.5.1-lca-倍增)
    - [3.5.2 HLD（树链剖分）](#3.5.2-hld树链剖分)
    - [3.5.3 虚树](#3.5.3-虚树)
    - [3.5.4 LCT（动态树）](#3.5.4-lct动态树)
    - [3.5.5 TwoSat（2-SAT）](#3.5.5-twosat2-sat)
    - [3.5.6 三元环计数问题](#3.5.6-三元环计数问题)
- [4. 字符串](#4.-字符串)
  - [4.1 Trie 与自动机](#4.1-trie-与自动机)
    - [4.1.1 Trie（字典树）](#4.1.1-trie字典树)
    - [4.1.2 01Trie（最大异或对）](#4.1.2-01trie最大异或对)
    - [4.1.3 01Trie（区间最小下标）](#4.1.3-01trie区间最小下标)
    - [4.1.4 AC自动机](#4.1.4-ac自动机)
      - [4.1.4.1 数组版](#4.1.4.1-数组版)
      - [4.1.4.2 结构体版·string](#4.1.4.2-结构体版string)
      - [4.1.4.3 结构体版·vector](#4.1.4.3-结构体版vector)
    - [4.1.5 Fail Tree（失配树）](#4.1.5-fail-tree失配树)
  - [4.2 字符串匹配](#4.2-字符串匹配)
    - [4.2.1 KMP算法](#4.2.1-kmp算法)
    - [4.2.2 Z函数（拓展KMP）](#4.2.2-z函数拓展kmp)
    - [4.2.3 Manacher（马拉车）](#4.2.3-manacher马拉车)
    - [4.2.4 最小表示法](#4.2.4-最小表示法)
  - [4.3 后缀结构](#4.3-后缀结构)
    - [4.3.1 SAM（后缀自动机）](#4.3.1-sam后缀自动机)
    - [4.3.2 SA（后缀数组）](#4.3.2-sa后缀数组)
- [5. 计算几何](#5.-计算几何)
  - [5.1 点、线、基本函数](#5.1-点线基本函数)
  - [5.2 三维点与向量](#5.2-三维点与向量)
  - [5.3 凸包（Graham 扫描法）](#5.3-凸包graham-扫描法)
  - [5.4 旋转卡壳](#5.4-旋转卡壳)
- [6. 莫队](#6.-莫队)
  - [6.1 莫队](#6.1-莫队)
  - [6.2 带修莫队](#6.2-带修莫队)
  - [6.3 回滚莫队](#6.3-回滚莫队)
  - [6.4 莫队二次离线 / 第十四分块(前体)](#6.4-莫队二次离线--第十四分块前体)
- [7. 其他](#7.-其他)
  - [7.1 随机数、树、图生成](#7.1-随机数树图生成)
  - [7.2 对拍](#7.2-对拍)

---
# 0. 基础

## 0.1 初始 / 主模板（头文件 + IO + 调试宏）

```c++
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
```

## 0.2 c++头文件

```c++
#include <algorithm>
#include <array>
#include <bit>
#include <bitset>
#include <cassert>
#include <cctype>
#include <chrono>
#include <climits>
#include <cmath>
#include <cstdint>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <ranges>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
```

## 0.3 快读

```c++
inline int read() {
	int s = 0, w = 1;
	char ch = getchar();
	while (ch < '0' || ch > '9') {
		if (ch == '-') w = -1;
		ch = getchar();
	}
	while (ch >= '0' && ch <= '9') s = s * 10 + ch - '0', ch = getchar();
	return s * w;
}
```

```c++
// ============ fread 快速输入 ============
const int MAXBUF = 1 << 20;
static char buf[MAXBUF];
char *p1 = buf, *p2 = buf;

inline char getchar_fread() {
    if (p1 == p2) {
        p2 = (p1 = buf) + fread(buf, 1, MAXBUF, stdin);
        if (p1 == p2) return EOF;
    }
    return *p1++;
}

inline int read() {
    int s1 = 0, w = 1;
    char ch = getchar_fread();
    while (ch < '0' || ch > '9') {
        if (ch == '-') w = -1;
        ch = getchar_fread();
    }
    while (ch >= '0' && ch <= '9') {
        s1 = s1 * 10 + ch - '0';
        ch = getchar_fread();
    }
    return s1 * w;
}

inline char read_char() {
    char ch = getchar_fread();
    while (ch == ' ' || ch == '\n' || ch == '\r' || ch == '\t') {
        ch = getchar_fread();
    }
    return ch;
}
// ========================================
```

## 0.4 Python

```python
standard_input, packages, output_together = 1, 1, 0
dfs, hashing, read_from_file = 1, 0, 0
de = 1
  
if 1:
  
    if standard_input:
        import io, os, sys
        input = lambda: sys.stdin.readline().strip()
  
        import math
        inf = math.inf
  
        def I():
            return input()
         
        def II():
            return int(input())
  
        def MII():
            return map(int, input().split())
  
        def LI():
            return input().split()
  
        def LII():
            return list(map(int, input().split()))
  
        def LFI():
            return list(map(float, input().split()))
  
        def GMI():
            return map(lambda x: int(x) - 1, input().split())
  
        def LGMI():
            return list(map(lambda x: int(x) - 1, input().split()))
  
    if packages:
        from io import BytesIO, IOBase
  
        import random
        import os
  
        import bisect
        import typing
        from collections import Counter, defaultdict, deque
        from copy import deepcopy
        from functools import cmp_to_key, lru_cache, reduce
        from heapq import merge, heapify, heappop, heappush, heappushpop, nlargest, nsmallest, heapreplace
        from itertools import accumulate, combinations, permutations, count, product
        from operator import add, iand, ior, itemgetter, mul, xor
        from string import ascii_lowercase, ascii_uppercase, ascii_letters
        from typing import *
        BUFSIZE = 4096
  
    if output_together:
        class FastIO(IOBase):
            newlines = 0
  
            def __init__(self, file):
                self._fd = file.fileno()
                self.buffer = BytesIO()
                self.writable = "x" in file.mode or "r" not in file.mode
                self.write = self.buffer.write if self.writable else None
  
            def read(self):
                while True:
                    b = os.read(self._fd, max(os.fstat(self._fd).st_size, BUFSIZE))
                    if not b:
                        break
                    ptr = self.buffer.tell()
                    self.buffer.seek(0, 2), self.buffer.write(b), self.buffer.seek(ptr)
                self.newlines = 0
                return self.buffer.read()
  
            def readline(self):
                while self.newlines == 0:
                    b = os.read(self._fd, max(os.fstat(self._fd).st_size, BUFSIZE))
                    self.newlines = b.count(b"\n") + (not b)
                    ptr = self.buffer.tell()
                    self.buffer.seek(0, 2), self.buffer.write(b), self.buffer.seek(ptr)
                self.newlines -= 1
                return self.buffer.readline()
  
            def flush(self):
                if self.writable:
                    os.write(self._fd, self.buffer.getvalue())
                    self.buffer.truncate(0), self.buffer.seek(0)
  
        class IOWrapper(IOBase):
            def __init__(self, file):
                self.buffer = FastIO(file)
                self.flush = self.buffer.flush
                self.writable = self.buffer.writable
                self.write = lambda s: self.buffer.write(s.encode("ascii"))
                self.read = lambda: self.buffer.read().decode("ascii")
                self.readline = lambda: self.buffer.readline().decode("ascii")
  
        sys.stdout = IOWrapper(sys.stdout)
  
    if dfs:
        from types import GeneratorType
  
        def bootstrap(f, stk=[]):
            def wrappedfunc(*args, **kwargs):
                if stk:
                    return f(*args, **kwargs)
                else:
                    to = f(*args, **kwargs)
                    while True:
                        if type(to) is GeneratorType:
                            stk.append(to)
                            to = next(to)
                        else:
                            stk.pop()
                            if not stk:
                                break
                            to = stk[-1].send(to)
                    return to
            return wrappedfunc
  
    if hashing:
        RANDOM = random.getrandbits(20)
        class Wrapper(int):
            def __init__(self, x):
                int.__init__(x)
  
            def __hash__(self):
                return super(Wrapper, self).__hash__() ^ RANDOM
  
    if read_from_file:
        file = open("input.txt", "r").readline().strip()[1:-1]
        fin = open(file, 'r', encoding='utf-16')
        input = lambda: fin.readline().rstrip('\n')
        inputs = lambda: [x.rstrip('\n') for x in fin.readlines()]
        output_file = open("output.txt", "w")
        def fprint(*args, **kwargs):
            print(*args, **kwargs, file=output_file)
  
    if de:
        def debug(*args, **kwargs):
            print('\033[92m', end='')
            print(*args, **kwargs)
            print('\033[0m', end='')
  
    fmax = lambda x, y: x if x > y else y
    fmin = lambda x, y: x if x < y else y
  
    class lst_lst:
        def __init__(self, n) -> None:
            self.n = n
            self.pre = []
            self.cur = []
            self.notest = [-1] * (n + 1)
         
        def append(self, i, j):
            self.pre.append(self.notest[i])
            self.notest[i] = len(self.cur)
            self.cur.append(j)
         
        def iterate(self, i):
            tmp = self.notest[i]
            while tmp != -1:
                yield self.cur[tmp]
                tmp = self.pre[tmp]
 
```

## 0.5 I128

```cpp
using i128 = __int128;
istream &operator>>(istream &it, i128 &j) {
    string val;
    it >> val;
    
    bool neg = (val[0] == '-');
    j = 0;
    for (size_t i = neg ? 1 : 0; i < val.size(); i++) {
        j = j * 10 + (val[i] - '0');
    }
    if (neg) j = -j;
    return it;
}
ostream &operator<<(ostream &os, i128 n){
	if(n == 0){
		return os << 0;
	}
	string s;
    bool neg = (n < 0);
    if(neg) n = -n;
	while(n > 0){
		s += char('0' + n % 10);
		n /= 10;
	}
    if(neg) s += '-';
	reverse(s.begin(),s.end());
	return os << s;
}
i128 toi128(const string &s){
	i128 n = 0;
	for (auto c : s){
		n = n * 10 + (c - '0');
	}
	return n;
}
i128 sqrti128(i128 n){
	i128 lo = 0, hi = 1E16;
	while(lo < hi){
		i128 x = (lo + hi + 1) / 2;
		if(x * x <= n){
			lo = x;
		}
		else {
			hi = x - 1;
		}
	}
	return lo;
}
i128 gcd(i128 a,i128 b){
	while(b){
		a %= b;
		swap(a,b);
	}
	return a;
}
```

## 0.6 pb_ds + 部分STL

```cpp
#include <bits/extc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/priority_queue.hpp>
#include <ext/pb_ds/hash_policy.hpp>
using namespace __gnu_pbds;
template<typename T>
using rbset = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;
template<typename T>
using slset = tree<T, null_type, less<T>, splay_tree_tag,tree_order_statistics_node_update>;
template<typename T>
using rbmultiset = tree<T, null_type, less_equal<T>, rb_tree_tag,tree_order_statistics_node_update>;
template<typename T>
using slmultiset = tree<T, null_type, less_equal<T>, splay_tree_tag,tree_order_statistics_node_update>;
// #define rank order_of_key
// #define kth find_by_order
cc_hash_table<int, bool> h1; //拉链法处理冲突
gp_hash_table<int, bool> h2; //探测法处理冲突

__gnu_pbds::priority_queue<int,greater<int>>pq[N];
__gnu_pbds::priority_queue<int,greater<int>>::point_iterator p[N];
p[i]=pq[i].push(x); //用p来作为每个i对应的x的迭代器
pq.push(x) //将数字 x 放入堆中。
pq.top() //返回堆顶的元素。
pq.erase(it) //将迭代器 it 从堆中消除。
pq1.join(pq2) //将 pq2 放入 pq1 中，同时清空 pq2。
pq.modify(it,x) //将堆中迭代器为 it 的值改为 x。

#include<ext/rope>
using namespace __gnu_cxx;//rope的命名空间
rope<type> R;
R.push_back(a) //往后插入
R.insert(pos,a)//在pos位置插入a，pos是一个迭代器。
R.erase(pos,n)//在pos位置删除n个元素。
R.replace(pos,x)//从pos开始替换成x
R.substr(pos,x)//从pos开始提取x个。
//多数时候定义rope用指针（方便可持久化） 所以上面的点多数时候要换成->
// 升级版vector, 支持[]访问元素, 并且插入删除等操作均为log时间复杂度
```

# 1. 数学

## 1.1 数论

### 1.1.1 数论恒等式汇总

#### 1.1.1.1 基本恒等式

$$
\gcd(x, y) = \sum_{d \mid \gcd(x,y)} \varphi(d)
$$

$$
[\gcd(x, y) = 1] = \sum_{d \mid \gcd(x,y)} \mu(d)
$$

#### 1.1.1.2 欧拉函数与莫比乌斯函数

$$
n = \sum_{d \mid n} \varphi(d)
$$

$$
\sum_{d \mid n} \mu(d) = [n = 1]
$$

#### 1.1.1.3 常用数论函数表

| 函数符号         | 名称         | 定义                                   | 狄利克雷逆                                   |
| ---------------- | ------------ | -------------------------------------- | -------------------------------------------- |
| $\mathbf{1}(n)$  | 常函数       | $1$                                    | $\mu$                                        |
| $\mathrm{id}(n)$ | 恒等函数     | $n$                                    | $\mu \cdot \mathrm{id}$                      |
| $\varepsilon(n)$ | 单位元       | $[n=1]$                                | 自身                                         |
| $\varphi(n)$     | 欧拉函数     | $n \prod_{p \mid n} (1 - \frac{1}{p})$ | $\sum_{d \mid n} d \mu(d)$                   |
| $\mu(n)$         | 莫比乌斯函数 | 见上文                                 | 自身                                         |
| $\tau(n)$        | 约数个数     | $\sum_{d \mid n} 1$                    | $\sum_{d \mid n} \mu(d) \tau(\frac{n}{d})$   |
| $\sigma(n)$      | 约数和       | $\sum_{d \mid n} d$                    | $\sum_{d \mid n} \mu(d) \sigma(\frac{n}{d})$ |

#### 1.1.1.4 求和变换

$$
\sum_{i=1}^n \sum_{j=1}^m [\gcd(i,j) = 1] = \sum_{d=1}^{\min(n,m)} \mu(d) \left\lfloor \frac{n}{d} \right\rfloor \left\lfloor \frac{m}{d} \right\rfloor
$$

$$
\sum_{i=1}^n \sum_{j=1}^m \gcd(i,j) = \sum_{d=1}^{\min(n,m)} \varphi(d) \left\lfloor \frac{n}{d} \right\rfloor \left\lfloor \frac{m}{d} \right\rfloor
$$

#### 1.1.1.5 高级函数

##### 1.1.1.5.1 Jordan totient 函数

$$
J_k(n) = n^k \prod_{p \mid n} \left(1 - p^{-k}\right)
$$

$$
\sum_{d \mid n} J_k(d) = n^k
$$

##### 1.1.1.5.2 Liouville 函数

$$
\lambda(n) = (-1)^{\Omega(n)}
$$

$$
\sum_{d \mid n} \lambda(d) = [n \text{ 是完全平方数}]
$$

**其中 Ω(n)是总质因子个数（带重数)**

##### 1.1.1.5.3 Ramanujan 和

$$
c_q(n) = \sum_{\substack{1 \leq k \leq q \\ \gcd(k,q)=1}} e^{2\pi i k n / q}
$$

$$
\sum_{d \mid \gcd(m,n)} d \cdot \mu\left(\frac{n}{d}\right) = c_n(m)
$$

#### 1.1.1.6 狄利克雷卷积

| 函数关系（卷积形式）                 | 展开后的含义                                                 | 核心用途             |
| :----------------------------------- | :----------------------------------------------------------- | :------------------- |
| $\mathbf{1} * \mu = \varepsilon$     | $\sum_{d \mid n} \mu(d) = [n=1]$                             | **莫比乌斯反演基础** |
| $\mathrm{id} = \mathbf{1} * \varphi$ | $n = \sum_{d \mid n} \varphi(d)$                             | **杜教筛（欧拉）**   |
| $\varphi = \mu * \mathrm{id}$        | $\varphi(n) = \sum_{d \mid n} \mu(d) \frac{n}{d}$            | **计算欧拉函数**     |
| $\tau = \mathbf{1} * \mathbf{1}$     | $\tau(n) = \sum_{d \mid n} 1$                                | **求约数个数**       |
| $\sigma = \mathbf{1} * \mathrm{id}$  | $\sigma(n) = \sum_{d \mid n} d$                              | **求约数和**         |
| $\sigma = \varphi * \tau$            | $\sum_{d \mid n} \varphi(d) \tau\!\left(\frac{n}{d}\right) = \sigma(n)$ | **数论简化**         |

### 1.1.2 sieve（欧拉筛）

$\begin{array}{|c|c|c|c|}
\hline
\text{函数符号} & \text{名称} & \text{定义} & \text{狄利克雷逆} \\
\hline
\mathbf{1}(n) & \text{常函数} & 1 & \mu \\
\mathrm{id}(n) & \text{恒等函数} & n & \mu \cdot \mathrm{id} \\
\varepsilon(n) & \text{单位元} & [n=1] & \text{自身} \\
\varphi(n) & \text{欧拉函数} & n \prod_{p \mid n} (1 - \frac{1}{p}) & \sum_{d \mid n} d \mu(d) \\
\mu(n) & \text{莫比乌斯函数} & \text{} & \text{自身} \\
\tau(n) & \text{约数个数} & \sum_{d \mid n} 1 & \sum_{d \mid n} \mu(d) \tau(\frac{n}{d}) \\
\sigma(n) & \text{约数和} & \sum_{d \mid n} d & \sum_{d \mid n} \mu(d) \sigma(\frac{n}{d}) \\
\hline
\end{array}$

1. **`minp[i]`** - 最小质因子
2. **`primes`** - 素数列表
3. **`phi[i]`** - 欧拉函数 φ(i)
4. **`mu[i]`** - 莫比乌斯函数 μ(i)
5. **`d[i]`** - 约数个数函数 τ(i)（或 d(i)）
6. **`cntminp[i]`** - 最小质因子的指数
7. **`sumfac[i]`** - 约数和函数 σ(i)
8. **`minpg[i]`** - 最小质因子的等比级数部分

```c++
vector<int> minp, primes;
// vector<int> phi, mu, d, cntminp;
// vector<int> sumfac, minpg;

void sieve(int n){
    minp.assign(n + 1, 0);
    // phi.assign(n + 1, 0);
    // mu.assign(n + 1, 0);
    // d.assign(n + 1, 0);
    // cntminp.assign(n + 1, 0);
    // sumfac.assign(n + 1, 0);
    // minpg.assign(n + 1, 0);
    primes.clear();
    // phi[1] = 1;
    // mu[1] = 1;
    // d[1] = 1;
    // sumfac[1] = 1;
    // minpg[1] = 1;

    for (int i = 2; i <= n; i++) {
        if(minp[i] == 0) {
            minp[i] = i;
            primes.push_back(i);
            // phi[i] = i - 1;
            // mu[i] = -1;
            // d[i] = 2;
            // cntminp[i] = 1;
            // sumfac[i] = i + 1;
            // minpg[i] = i + 1;
        }

        for (auto p : primes) {
            if (i * p > n) {
                break;
            }
            minp[i * p] = p;
            if (p == minp[i]) {
                // phi[i * p] = phi[i] * p;
                // mu[i * p] = 0;
                // cntminp[i * p] = cntminp[i] + 1;
                // d[i * p] = d[i] / cntminp[i * p] * (cntminp[i * p] + 1);
                // minpg[i * p] = minpg[i] * p + 1;
                // sumfac[i * p] = sumfac[i] / minpg[i] * minpg[i * p];

                break;
            }
            // phi[i * p] = phi[i] * phi[p];
            // mu[i * p] = -mu[i];
            // cntminp[i * p] = 1;
            // d[i * p] = d[i] * 2;
            // minpg[i * p] = 1 + p;
            // sumfac[i * p] = sumfac[i] * sumfac[p];
        }
    }

    // for (int i = 2; i <= n; i++) {
    //     mu[i] += mu[i - 1];
    // }
}

bool isprime(int n) {
    return minp[n] == n;
}
```

### 1.1.3 exBSGS（拓展大步小步算法）

用于求解形如 $a^x \equiv b \pmod{p}$ 方程，时间复杂度 $O(\sqrt{p})$ 。无解返回 $-1$ 。

```c++
ll BSGS(ll a, ll b, ll p, ll ad) { // ad 是前面约分掉的系数积
    map<ll, ll> mp;
    ll t = ceil(sqrt(p));
    ll tmp1 = b % p;
    for (int i = 0; i < t; i++) {
        mp[tmp1] = i;
        tmp1 = tmp1 * a % p;
    }
    
    ll step = quick_power(a, t, p);
    ll tmp2 = ad % p; // 从系数 D 开始跳
    for (int i = 1; i <= t + 1; i++) {
        tmp2 = tmp2 * step % p;
        if (mp.count(tmp2)) {
            ll res = i * t - mp[tmp2];
            if (res >= 0) return res;
        }
    }
    return -1;
}

ll exBSGS(ll a, ll b, ll p) {
    b %= p;
    if (b == 1 || p == 1) return 0; // 特判
    
    ll g, D = 1, cnt = 0;
    while ((g = gcd(a, p)) != 1) {
        if (b % g != 0) return -1; // 无解
        cnt++;
        p /= g;
        b /= g;
        D = D * (a / g) % p; // 累积系数
        if (D == b) return cnt; // 检查约分过程中是否已经相等
    }
    
    ll res = BSGS(a, b, p, D);
    return res == -1 ? -1 : res + cnt;
}
```

### 1.1.4 CRT（中国剩余定理）

```c++
ll CRT(int k, vector<ll>& a, vector<ll>& r) {
    ll n = 1, ans = 0;
    for (int i = 0; i < k; i++) {
        n *= r[i];
    }
    for (int i = 0; i < k; i++) {
        ll m = n / r[i], b, y;
        exgcd(m, r[i], b, y); // b * m mod r[i] = 1
        b %= n;
        ans = (ans + a[i] * m % n * b % n) % n;
    }

    return (ans % n + n) % n;
}
```

### 1.1.5 exgcd（拓展欧几里得）

```c++
// a * x + b * y == gcd(a, b)
// return gcd(a, b)
ll exgcd(ll a, ll b, ll& x, ll& y) {
    if (!b) {
        x = 1;
        y = 0;
        return a;
    }
    ll d = exgcd(b, a % b, x, y);
    ll t = x;
    x = y;
    y = t - (a / b) * x;
    return d;
}

// a * x + b * y == d
bool find(ll a, ll b, ll d, ll& x, ll & y) {
    ll pa = a, pb = b, pd = d;
    ll g = exgcd(a, b, x, y);
    if (d % g) return false;

    a /= g, b /= g, d /= g;
    ll x1 = x * d;
    x1 = (x1 % b + b) % b;
    ll y1 = (d - a * x1) / b;
    x1 = abs(x1), y1 = abs(y1);
    y *= d;
    y = (y % a + a) % a;
    x = (d - b * y) / a;
    if(abs(x) + abs(y) > abs(x1) + abs(y1)) x = x1, y = y1;
    x = abs(x), y = abs(y);
    return pa * x + pb * y == pd;
}
```

### 1.1.6 Lucas（卢卡斯定理）

$C_{n}^{m} \equiv C_{\lfloor n/p \rfloor}^{\lfloor m/p \rfloor} \cdot C_{n \bmod p}^{m \bmod p} \pmod{p}$

其中 $n = n_m p^m + \dots + n_1 p + n_0$，$k = k_m p^m + \dots + k_1 p + k_0$ 是 $p$ 进制展开，$p$ 为素数。

```c++
ll comb(int n, int m, ll p) {
	if (n < m) return 0;
	if (n < p && m < p) {
		return fac[n] * invfac[m] % p * invfac[n - m] % p;
	}
	return comb(n / p, m / p, p) * comb(n % p, m % p, p) % p;
}
```

### 1.1.7 Mobius（莫比乌斯）

```cpp
const int N = 1e5 + 5;
std::unordered_map<int, Z> fMu;

std::vector<int> minp, primes, phi, mu;
std::vector<i64> sphi;

void sieve(int n) {
    minp.assign(n + 1, 0);
    phi.assign(n + 1, 0);
    sphi.assign(n + 1, 0);
    mu.assign(n + 1, 0);
    primes.clear();
    phi[1] = 1;
    mu[1] = 1;
    
    for (int i = 2; i <= n; i++) {
        if (minp[i] == 0) {
            minp[i] = i;
            phi[i] = i - 1;
            mu[i] = -1;
            primes.push_back(i);
        }
        
        for (auto p : primes) {
            if (i * p > n) {
                break;
            }
            minp[i * p] = p;
            if (p == minp[i]) {
                phi[i * p] = phi[i] * p;
                break;
            }
            phi[i * p] = phi[i] * (p - 1);
            mu[i * p] = -mu[i];
        }
    }
    
    for (int i = 1; i <= n; i++) {
        sphi[i] = sphi[i - 1] + phi[i];
        mu[i] += mu[i - 1];
    }
}

Z sumMu(int n) {
    if (n <= N) {
        return mu[n];
    }
    if (fMu.count(n)) {
        return fMu[n];
    }
    if (n == 0) {
        return 0;
    }
    Z ans = 1;
    for (int l = 2, r; l <= n; l = r + 1) {
        r = n / (n / l);
        ans -= (r - l + 1) * sumMu(n / l);
    }
    return ans;
}
```

### 1.1.8 Primitive Root（原根）

什么样的数才有原根?

结论：$$2, 4, p^k, 2 * p^k$$，其中 $p$ 为奇素数，$k$ 为正整数。

判断方法，对于 $$n$$，从小到大枚举 $$i$$，并检验是否是 $$n$$ 的原根，再检验 $\varphi(n)$ 的所有真因子，设 $n$ 的所有素因数为 $p_1, \dots, p_l$，则只需要检验所有的 $\frac{\varphi(n)}{p_i}$ 即可。

时间复杂度 $O(n^{0.25}\log{n})$

```c++
bool isrt(int n) {
    if (n == 1) return false;
    if (n == 2 || n == 4) return true;
    if (n % 2 == 0) {
        n /= 2;
        if (n % 2 == 0) return false;
    }
    int p = minp[n];
    while (n % p == 0) n /= p;
    if (n == 1) return true;
    return false;
}

vector<int> findrt(int n) {
    vector<int> ans;
    if (!isrt(n)) return ans;
    int g;
    vector<int> fac;
    int tmp = phi[n];
    while (tmp != 1) {
        int p = minp[tmp];
        fac.push_back(minp[tmp]);
        while (tmp % p == 0) tmp /= p;
    }

    for (int i = 1; i < n; i++) {
        if (quick_power(i, phi[n], n) == 1) {
            bool flag = 1;
            for (int x : fac) {
                if (quick_power(i, phi[n] / x, n) == 1) {
                    flag = 0;
                    break;
                }
            }
            if (flag) {
                g = i;
                break;
            }
        }
    }

    int x = 1;
    for (int i = 1; i <= phi[n]; i++) {
        x = (1LL * x * g) % n;
        if (gcd(phi[n], i) == 1) {
            ans.push_back(x);
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}
```

### 1.1.9 杜教筛

对于数论函数可以构造狄利克雷卷积，然后递归求解，时间复杂度 $O(n ^ {\frac{3}{4}})$

代码以 $\sum_{i = 1} ^ {n}\mu(i) 和 \sum_{i = 1} ^ {n}\varphi(i)$ 为例实现

```c++
map<ll, ll> mp1, mp2;

ll getsum1(ll n) {
    if (n <= 1e6) return prephi[n];
    if (mp1.count(n)) return mp1[n];
    ll ans = n * (n + 1LL) / 2;
    for (ll i = 2, j; i <= n; i = j + 1) {
        j = min(n, n / (n / i));
        ans -= (j - i + 1LL) * getsum1(n / i);
    }

    mp1[n] = ans;
    return ans;
}

ll getsum2(ll n) {
    if (n <= 1e6) return premu[n];
    if (mp2.count(n)) return mp2[n];
    ll ans = 1;
    for (ll i = 2, j; i <= n; i = j + 1) {
        j = min(n, n / (n / i));
        ans -= (j - i + 1LL) * getsum2(n / i);
    }

    mp2[n] = ans;
    return ans;
}

void solve() {
    ll n;
    cin >> n;
    cout << getsum1(n) << " " << getsum2(n) << "\n";
}
```

### 1.1.10 Min_25筛

$$前提，质数处的 f(p) 值是关于 p 的多项式，质数次方处的 f(p^e) 值可以快速计算。$$

$\displaystyle \sum_{i = 1} ^ {n} {f(i)}$

$记 S(n, j) = \displaystyle \sum_{i=2}^{n}{f(i)} (minp[i]>P_j)$

$记f'为在质数处于f取值相同的完全积性函数$

$$g(n,j) = \begin{cases}g(n,j-1), & (P_j^2>n)\\g(n,j - 1)-f'(P_j)(g(\frac{n}{P_j}, j - 1)-\displaystyle \sum_{i=1}^{j-1}{f'(P_i)}), & (P_j^2 \leqslant n)\end{cases}$$

$S(n,j) = g(n,|P|) - \sum_{i=1}^{j} f(P_i) + \sum_{k > j} \sum_{e=1}^{P_k^e \le n} f(P_k^e) ( S\left( \frac{n}{P_k^e}, k \right) + [e > 1] )$

$⌊\frac{n}{k}⌋ 的取值只有 2\sqrt n 种情况。让 id1_k 记录 k \le \sqrt n， id2_k 记录 \frac{n}{k} \le \sqrt n，可以只枚举这 2\sqrt n 种情况。$

$关于f',代码以f(i)=p^k(p^k - 1)=p^{2k}-p^k构造$

```c++
const int mod = 1e9 + 7;
const int N = 5e5 + 5;
int tot;
bool Prime[N];
ll n, sqn, w[N], p[N], id, id1[N], id2[N], g1[N], g2[N];
ll sum1[N], sum2[N];
// id1 id2 如文中所示 w[k] 为第 k 个需要处理的数 
// 文中的 g 为 g2 - g1, g1 : f'(k) = k, g2: f'(k) = k ^ 2
// sum1 质数前缀和, sum2 质数前缀平方和

void xxs() { // 线性筛
	for (int i = 2; i <= sqn; i++)  {
		if(!Prime[i]) ++tot, p[tot] = i;
		for(int j = 1; p[j] * i <= sqn && j <= tot; j++) {
			Prime[p[j] * i] = 1;
			if(i % p[j] == 0) break;
		}
	}
    for (int i = 1; i <= tot; i++) {
		sum1[i] = (sum1[i - 1] + p[i]) % mod;
		sum2[i] = (sum2[i - 1] + p[i] * p[i] % mod) % mod;
	}
}

ll getid(ll x) {
	if(x <= sqn) return id1[x];
	else return id2[n / x];
}
ll f1(ll x) { // 1 ~ x 前缀和
	x %= mod;
	return x * (x + 1) / 2 % mod;
}
ll f2(ll x) { // 1 ~ x 前缀平方和
	x %= mod;
	return x * (x + 1) % mod * (2 * x % mod + 1) % mod * 166666668 % mod;
}
ll S(ll x, int j) {
	if(p[j] > x) return 0;
	ll Ans = ((g2[getid(x)] - g1[getid(x)] + mod) % mod - (sum2[j] - sum1[j] + mod) % mod + mod) % mod;
	for(int i = j + 1; i <= tot && p[i] * p[i] <= x; i ++) 
		for(ll e = 1, sp = p[i]; sp <= x; sp *= p[i], e ++) 
			Ans = (Ans + sp % mod * (sp % mod - 1) % mod * (S(x / sp, i) + (e > 1)) % mod) % mod;
	return Ans;
}

ll work(ll x) {
    n = x;
    sqn = sqrt(x);
    xxs();
	for(ll l = 1, r; l <= n; l = r + 1) {
		r = (n / (n / l)), w[++id] = n / l;
		g1[id] = f1(w[id]) - 1, g2[id] = f2(w[id]) - 1; // 处理 g(?, 0)
		if(w[id] <= sqn) id1[w[id]] = id;
		else id2[n / w[id]] = id;
	}
	for (int i = 1; i <= tot; i++) { // dp 处理 g 函数
		for(int j = 1; j <= id && p[i] * p[i] <= w[j]; j++) {
			g1[j] = (g1[j] - p[i] * (g1[getid(w[j] / p[i])] - sum1[i - 1]) % mod + mod) % mod;
			g2[j] = (g2[j] - p[i] * p[i] % mod * (g2[getid(w[j] / p[i])] - sum2[i - 1]) % mod + mod) % mod;
		}
	}
	return (S(n, 0) + 1) % mod;
}
```

### 1.1.11 二次剩余

$x^2 \equiv n \pmod{m}$

前提，模数p为奇素数

#### 1.1.11.1 欧拉准则

$n ^ {\frac{p - 1}{2}} \equiv 1 \iff n是二次剩余$

#### 1.1.11.2 Cipolla算法

首先，随机a，找到一个非二次剩余 $a^2 - n$

定义 $i^2 = a ^ 2 - n$（$i$ 类似于复数域中的 $i$）

有 $(a + i)^{p + 1} \equiv n$

证明用 定理1：$i^p \equiv -i$ ；定理2：$(A+B)^p \equiv A^p + B^p$

那么 $(a + i)^{\frac{p + 1}{2}}$ 就是一个解（注：虚部一定会为0）

```c++
ll mod;
ll II; // 虚数单位的平方
struct Complex {
	ll real, imag;
	Complex(ll real = 0, ll imag = 0): real(real), imag(imag) { }
};

bool operator == (const Complex x, const Complex y) {
	return x.real == y.real && x.imag == y.imag;
}
Complex operator * (Complex x, Complex y) {
	return Complex((x.real * y.real + II * x.imag % mod * y.imag) % mod,
			(x.imag * y.real + x.real * y.imag) % mod);
}

Complex qpow(Complex a, int n) {
	Complex res = 1;
	while (n) {
		if (n & 1) res = res * a;
		a = a * a;
		n >>= 1;
	}
	return res;
}

bool check_if_residue(int x) {
	return qpow(x, (mod - 1) >> 1) == 1;
}

array<ll, 2> work(int n, int p) {
	if (n == 0) return {0, 0};
	mod = p;
	ll a = rand() % mod;
	while (!a || check_if_residue((a * a + mod - n) % mod)) a = rand() % mod;
	II = (a * a + mod - n) % mod;
	ll x = int(qpow(Complex(a, 1), (mod + 1) >> 1).real);
	ll y = mod - x;
	if (x > y) swap(x, y);
	return {x, y};
}
```

### 1.1.12 常用数学类（double gcd）

```c++
double gcd(double a,double b) {    //double类型的最大公约数
    if(fabs(b) < EPS)
        return a;
    if(fabs(a) < EPS)
        return b;
    return gcd(b, fmod(a, b));    //fmod(a,b), double类型的取模
}
```

## 1.2 多项式与形式幂级数

### 1.2.1 Poly（with，MInt & MLong）

```c++
template<class T>
constexpr T power(T a, i64 b) {
    T res = 1;
    for (; b; b /= 2, a *= a) {
        if (b % 2) {
            res *= a;
        }
    }
    return res;
}
 
template<int P>
struct MInt {
    int x;
    constexpr MInt() : x{} {}
    constexpr MInt(i64 x) : x{norm(x % getMod())} {}
    
    static int Mod;
    constexpr static int getMod() {
        if (P > 0) {
            return P;
        } else {
            return Mod;
        }
    }
    constexpr static void setMod(int Mod_) {
        Mod = Mod_;
    }
    constexpr int norm(int x) const {
        if (x < 0) {
            x += getMod();
        }
        if (x >= getMod()) {
            x -= getMod();
        }
        return x;
    }
    constexpr int val() const {
        return x;
    }
    explicit constexpr operator int() const {
        return x;
    }
    constexpr MInt operator-() const {
        MInt res;
        res.x = norm(getMod() - x);
        return res;
    }
    constexpr MInt inv() const {
        assert(x != 0);
        return power(*this, getMod() - 2);
    }
    constexpr MInt &operator*=(MInt rhs) & {
        x = 1LL * x * rhs.x % getMod();
        return *this;
    }
    constexpr MInt &operator+=(MInt rhs) & {
        x = norm(x + rhs.x);
        return *this;
    }
    constexpr MInt &operator-=(MInt rhs) & {
        x = norm(x - rhs.x);
        return *this;
    }
    constexpr MInt &operator/=(MInt rhs) & {
        return *this *= rhs.inv();
    }
    friend constexpr MInt operator*(MInt lhs, MInt rhs) {
        MInt res = lhs;
        res *= rhs;
        return res;
    }
    friend constexpr MInt operator+(MInt lhs, MInt rhs) {
        MInt res = lhs;
        res += rhs;
        return res;
    }
    friend constexpr MInt operator-(MInt lhs, MInt rhs) {
        MInt res = lhs;
        res -= rhs;
        return res;
    }
    friend constexpr MInt operator/(MInt lhs, MInt rhs) {
        MInt res = lhs;
        res /= rhs;
        return res;
    }
    friend constexpr std::istream &operator>>(std::istream &is, MInt &a) {
        i64 v;
        is >> v;
        a = MInt(v);
        return is;
    }
    friend constexpr std::ostream &operator<<(std::ostream &os, const MInt &a) {
        return os << a.val();
    }
    friend constexpr bool operator==(MInt lhs, MInt rhs) {
        return lhs.val() == rhs.val();
    }
    friend constexpr bool operator!=(MInt lhs, MInt rhs) {
        return lhs.val() != rhs.val();
    }
};
 
template<>
int MInt<0>::Mod = 1;
 
template<int V, int P>
constexpr MInt<P> CInv = MInt<P>(V).inv();
 
constexpr int P = 998244353;
using Z = MInt<P>;
 
std::vector<int> rev;
template<int P>
std::vector<MInt<P>> roots{0, 1};
 
template<int P>
constexpr MInt<P> findPrimitiveRoot() {
    MInt<P> i = 2;
    int k = __builtin_ctz(P - 1);
    while (true) {
        if (power(i, (P - 1) / 2) != 1) {
            break;
        }
        i += 1;
    }
    return power(i, (P - 1) >> k);
}
 
template<int P>
constexpr MInt<P> primitiveRoot = findPrimitiveRoot<P>();
 
template<>
constexpr MInt<998244353> primitiveRoot<998244353> {31};
 
template<int P>
constexpr void dft(std::vector<MInt<P>> &a) {
    int n = a.size();
    
    if (int(rev.size()) != n) {
        int k = __builtin_ctz(n) - 1;
        rev.resize(n);
        for (int i = 0; i < n; i++) {
            rev[i] = rev[i >> 1] >> 1 | (i & 1) << k;
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (rev[i] < i) {
            std::swap(a[i], a[rev[i]]);
        }
    }
    if (roots<P>.size() < n) {
        int k = __builtin_ctz(roots<P>.size());
        roots<P>.resize(n);
        while ((1 << k) < n) {
            auto e = power(primitiveRoot<P>, 1 << (__builtin_ctz(P - 1) - k - 1));
            for (int i = 1 << (k - 1); i < (1 << k); i++) {
                roots<P>[2 * i] = roots<P>[i];
                roots<P>[2 * i + 1] = roots<P>[i] * e;
            }
            k++;
        }
    }
    for (int k = 1; k < n; k *= 2) {
        for (int i = 0; i < n; i += 2 * k) {
            for (int j = 0; j < k; j++) {
                MInt<P> u = a[i + j];
                MInt<P> v = a[i + j + k] * roots<P>[k + j];
                a[i + j] = u + v;
                a[i + j + k] = u - v;
            }
        }
    }
}
 
template<int P>
constexpr void idft(std::vector<MInt<P>> &a) {
    int n = a.size();
    std::reverse(a.begin() + 1, a.end());
    dft(a);
    MInt<P> inv = (1 - P) / n;
    for (int i = 0; i < n; i++) {
        a[i] *= inv;
    }
}
 
template<int P = 998244353>
struct Poly : public std::vector<MInt<P>> {
    using Value = MInt<P>;
    
    Poly() : std::vector<Value>() {}
    explicit constexpr Poly(int n) : std::vector<Value>(n) {}
    
    explicit constexpr Poly(const std::vector<Value> &a) : std::vector<Value>(a) {}
    constexpr Poly(const std::initializer_list<Value> &a) : std::vector<Value>(a) {}
    
    template<class InputIt, class = std::_RequireInputIter<InputIt>>
    explicit constexpr Poly(InputIt first, InputIt last) : std::vector<Value>(first, last) {}
    
    template<class F>
    explicit constexpr Poly(int n, F f) : std::vector<Value>(n) {
        for (int i = 0; i < n; i++) {
            (*this)[i] = f(i);
        }
    }
    
    constexpr Poly shift(int k) const {
        if (k >= 0) {
            auto b = *this;
            b.insert(b.begin(), k, 0);
            return b;
        } else if (this->size() <= -k) {
            return Poly();
        } else {
            return Poly(this->begin() + (-k), this->end());
        }
    }
    constexpr Poly trunc(int k) const {
        Poly f = *this;
        f.resize(k);
        return f;
    }
    constexpr friend Poly operator+(const Poly &a, const Poly &b) {
        Poly res(std::max(a.size(), b.size()));
        for (int i = 0; i < a.size(); i++) {
            res[i] += a[i];
        }
        for (int i = 0; i < b.size(); i++) {
            res[i] += b[i];
        }
        return res;
    }
    constexpr friend Poly operator-(const Poly &a, const Poly &b) {
        Poly res(std::max(a.size(), b.size()));
        for (int i = 0; i < a.size(); i++) {
            res[i] += a[i];
        }
        for (int i = 0; i < b.size(); i++) {
            res[i] -= b[i];
        }
        return res;
    }
    constexpr friend Poly operator-(const Poly &a) {
        std::vector<Value> res(a.size());
        for (int i = 0; i < int(res.size()); i++) {
            res[i] = -a[i];
        }
        return Poly(res);
    }
    constexpr friend Poly operator*(Poly a, Poly b) {
        if (a.size() == 0 || b.size() == 0) {
            return Poly();
        }
        if (a.size() < b.size()) {
            std::swap(a, b);
        }
        int n = 1, tot = a.size() + b.size() - 1;
        while (n < tot) {
            n *= 2;
        }
        if (((P - 1) & (n - 1)) != 0 || b.size() < 128) {
            Poly c(a.size() + b.size() - 1);
            for (int i = 0; i < a.size(); i++) {
                for (int j = 0; j < b.size(); j++) {
                    c[i + j] += a[i] * b[j];
                }
            }
            return c;
        }
        a.resize(n);
        b.resize(n);
        dft(a);
        dft(b);
        for (int i = 0; i < n; ++i) {
            a[i] *= b[i];
        }
        idft(a);
        a.resize(tot);
        return a;
    }
    constexpr friend Poly operator*(Value a, Poly b) {
        for (int i = 0; i < int(b.size()); i++) {
            b[i] *= a;
        }
        return b;
    }
    constexpr friend Poly operator*(Poly a, Value b) {
        for (int i = 0; i < int(a.size()); i++) {
            a[i] *= b;
        }
        return a;
    }
    constexpr friend Poly operator/(Poly a, Value b) {
        for (int i = 0; i < int(a.size()); i++) {
            a[i] /= b;
        }
        return a;
    }
    constexpr Poly &operator+=(Poly b) {
        return (*this) = (*this) + b;
    }
    constexpr Poly &operator-=(Poly b) {
        return (*this) = (*this) - b;
    }
    constexpr Poly &operator*=(Poly b) {
        return (*this) = (*this) * b;
    }
    constexpr Poly &operator*=(Value b) {
        return (*this) = (*this) * b;
    }
    constexpr Poly &operator/=(Value b) {
        return (*this) = (*this) / b;
    }
    constexpr Poly deriv() const {
        if (this->empty()) {
            return Poly();
        }
        Poly res(this->size() - 1);
        for (int i = 0; i < this->size() - 1; ++i) {
            res[i] = (i + 1) * (*this)[i + 1];
        }
        return res;
    }
    constexpr Poly integr() const {
        Poly res(this->size() + 1);
        for (int i = 0; i < this->size(); ++i) {
            res[i + 1] = (*this)[i] / (i + 1);
        }
        return res;
    }
    constexpr Poly inv(int m) const {
        Poly x{(*this)[0].inv()};
        int k = 1;
        while (k < m) {
            k *= 2;
            x = (x * (Poly{2} - trunc(k) * x)).trunc(k);
        }
        return x.trunc(m);
    }
    constexpr Poly log(int m) const {
        return (deriv() * inv(m)).integr().trunc(m);
    }
    constexpr Poly exp(int m) const {
        Poly x{1};
        int k = 1;
        while (k < m) {
            k *= 2;
            x = (x * (Poly{1} - x.log(k) + trunc(k))).trunc(k);
        }
        return x.trunc(m);
    }
    constexpr Poly pow(int k, int m) const {
        int i = 0;
        while (i < this->size() && (*this)[i] == 0) {
            i++;
        }
        if (i == this->size() || 1LL * i * k >= m) {
            return Poly(m);
        }
        Value v = (*this)[i];
        auto f = shift(-i) * v.inv();
        return (f.log(m - i * k) * k).exp(m - i * k).shift(i * k) * power(v, k);
    }
    constexpr Poly sqrt(int m) const {
        Poly x{1};
        int k = 1;
        while (k < m) {
            k *= 2;
            x = (x + (trunc(k) * x.inv(k)).trunc(k)) * CInv<2, P>;
        }
        return x.trunc(m);
    }
    constexpr Poly mulT(Poly b) const {
        if (b.size() == 0) {
            return Poly();
        }
        int n = b.size();
        std::reverse(b.begin(), b.end());
        return ((*this) * b).shift(-(n - 1));
    }
    constexpr std::vector<Value> eval(std::vector<Value> x) const {
        if (this->size() == 0) {
            return std::vector<Value>(x.size(), 0);
        }
        const int n = std::max(x.size(), this->size());
        std::vector<Poly> q(4 * n);
        std::vector<Value> ans(x.size());
        x.resize(n);
        std::function<void(int, int, int)> build = [&](int p, int l, int r) {
            if (r - l == 1) {
                q[p] = Poly{1, -x[l]};
            } else {
                int m = (l + r) / 2;
                build(2 * p, l, m);
                build(2 * p + 1, m, r);
                q[p] = q[2 * p] * q[2 * p + 1];
            }
        };
        build(1, 0, n);
        std::function<void(int, int, int, const Poly &)> work = [&](int p, int l, int r, const Poly &num) {
            if (r - l == 1) {
                if (l < int(ans.size())) {
                    ans[l] = num[0];
                }
            } else {
                int m = (l + r) / 2;
                work(2 * p, l, m, num.mulT(q[2 * p + 1]).trunc(m - l));
                work(2 * p + 1, m, r, num.mulT(q[2 * p]).trunc(r - m));
            }
        };
        work(1, 0, n, mulT(q[1].inv(n)));
        return ans;
    }
};
 
template<int P = 998244353>
Poly<P> berlekampMassey(const Poly<P> &s) {
    Poly<P> c;
    Poly<P> oldC;
    int f = -1;
    for (int i = 0; i < s.size(); i++) {
        auto delta = s[i];
        for (int j = 1; j <= c.size(); j++) {
            delta -= c[j - 1] * s[i - j];
        }
        if (delta == 0) {
            continue;
        }
        if (f == -1) {
            c.resize(i + 1);
            f = i;
        } else {
            auto d = oldC;
            d *= -1;
            d.insert(d.begin(), 1);
            MInt<P> df1 = 0;
            for (int j = 1; j <= d.size(); j++) {
                df1 += d[j - 1] * s[f + 1 - j];
            }
            assert(df1 != 0);
            auto coef = delta / df1;
            d *= coef;
            Poly<P> zeros(i - f - 1);
            zeros.insert(zeros.end(), d.begin(), d.end());
            d = zeros;
            auto temp = c;
            c += d;
            if (i - temp.size() > f - oldC.size()) {
                oldC = temp;
                f = i;
            }
        }
    }
    c *= -1;
    c.insert(c.begin(), 1);
    return c;
}
 
 
template<int P = 998244353>
MInt<P> linearRecurrence(Poly<P> p, Poly<P> q, i64 n) {
    int m = q.size() - 1;
    while (n > 0) {
        auto newq = q;
        for (int i = 1; i <= m; i += 2) {
            newq[i] *= -1;
        }
        auto newp = p * newq;
        newq = q * newq;
        for (int i = 0; i < m; i++) {
            p[i] = newp[i * 2 + n % 2];
        }
        for (int i = 0; i <= m; i++) {
            q[i] = newq[i * 2];
        }
        n /= 2;
    }
    return p[0] / q[0];
}

struct Comb {
    int n;
    std::vector<Z> _fac;
    std::vector<Z> _invfac;
    std::vector<Z> _inv;
    
    Comb() : n{0}, _fac{1}, _invfac{1}, _inv{0} {}
    Comb(int n) : Comb() {
        init(n);
    }
    
    void init(int m) {
        m = std::min(m, Z::getMod() - 1);
        if (m <= n) return;
        _fac.resize(m + 1);
        _invfac.resize(m + 1);
        _inv.resize(m + 1);
        
        for (int i = n + 1; i <= m; i++) {
            _fac[i] = _fac[i - 1] * i;
        }
        _invfac[m] = _fac[m].inv();
        for (int i = m; i > n; i--) {
            _invfac[i - 1] = _invfac[i] * i;
            _inv[i] = _invfac[i] * _fac[i - 1];
        }
        n = m;
    }
    
    Z fac(int m) {
        if (m > n) init(2 * m);
        return _fac[m];
    }
    Z invfac(int m) {
        if (m > n) init(2 * m);
        return _invfac[m];
    }
    Z inv(int m) {
        if (m > n) init(2 * m);
        return _inv[m];
    }
    Z binom(int n, int m) {
        if (n < m || m < 0) return 0;
        return fac(n) * invfac(m) * invfac(n - m);
    }
} comb;

Poly<P> get(int n, int m) {
    if (m == 0) {
        return Poly(n + 1);
    }
    if (m % 2 == 1) {
        auto f = get(n, m - 1);
        Z p = 1;
        for (int i = 0; i <= n; i++) {
            f[n - i] += comb.binom(n, i) * p;
            p *= m;
        }
        return f;
    }
    auto f = get(n, m / 2);
    auto fm = f;
    for (int i = 0; i <= n; i++) {
        fm[i] *= comb.fac(i);
    }
    Poly pw(n + 1);
    pw[0] = 1;
    for (int i = 1; i <= n; i++) {
        pw[i] = pw[i - 1] * (m / 2);
    }
    for (int i = 0; i <= n; i++) {
        pw[i] *= comb.invfac(i);
    }
    fm = fm.mulT(pw);
    for (int i = 0; i <= n; i++) {
        fm[i] *= comb.invfac(i);
    }
    return f + fm;
}

```

### 1.2.2 NTT + Poly

```c++
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
```

### 1.2.3 Comb（组合数）

```cpp
// 组合数预处理（需提前预计算阶乘和逆元）
const ll MOD = 998244353;
const int MAXN = 1e5+5;
ll fac[MAXN], inv_fac[MAXN];

ll qpow(ll a,ll n,ll mod){
    ll ans=1;
    while(n){
        if(n&1)ans=(ans*a)%mod;
        n>>=1;
        a=(a*a)%mod;
    }
    return ans;
}

ll inv(ll num) {
    return qpow(num, MOD-2, MOD);
}

void init_comb() {
    fac[0] = 1;
    for (int i = 1; i < MAXN; ++i)
        fac[i] = fac[i-1] * i % MOD;
    inv_fac[MAXN-1] = inv(fac[MAXN-1]);
    for (int i = MAXN-2; i >= 0; --i)
        inv_fac[i] = inv_fac[i+1] * (i+1) % MOD;
}

ll comb(int n, int k) {
    if (k < 0 || k > n) return 0;
    return fac[n] * inv_fac[k] % MOD * inv_fac[n-k] % MOD;
}
```

### 1.2.4 Comb（Z）

```cpp
struct Comb {
    int n;
    std::vector<Z> _fac;
    std::vector<Z> _invfac;
    std::vector<Z> _inv;
    
    Comb() : n{0}, _fac{1}, _invfac{1}, _inv{0} {}
    Comb(int n) : Comb() {
        init(n);
    }
    
    void init(int m) {
        if (m <= n) return;
        _fac.resize(m + 1);
        _invfac.resize(m + 1);
        _inv.resize(m + 1);
        
        for (int i = n + 1; i <= m; i++) {
            _fac[i] = _fac[i - 1] * i;
        }
        _invfac[m] = _fac[m].inv();
        for (int i = m; i > n; i--) {
            _invfac[i - 1] = _invfac[i] * i;
            _inv[i] = _invfac[i] * _fac[i - 1];
        }
        n = m;
    }
    
    Z fac(int m) {
        if (m > n) init(2 * m);
        return _fac[m];
    }
    Z invfac(int m) {
        if (m > n) init(2 * m);
        return _invfac[m];
    }
    Z inv(int m) {
        if (m > n) init(2 * m);
        return _inv[m];
    }
    Z binom(int n, int m) {
        if (n < m || m < 0) return 0;
        return fac(n) * invfac(m) * invfac(n - m);
    }
} comb;
```

## 1.3 线性代数

### 1.3.1 Matrix（矩阵）

```cpp
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
```

### 1.3.2 guass（高斯消元法 + 解方程 + 浮点型）

消成上三角形式

trick：区分有无解和多重解 ，可以不在循环中途判断无解，而是让循环跑完，并且将交换条件应该更改为从$0$ 到 $n - 1$ ，且消除主元的影响也更改为 $0$ 到 $n - 1$。

```c++
const double EPS = 1e-9;

vector<double> gauss(vector<vector<double>>& a, vector<double>& b) {
    int n = a.size();
    vector<vector<double>> c(n, vector<double>(n + 1));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            c[i][j] = a[i][j];
        }
        c[i][n] = b[i];
    }

    for (int i = 0; i < n; i++) {
        int row = i;
        for (int j = i + 1; j < n; j++) {
            if (fabs(c[j][i]) > fabs(c[row][i])) {
                row = j;
            }
        }

        assert(fabs(c[row][i]) >= EPS);
        swap(c[i], c[row]);
        
        double tmp = c[i][i];
        for (int j = i; j <= n; j++) {
            c[i][j] /= tmp;
        }

        for (int j = i + 1; j < n; j++) {
            double tmp1 = c[j][i];
            if (fabs(tmp1) > EPS) {
                for (int k = i; k <= n; k++) {
                    c[j][k] -= tmp1 * c[i][k];
                }
            }
        }
    }

    vector<double> x(n);
    for (int i = n - 1; i >= 0; i--) {
        x[i] = c[i][n];
        for (int j = i + 1; j < n; j++) {
            x[i] -= c[i][j] * x[j];
        }
    }

    return x;
}
```

### 1.3.3 guass（高斯消元法 + 行列式计算 + 整数型）

$O(n^2logn + n^3)$

```c++
ll Guass(vector<vector<ll>>& a, ll mod) {
    int n = a.size();
    ll ans = 1, w = 1;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            while (a[i][i]) {
                ll div = a[j][i] / a[i][i];
                for (int k = i; k < n; k++) {
                    a[j][k] = (a[j][k] - div * a[i][k] % mod + mod) % mod;
                }
                swap(a[i], a[j]);
                w = -w;
            }
            swap(a[i], a[j]);
            w = -w;
        }
    }
    
    for (int i = 0; i < n; i++) {
        ans = ans * a[i][i] % mod;
    }

    return (ans * w + mod) % mod;
}
```

### 1.3.4 gauss_jordan（高斯约旦消元法）

消成对角线形式，可用于矩阵求逆

```c++
bool Gauss_jordan(vector<vector<ll>>& a, vector<vector<ll>>& ans, ll mod) {
    int n = a.size();
    for (int i = 0; i < n; i++) {
        int r = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j][i] > a[r][i]) r = j;
        }
        if (r != i) swap(a[r], a[i]);
        if (r != i) swap(ans[r], ans[i]);
        if (!a[i][i]) return false;

        ll tmp = inv(a[i][i], mod);

        for (int k = 0; k < n; k++) {
            if (k == i) {
                continue;
            }
            ll p = a[k][i] * tmp % mod;
            for (int j = i; j < n; j++) {
                a[k][j] = ((a[k][j] - p * a[i][j]) % mod + mod) % mod;
            }
            for (int j = 0; j < n; j++) {
                ans[k][j] = ((ans[k][j] - p * ans[i][j]) % mod + mod) % mod;
            }
        }

        for (int j = 0; j < n; j++) {
            a[i][j] = (a[i][j] * tmp) % mod;
            ans[i][j] = (ans[i][j] * tmp) % mod;
        }
    }

    return true;
}
```

## 1.4 数值方法

### 1.4.1 simpson（辛普森积分）

```cpp
double f(double x){
	return (c * x + d) / (a * x + b);
}

double simpson(double l, double r){
	double mid = (l + r) / 2;
	return (r - l) * (f(l) + 4 * f(mid) + f(r)) / 6;
}

double asr(double l, double r, double eps, double ans, int step){
	double mid = (l + r) / 2;
	double fl = simpson(l, mid), fr =simpson(mid, r);
	if(abs(fl + fr - ans) <= 15 * eps && step < 0){
		return fl + fr + (fl + fr - ans) / 15;
	}
	return asr(l, mid, eps / 2, fl, step - 1) + asr(mid, r, eps / 2, fr, step - 1);
}

double calc(double l, double r, double eps){
	return asr(l, r, eps, simpson(l, r), 12);
}
```

### 1.4.2 lagrange_interpolation（拉格朗日差值）

$O(n^2)$

返回的数组为从多项式低到高的系数

```cpp
// 组合数预处理（需提前预计算阶乘和逆元）
const ll MOD = 1e9+7;
const int MAXN = 1e6+5;
ll fac[MAXN], inv_fac[MAXN];

ll qpow(ll a,ll n,ll mod){
	ll ans=1;
	while(n > 0){
		if(n&1)ans=(ans*a)%mod;
		n>>=1;
		a=(a*a)%mod;
	}
	return ans;
}

ll inv(ll num) {
    return qpow(num, MOD-2, MOD);
}

void init_comb() {
    fac[0] = 1;
    for (int i = 1; i < MAXN; ++i)
        fac[i] = fac[i-1] * i % MOD;
    inv_fac[MAXN-1] = inv(fac[MAXN-1]);
    for (int i = MAXN-2; i >= 0; --i)
        inv_fac[i] = inv_fac[i+1] * (i+1) % MOD;
}

ll comb(int n, int k) {
    if (k < 0 || k > n) return 0;
    return fac[n] * inv_fac[k] % MOD * inv_fac[n-k] % MOD;
}

const int mod=1e9+7;

vector<ll> lagrange_interpolation(vector<pll>& point) {
  	const int n = point.size();

  	
  	vector<ll> x(n), y(n);
  	for(int i = 0; i < n; i++){
  		x[i] = point[i].first;
  		y[i] = point[i].second;
  	}


  	vector<ll> M(n + 1), px(n, 1), f(n);
  	M[0] = 1;
  	// 求出 M(x) = prod_(i=0..n-1)(x - x_i)
  	for (int i = 0; i < n; ++i) {
    	for (int j = i; j >= 0; --j) {
     		M[j + 1] = (M[j] + M[j + 1]) % mod;
      		M[j] = M[j] * (mod - x[i]) % mod;
    	}
  	}
  	// 求出 px_i = prod_(j=0..n-1, j!=i) (x_i - x_j)
  	for (int i = 0; i < n; ++i) {
    	for (int j = 0; j < n; ++j)
      	if (i != j) {
        	px[i] = px[i] * (x[i] - x[j] + mod) % mod;
      	}
  	}
  	// 组合出 f(x) = sum_(i=0..n-1)(y_i / px_i)(M(x) / (x - x_i))
  	for (int i = 0; i < n; ++i) {
    	ll t = y[i] * inv(px[i]) % mod, k = M[n];
    	for (int j = n - 1; j >= 0; --j) {
      		f[j] = (f[j] + k * t) % mod;
      		k = (M[j] + k * x[i]) % mod;
    	}
  	}
  	return f;
}


ll lagrange_interpolation_consecutive(const vector<pll>& points, ll x) {
    int n = points.size();
    vector<ll> y(n);
    for(int i = 0; i < n; i++) {
        y[i] = points[i].second;
    }

    // 预处理前缀积和后缀积
    vector<ll> p(n + 1), s(n + 1);
    p[0] = (x - 0 + mod) % mod;  // 处理负数情况
    for(int i = 1; i < n; i++) {
        p[i] = p[i - 1] * (x - i + mod) % mod;
    }
    
    s[n] = 1;
    for(int i = n - 1; i >= 0; i--) {
        s[i] = s[i + 1] * (x - i + mod) % mod;
    }

    ll ans = 0;
    for(int i = 1; i < n; i++) {
        // 计算分子部分: product_{j≠i} (x-j)
        ll res = p[i - 1] * s[i + 1] % mod;
        
        // 计算分母部分: (-1)^{n-1-i} * i! * (n-1-i)!
        res = res * inv_fac[i] % mod;
        res = res * inv_fac[n - 1 - i] % mod;
        if((n - 1 - i) % 2) res = mod - res;  // 处理符号
        
        // 计算当前项贡献
        res = res * y[i] % mod;
        ans = (ans + res) % mod;
    }
    
    return ans;
}
```

# 2. 数据结构

## 2.1 并查集

### 2.1.1 DSU（并查集）

```cpp
struct DSU{
	vector<int>f,siz;

	DSU(){}
	DSU(int n){
		init(n);
	}

	void init(int n){
		f.resize(n);
		iota(f.begin(),f.end(),0);
		siz.assign(n,1);
	}

	int find(int x){
		while(x!=f[x]){
			x=f[x]=f[f[x]];
		}
		return x;
	}

	bool same(int x,int y){
		return find(x) == find(y);
	}

	bool merge(int x,int y){
		x=find(x);
		y=find(y);
		if(x==y){
			return false;
		}
		siz[x]+=siz[y];
		f[y]=x;
		return true;
	}

	int size(int x){
		return siz[find(x)];
	}
};
```

### 2.1.2 DSU With Rollback（可撤销并查集）

```cpp
struct DSU {
    std::vector<int> siz;
    std::vector<int> f;
    std::vector<std::array<int, 2>> his;
    
    DSU(int n) : siz(n + 1, 1), f(n + 1) {
        std::iota(f.begin(), f.end(), 0);
    }
    
    int find(int x) {
        while (f[x] != x) {
            x = f[x];
        }
        return x;
    }
    
    bool merge(int x, int y) {
        x = find(x);
        y = find(y);
        if (x == y) {
            return false;
        }
        if (siz[x] < siz[y]) {
            std::swap(x, y);
        }
        his.push_back({x, y});
        siz[x] += siz[y];
        f[y] = x;
        return true;
    }
    
    int time() {
        return his.size();
    }
    
    void revert(int tm) {
        while (his.size() > tm) {
            auto [x, y] = his.back();
            his.pop_back();
            f[y] = y;
            siz[x] -= siz[y];
        }
    }
};
```

## 2.2 树状数组

### 2.2.1 Fenwick（树状数组）

使用树状数组实现区间加，可以维护两个 $Fenwick$ 

$\sum_{i = 1}^{r}{a_i}$ $= \sum_{i = 1}^{r}\sum_{j = 1}^{i}{d_j}$ $=\sum_{i = 1}^{r}{d_i}\times(r+ 1) - \sum_{i = 1}^{r}{d_i}\times{i}$

维护 $d$ 即可

```cpp
template <typename T>
struct Fenwick{
    int n;
    vector<T> a;

    Fenwick(int n_ = 0){
        init(n_);
    }

    void init(int n_){
        n=n_;
        a.assign(n,T{});
    }

    void add(int x,const T &v){
        for(int i=x+1;i<=n;i+=i&-i){
            a[i-1]+=v;
        }
    }

    //[0,x);
    T sum(int x){
        T ans{};
        for(int i=x;i>0;i-=i&-i){
            ans+=a[i-1];
        }
        return ans;
    }

    //[l,r);
    T rangeSum(int l,int r){
        return sum(r) - sum(l);
    }

    //rangeSum[0,x]>k
    int select(const T &k){
        int x=0;
        T cur{};
        for(int i=1<<__lg(n);i;i/=2){
            if(x+i<=n&&cur+a[x+i-1]<=k){
                x+=i;
                cur=cur+a[x-1];
            }
        }
        return x;
    }
};
```

### 2.2.2 Fenwick（树状数组 + 区间加）

```c++
template<typename T>
struct Fenwick{
	int n;
	vector<T> a, b;

	Fenwick(){}
	Fenwick(int n_) {
		init(n_);
	}

	void init(int n_) {
		n = n_;
		a.assign(n + 1, T{});
		b.assign(n + 1, T{});
	}

	void add(int x, const T& v) {
		for (int i = x + 1; i <= n; i += i & -i) {
			a[i - 1] += v;
			b[i - 1] += (x + 1) * v;
		}
	}

	void rangeAdd(int l, int r, const T& v) {
		add(l, v), add(r, -v);
	}

	T sum(int x) {
		T ans1{}, ans2{};
		for (int i = x; i > 0; i -= i & -i) {
			ans1 += a[i - 1];
			ans2 += b[i - 1];
		}

		return ans1 * (x + 1) - ans2;
	}

	T rangeSum(int l, int r) {
		return sum(r) - sum(l);
	}
};
```

### 2.2.3 Fenwick2D（二维树状数组 + 单点修改 + 矩阵查询）

```c++
template<typename T>
struct Fenwick2D{
	int n, m;
	vector<vector<T>> a;

	Fenwick2D(){}
	Fenwick2D(int n_, int m_) {
		init(n_, m_);
	}

	void init(int n_, int m_) {
		n = n_;
		m = m_;
		a.assign(n, vector<T>(m, T{}));
	}

	void add(int x, int y, const T& v) {
		for (int i = x + 1; i <= n; i += i & -i) {
			for (int j = y + 1; j <= m; j += j & -j) {
				a[i - 1][j - 1] += v;
			}
		}
	}

	T sum(int x, int y) {
		T ans{};
		for (int i = x; i > 0; i -= i & -i) {
			for (int j = y; j > 0; j -= j & -j) {
				ans += a[i - 1][j - 1];
			}
		}

		return ans;
	}

	T rangesum(int lx, int ly, int rx, int ry) {
		return sum(rx, ry) - sum(rx, ly) - sum(lx, ry) + sum(lx, ly);
	}
};
```

### 2.2.4 Fenwick2D（二维树状数组 + 矩阵加 + 矩阵和查询）

```c++
template<typename T>
struct Fenwick2D{
	int n, m;
	vector<vector<T>> a, b, c, d;

	Fenwick2D(){}
	Fenwick2D(int n_, int m_) {
		init(n_, m_);
	}

	void init(int n_, int m_) {
		n = n_;
		m = m_;
		a.assign(n + 1, vector<T>(m + 1, T{}));
		b.assign(n + 1, vector<T>(m + 1, T{}));
		c.assign(n + 1, vector<T>(m + 1, T{}));
		d.assign(n + 1, vector<T>(m + 1, T{}));
	}

	void add(int x, int y, const T& v) {
		for (int i = x + 1; i <= n; i += i & -i) {
			for (int j = y + 1; j <= m; j += j & -j) {
				a[i - 1][j - 1] += v;
				b[i - 1][j - 1] += v * (x + 1);
				c[i - 1][j - 1] += v * (y + 1);
				d[i - 1][j - 1] += v * (x + 1) * (y + 1);
			}
		}
	}

	void rangeAdd(int lx, int ly, int rx, int ry, const T& v) {
		add(lx, ly, v);
		add(lx, ry, -v);
		add(rx, ly, -v);
		add(rx, ry, v);
	}

	T sum(int x, int y) {
		T ans1{}, ans2{}, ans3{}, ans4{};
		for (int i = x; i > 0; i -= i & -i) {
			for (int j = y; j > 0; j -= j & -j) {
				ans1 += a[i - 1][j - 1];
				ans2 += b[i - 1][j - 1];
				ans3 += c[i - 1][j - 1];
				ans4 += d[i - 1][j - 1];
			}
		}

		return ans1 * (x + 1) * (y + 1) - ans2 * (y + 1) - ans3 * (x + 1) + ans4;
	}

	T rangesum(int lx, int ly, int rx, int ry) {
		return sum(rx, ry) - sum(rx, ly) - sum(lx, ry) + sum(lx, ly);
	}
};
```

## 2.3 线段树与树套树

### 2.3.1 SegmentTree（动态开点）

```c++
const int NST = 2e5 + 5;
struct SegTree{
    int n, cnt, root;
	int ls[NST << 5], rs[NST << 5];
	ll sum[NST << 5], tag[NST << 5];
	SegTree() {}
    SegTree(int n_) {
		init(n_);
    }

	void init(int n_) {
        n = n_;
        cnt = 0;
        root = 0;
	}

    void newnode(int& p) {
        p = ++cnt;
		ls[p] = rs[p] = sum[p] = tag[p] = 0;
    }

    void pushdown(int p, int s, int t) {
        if (!ls[p]) newnode(ls[p]);
        if (!rs[p]) newnode(rs[p]);
        tag[ls[p]] += tag[p];
        tag[rs[p]] += tag[p];
        int mid = s + t >> 1;
        sum[ls[p]] += tag[p] * (mid - s + 1LL);
        sum[rs[p]] += tag[p] * (t - mid);
        tag[p] = 0;
    }

    void pushup(int p) {
        sum[p] = sum[ls[p]] + sum[rs[p]];
    }

    void update(int &p, int l, int r, int s, int t, ll val) {
        if (!p) newnode(p);
        if (t < l || s > r) return;
        if (l <= s && t <= r) {
            sum[p] += val * (t - s + 1);
            tag[p] += val;
            return;
        }
        int mid = s + t >> 1;
        pushdown(p, s, t);
        update(ls[p], l, r, s, mid, val);
        update(rs[p], l, r, mid + 1, t, val);
        pushup(p);
    }

    void update(int l, int r, ll val) {
        update(root, l, r, 0, n, val);
    }

    ll query(int p, int l, int r, int s, int t) {
        if (!p) return 0;
        if (t < l || s > r) return 0;
        if (l <= s && t <= r) {
            return sum[p];
        }
        int mid = s + t >> 1;
        pushdown(p, s, t);
        return query(ls[p], l, r, s, mid) + query(rs[p], l, r, mid + 1, t);
    }

    ll query(int l, int r) {
        return query(root, l, r, 0, n);
    }
} seg;
```

### 2.3.2 LazySegmentTree（懒标记线段树）

```cpp
template<class Info, class Tag>
struct LazySegmentTree {
    int n;
    std::vector<Info> info;
    std::vector<Tag> tag;
    LazySegmentTree() : n(0) {}
    LazySegmentTree(int n_, Info v_ = Info()) {
        init(n_, v_);
    }
    template<class T>
    LazySegmentTree(std::vector<T> init_) {
        init(init_);
    }
    void init(int n_, Info v_ = Info()) {
        init(std::vector(n_, v_));
    }
    template<class T>
    void init(std::vector<T> init_) {
        n = init_.size();
        info.assign(4 << std::__lg(n), Info());
        tag.assign(4 << std::__lg(n), Tag());
        std::function<void(int, int, int)> build = [&](int p, int l, int r) {
            if (r - l == 1) {
                info[p] = init_[l];
                return;
            }
            int m = (l + r) / 2;
            build(2 * p, l, m);
            build(2 * p + 1, m, r);
            pull(p);
        };
        build(1, 0, n);
    }
    void pull(int p) {
        info[p] = info[2 * p] + info[2 * p + 1];
    }
    void apply(int p, const Tag &v) {
        info[p].apply(v);
        tag[p].apply(v);
    }
    void push(int p) {
        apply(2 * p, tag[p]);
        apply(2 * p + 1, tag[p]);
        tag[p] = Tag();
    }
    void modify(int p, int l, int r, int x, const Info &v) {
        if (r - l == 1) {
            info[p] = v;
            return;
        }
        int m = (l + r) / 2;
        push(p);
        if (x < m) {
            modify(2 * p, l, m, x, v);
        } else {
            modify(2 * p + 1, m, r, x, v);
        }
        pull(p);
    }
    void modify(int p, const Info &v) {
        modify(1, 0, n, p, v);
    }
    Info rangeQuery(int p, int l, int r, int x, int y) {
        if (l >= y || r <= x) {
            return Info();
        }
        if (l >= x && r <= y) {
            return info[p];
        }
        int m = (l + r) / 2;
        push(p);
        return rangeQuery(2 * p, l, m, x, y) + rangeQuery(2 * p + 1, m, r, x, y);
    }
    Info rangeQuery(int l, int r) {
        return rangeQuery(1, 0, n, l, r);
    }
    void rangeApply(int p, int l, int r, int x, int y, const Tag &v) {
        if (l >= y || r <= x) {
            return;
        }
        if (l >= x && r <= y) {
            apply(p, v);
            return;
        }
        int m = (l + r) / 2;
        push(p);
        rangeApply(2 * p, l, m, x, y, v);
        rangeApply(2 * p + 1, m, r, x, y, v);
        pull(p);
    }
    void rangeApply(int l, int r, const Tag &v) {
        return rangeApply(1, 0, n, l, r, v);
    }
    void half(int p, int l, int r) {
        if (info[p].act == 0) {
            return;
        }
        if ((info[p].min + 1) / 2 == (info[p].max + 1) / 2) {
            apply(p, {-(info[p].min + 1) / 2});
            return;
        }
        int m = (l + r) / 2;
        push(p);
        half(2 * p, l, m);
        half(2 * p + 1, m, r);
        pull(p);
    }
    void half() {
        half(1, 0, n);
    }
    
    template<class F>
    int findFirst(int p, int l, int r, int x, int y, F &&pred) {
        if (l >= y || r <= x) {
            return -1;
        }
        if (l >= x && r <= y && !pred(info[p])) {
            return -1;
        }
        if (r - l == 1) {
            return l;
        }
        int m = (l + r) / 2;
        push(p);
        int res = findFirst(2 * p, l, m, x, y, pred);
        if (res == -1) {
            res = findFirst(2 * p + 1, m, r, x, y, pred);
        }
        return res;
    }
    template<class F>
    int findFirst(int l, int r, F &&pred) {
        return findFirst(1, 0, n, l, r, pred);
    }
    template<class F>
    int findLast(int p, int l, int r, int x, int y, F &&pred) {
        if (l >= y || r <= x) {
            return -1;
        }
        if (l >= x && r <= y && !pred(info[p])) {
            return -1;
        }
        if (r - l == 1) {
            return l;
        }
        int m = (l + r) / 2;
        push(p);
        int res = findLast(2 * p + 1, m, r, x, y, pred);
        if (res == -1) {
            res = findLast(2 * p, l, m, x, y, pred);
        }
        return res;
    }
    template<class F>
    int findLast(int l, int r, F &&pred) {
        return findLast(1, 0, n, l, r, pred);
    }
};

struct Tag {
    int x = 1e9;
    void apply(const Tag &t) & {
        x = min(x, t.x);
    }
};

struct Info {
    int x = 1e9;
    void apply(const Tag &t) & {
        x = min(x, t.x);
    }
};

Info operator+(const Info &a, const Info &b) {
    return {min(a.x, b.x)};
}
```

```c++
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
```

### 2.3.3 SegmentTree（线段树合并）

```c++
struct Info{
    int cnt = 0, id = 0;
    Info operator+(const Info& o) const {
        return {cnt + o.cnt, id};
    }
};

const int N = 2e6 + 5;
const int Z = 1e5 + 5;

struct node{
    int l, r, ls, rs;
    Info v;
} tr[N << 3];
int tot, rt[N];

void nownode(int &p, int l, int r) {
    p = ++tot;
    tr[p].l = l, tr[p].r = r;
    if (l == r) tr[p].v.id = l;
}

void push_up(int p) {
    //
}

void modify(int& p, int l, int r, int x, int v) {
    if (!p) nownode(p, l, r);
    if (l == r) {
        tr[p].v.cnt += v;
        return;
    }

    int mid = floor((l + r) / 2.0);
    if (x <= mid) modify(tr[p].ls, l, mid, x, v);
    else modify(tr[p].rs, mid + 1, r, x, v);
    push_up(p);
}

int merge(int rt1, int rt2, int l, int r) {
    if (!rt1 || !rt2) return rt1 | rt2;
    if (l == r) {
        tr[rt1].v.cnt += tr[rt2].v.cnt;
        return rt1;
    }

    int mid = floor((l + r) / 2.0);
    tr[rt1].ls = merge(tr[rt1].ls, tr[rt2].ls, l, mid);
    tr[rt1].rs = merge(tr[rt1].rs, tr[rt2].rs, mid + 1, r);
    push_up(rt1);
    return rt1;
}
```

### 2.3.4 SegmentTree（线段树分裂）

```c++
const int N = 2e5 + 5;

struct node{
    int ls, rs;
    ll cnt = 0;
}tr[N << 5];
int tot, rt[N], id;

void nownode(int& p) {
    p = ++tot;
}

int merge(int a, int b) {
    if (!a || !b) return a | b;

    tr[a].cnt += tr[b].cnt;
    tr[b].cnt = 0;

    tr[a].ls = merge(tr[a].ls, tr[b].ls);
    tr[a].rs = merge(tr[a].rs, tr[b].rs);

    return a;
}

void split(int& p, int& q, int l, int r, int s, int t) {
    if (!p) return;
    if (r < s || l > t) return;

    if (s <= l && r <= t) {
        q = p;
        p = 0;
        return;
    }

    if (!q) nownode(q);

    int mid = l + r >> 1;
    split(tr[p].ls, tr[q].ls, l, mid, s, t);
    split(tr[p].rs, tr[q].rs, mid + 1, r, s, t);
    tr[p].cnt = tr[tr[p].ls].cnt + tr[tr[p].rs].cnt;
    tr[q].cnt = tr[tr[q].ls].cnt + tr[tr[q].rs].cnt;
}

void modify(int& p, int l, int r, int v, ll d) {
    if (r < v || l > v) return;
    if (!p) nownode(p);
    if (l == r) {
        tr[p].cnt += d;
        return;
    }

    int mid = l + r >> 1;
    modify(tr[p].ls, l, mid, v, d);
    modify(tr[p].rs, mid + 1, r, v, d);
    tr[p].cnt = tr[tr[p].ls].cnt + tr[tr[p].rs].cnt;
}

ll query(int p, int l, int r, int x, int y) {
    if (r < x || l > y) return 0;
    if (!p) return 0;

    if (x <= l && r <= y) {
        return tr[p].cnt;
    }

    int mid = l + r >> 1;
    return query(tr[p].ls, l, mid, x, y) + query(tr[p].rs, mid + 1, r, x, y);
}

ll kthnum(int p, int l, int r, ll k) {
    if (!p) return -1;

    if (l == r) {
        if (tr[p].cnt >= k) return l;
        else return -1;
    }

    int mid = l + r >> 1;
    if (tr[tr[p].ls].cnt >= k) return kthnum(tr[p].ls, l, mid, k);
    else return kthnum(tr[p].rs, mid + 1, r, k - tr[tr[p].ls].cnt);
}
```

### 2.3.5 President Segment Tree（主席树 + 静态区间第k小）

```cpp
const int NPST = 2e5 + 5;
struct PST{
    int tot, n, id;
	int sum[NPST << 5], ls[NPST << 5], rs[NPST << 5], rt[NPST << 5];
    
    PST(){}
    PST(int n_){
		init(n_);
    }

	void init(int n_) {
        n = n_;
        id = 1;
	}
    
    void add(int& now, int last, int l, int r, int x) {
        now = ++tot;
        sum[now] = sum[last] + 1;
        ls[now] = ls[last];
        rs[now] = rs[last];
        if (l == r) return;
        int mid = l + r >> 1;
        if (x <= mid) add(ls[now], ls[last], l, mid, x);
        else add(rs[now], rs[last], mid + 1, r, x);
    }
    
    void add(int x) {
        add(rt[id], rt[id - 1], 0, n, x);
        id++;
    }
    
    int query(int L, int R, int l, int r, int x) {
        if (l == r) return l;
        int p = sum[ls[R]] - sum[ls[L]];
        int mid = l + r >> 1;
        if (p >= x) return query(ls[L], ls[R], l, mid, x);
        else return query(rs[L], rs[R], mid + 1, r, x - p);
    }
    
    int query(int L, int R, int x) {
        return query(rt[L - 1], rt[R], 0, n, x);
    }
} pst;
```

### 2.3.6 树套树（单点修+区域查询）

```c++
const int N = 2e7 + 5;
struct DS {
    int n;
    int tot, ls[N], rs[N], sum[N], ort[N];
    int rt;
    DS(){}
    DS(int n_) {
        init(n_);
    }

    void init(int n_) {
        n = n_;
        tot = 0;
        rt = 0;
    }

    void newnode(int &p) {
        p = ++tot;
        ls[p] = rs[p] = sum[p] = ort[p] = 0;
    }

    void upd2(int &p, int l, int r, int s, int t, int s1, int t1, int val) {
        if (l > t || r < s) return;
        if (!p) newnode(p);
        upd3(ort[p], 1, n, s1, t1, val);
        if (l == r) return;
        int mid = l + r >> 1;
        upd2(ls[p], l, mid, s, t, s1, t1, val);
        upd2(rs[p], mid + 1, r, s, t, s1, t1, val);
    }

    void upd2(int s, int t, int s1, int t1, int val) {
        upd2(rt, 1, n, s, t, s1, t1, val);
    }
    
    void upd3(int &p, int l, int r, int s, int t, int val) {
        if (l > t || r < s) return;
        if (!p) newnode(p);

        sum[p] += val;
        if (l == r) return;
        int mid = l + r >> 1;
        upd3(ls[p], l, mid, s, t, val);
        upd3(rs[p], mid + 1, r, s, t, val);
    }
    
    int qur2(int &p, int l, int r, int s, int t, int s1, int t1) {
        if (l > t || r < s) return 0;
        if (!p) return 0;
        if (s <= l && r <= t) return qur3(ort[p], 1, n, s1, t1);
        int mid = l + r >> 1;
        return qur2(ls[p], l, mid, s, t, s1, t1) + qur2(rs[p], mid + 1, r, s, t, s1, t1);
    }

    int qur2(int s, int t, int s1, int t1) {
        return qur2(rt, 1, n, s, t, s1, t1);
    }
    
    int qur3(int &p, int l, int r, int s, int t) {
        if (l > t || r < s) return 0;
        if (!p) return 0;
        if (s <= l && r <= t) return sum[p];
        int mid = l + r >> 1;
        return qur3(ls[p], l, mid, s, t) + qur3(rs[p], mid + 1, r, s, t);
    }
} seg;
```

### 2.3.7 Li Chao Segment Tree（李超线段树）

支持插入直线/线段，查询 $x$ 处的最值（默认维护最大值，坐标/权值均为整数，避免浮点误差用交叉相乘比较）。

```c++
struct Point {
    ll x = 0, y = 0;
    Point(){}
    Point(int x_, int y_) {
        x = x_, y = y_;
    }

    Point operator-(const Point& b) const {
        return Point(x - b.x, y - b.y);
    }
};

struct Line {
    Point p1, p2;
    int id;
    Line(){
        id = -1;
    }
    Line(Point p1_, Point p2_, int id_ = -1) {
        p1 = p1_, p2 = p2_;
        id = id_;
    }
};

int cmp(Line l1, Line l2, ll x) {
    ll y1, x1, y2, x2;
    if (l1.p1.x == l1.p2.x) {
        y1 = max(l1.p1.y, l1.p2.y);
        x1 = 1;
    }
    else {
        y1 = l1.p1.y * (l1.p2.x - l1.p1.x) + (l1.p2.y - l1.p1.y) * (x - l1.p1.x);
        x1 = l1.p2.x - l1.p1.x;
    }
    if (l2.p1.x == l2.p2.x) {
        y2 = max(l2.p1.y, l2.p2.y);
        x2 = 1;
    }
    else {
        y2 = l2.p1.y * (l2.p2.x - l2.p1.x) + (l2.p2.y - l2.p1.y) * (x - l2.p1.x);
        x2 = l2.p2.x - l2.p1.x;
    }

    if ((__int128)y1 * x2 == (__int128)y2 * x1) return 0;
    else if ((__int128)y1 * x2 > (__int128)y2 * x1) return 1;
    else return -1;
}

const int N = 1e6 + 6;
struct DS {
    int n;
    int vis[N], ls[N], rs[N], rt, tot;
    Line line[N];

    DS(){}
    DS(int n_) {
        init(n_);
    }

    void init(int n_) {
        n = n_;
        rt = 0;
        tot = 0;
    }

    void newnode(int &p) {
        p = ++tot;
        ls[p] = rs[p] = vis[p] = 0;
    }

    void ins1(int& p, int l, int r, int s, int t, Line& v) {
        if (l > t || r < s) return;
        if (!p) newnode(p);
        if (s <= l && r <= t) {
            ins2(p, l, r, v);
            return;
        }
        int mid = l + r >> 1;
        ins1(ls[p], l, mid, s, t, v);
        ins1(rs[p], mid + 1, r, s, t, v);
    }

    void ins(int s, int t, Line& v) {
        ins1(rt, 1, n, s, t, v);
    }

    void ins2(int &p, int l, int r, Line v) {
        if (!p) newnode(p);
        int mid = l + r >> 1;
        if (!vis[p]) {
            line[p] = v;
            vis[p] = 1;
            return;
        }
        else {
            if (cmp(v, line[p], mid) > 0) {
                swap(line[p], v);
            }
            else if (cmp(v, line[p], mid) == 0 && v.id < line[p].id) swap(line[p], v); 
        }
        if (l == r) return;
        if (cmp(v, line[p], l) > 0 || (!ls[p] && cmp(v, line[p], l) >= 0)) {
            ins2(ls[p], l, mid, v);
        }
        if (cmp(v, line[p], r) > 0 || (!rs[p] && cmp(v, line[p], r) >= 0)) {
            ins2(rs[p], mid + 1, r, v);
        }
    }

    void qur(int p, int l, int r, ll x, Line& v) {
        if (l > x || r < x || !p) return;
        if (vis[p]) {
            if (v.id == -1) v = line[p];
            else {
                if (cmp(line[p], v, x) > 0) v = line[p];
                else if (cmp(line[p], v, x) == 0) {
                    if (line[p].id < v.id) v = line[p];
                }
            }
        }
        if (l == r) return;
        int mid = l + r >> 1;
        qur(ls[p], l, mid, x, v);
        qur(rs[p], mid + 1, r, x, v);
    }
    Line qur(ll x) {
        Line tmp;
        qur(rt, 1, n, x, tmp);
        return tmp;
    }
} seg;
```

## 2.4 平衡树与堆

### 2.4.1 Fhq（非旋Treap）

```cpp
//如果val大于N记得关闭id
//id得自己启用
const int N=2e6+5;
mt19937 rnd(114514);

struct node{
	int l,r;
	int val,key;
	int size;
	int fa;
	bool reverse;
}fhq[N];

int cnt,root,id[N];

int newnode(int val){
	fhq[++cnt].val=val;
	fhq[cnt].key=rnd();
	fhq[cnt].size=1;
	// id[val]=cnt;
	return cnt;
}

void update(int now){
	fhq[now].size=fhq[fhq[now].l].size+fhq[fhq[now].r].size+1;
}

void pushdown(int now){
	std::swap(fhq[now].l,fhq[now].r);
	fhq[fhq[now].l].reverse^=1;
	fhq[fhq[now].r].reverse^=1;
	fhq[now].reverse=false;
}

void split(int now,int val,int &x,int &y,int fax=0,int fay=0){
	if(!now)x=y=0;
	else {
		if(fhq[now].val<=val){
			x=now;
			fhq[x].fa=fax;
			split(fhq[now].r,val,fhq[now].r,y,now,fay);
		}else {
			y=now;
			split(fhq[now].l,val,x,fhq[now].l,fax,now);
		}
		update(now);
	}
}

void split1(int now,int siz,int &x,int &y,int fax=0,int fay=0){
	if(!now)x=y=0;
	else {
		if(fhq[now].reverse)pushdown(now);
		if(fhq[fhq[now].l].size<siz){
			x=now;
			fhq[x].fa=fax;
			split1(fhq[now].r,siz-fhq[fhq[now].l].size-1,fhq[now].r,y,now,fay);
		}
		else {
			y=now;
			fhq[y].fa=fay;
			split1(fhq[now].l,siz,x,fhq[now].l,fax,now);
		}
		update(now);
	}
}

int merge(int x,int y){
	if(!x||!y)return x+y;
	if(fhq[x].key>fhq[y].key){
		if(fhq[x].reverse)pushdown(x);
		fhq[x].r=merge(fhq[x].r,y);
		fhq[fhq[x].r].fa=x;
		update(x);
		return x;
	}else {
		if(fhq[y].reverse)pushdown(y);
		fhq[y].l=merge(x,fhq[y].l);
		fhq[fhq[y].l].fa=y;
		update(y);
		return y;
	}
}

void reverse(int l,int r){
	int x,y,z;
	split1(root,l-1,x,y);
	split1(y,r-l+1,y,z);
	fhq[y].reverse^=1;
	root=merge(merge(x,y),z);
}

void ldr(int now){
	if(!now)return;
	if(fhq[now].reverse)pushdown(now);
	ldr(fhq[now].l);
	cout<<fhq[now].val<<" ";
	ldr(fhq[now].r);
}


int x,y,z;
void ins(int val){
	split(root,val,x,y);
	root=merge(merge(x,newnode(val)),y);
}

void del(int val){
	split(root,val,x,z);
	split(x,val-1,x,y);
	y=merge(fhq[y].l,fhq[y].r);
	root=merge(merge(x,y),z);
}

int getrank(int val){
	split(root,val-1,x,y);
	int ans=fhq[x].size+1;
	root=merge(x,y);
	return ans;
}

int getnum(int rank){
	int now=root;
	while(now){
		if(fhq[fhq[now].l].size+1==rank)break;
		else if(fhq[fhq[now].l].size+1>=rank){
			now=fhq[now].l;
		}else {
			rank-=fhq[fhq[now].l].size+1;
			now=fhq[now].r;
		}
	}
	return fhq[now].val;
}

int pre(int val){
	split(root,val-1,x,y);
	int now=x;
	while(fhq[now].r)now=fhq[now].r;
	int ans=fhq[now].val;
	root=merge(x,y);
	return ans;
}

int nxt(int val){
	split(root,val,x,y);
	int now=y;
	while(fhq[now].l)now=fhq[now].l;
	int ans=fhq[now].val;
	root=merge(x,y);
	return ans;
}

int find(int val){
    int now=id[val],res=fhq[fhq[now].l].size+1;
    while(now!=root&&cnt){
		if(now==fhq[fhq[now].fa].r)res+=fhq[fhq[fhq[now].fa].l].size+1;
		now=fhq[now].fa;
    }
    return res;
}
```

### 2.4.2 Splay（Splay树，伸展树）

```c++
template <typename T>
struct SplayTree {
	int n, rt, id;
	vector<int> fa, cnt, sz, lz;
	vector<T> val;
	vector<vector<int>> ch;

	SplayTree() {}
	SplayTree(int n_) {
		init(n_);
	}

	void init(int n_) {
		n = n_;
		rt = id = 0;
		fa.assign(n, 0);
		val.assign(n, T{});
		cnt.assign(n, 0);
		sz.assign(n, 0);
		lz.assign(n, 0);
		ch.assign(n, {0, 0});
	}

	bool dir(int x) {
		return x == ch[fa[x]][1];
	}
	
	void push_up(int x) {
		sz[x] = cnt[x] + sz[ch[x][0]] + sz[ch[x][1]];
	}

	void rotate(int x) {
		int y = fa[x], z = fa[y];
		bool r = dir(x);
		ch[y][r] = ch[x][!r];
		ch[x][!r] = y;
		if (z) ch[z][dir(y)] = x;
		if (ch[y][r]) fa[ch[y][r]] = y;
		fa[y] = x;
		fa[x] = z;
		push_up(y);
		push_up(x);
	}
	
	void splay(int& z, int x) {
		int w = fa[z];
		int y = fa[x];
		while (y != w) {
			if (fa[y] != w) rotate(dir(x) == dir(y) ? y : x);
			rotate(x);
			y = fa[x];
		}
		z = x;
	}

	void find(int& z, int v) {
		int x = z, y = fa[x];
		while (x && val[x] != v) {
			y = x;
			x = ch[x][v > val[x]];
		}
		splay(z, x ? x : y);
	}
	
	void loc(int& z, int k) {
		int x = z;
		while (true) {
			if (sz[ch[x][0]] >= k) {
				x = ch[x][0];
			}
			else if (sz[ch[x][0]] + cnt[x] >= k) {
				break;
			}
			else {
				k -= sz[ch[x][0]] + cnt[x];
				x = ch[x][1];
			}
		}
		splay(z, x);
	}
	
	int find_kth(int k) {
		if (k > sz[rt]) return -1;
		loc(rt, k);
		return val[rt];
	}
	
	int merge(int x, int y) {
		if (!x || !y) return x | y;
		loc(y, 1);
		ch[y][0] = x;
		fa[x] = y;
		push_up(y);
		return y;
	}
	
	void insert(int v) {
		int x = rt, y = 0;
		while (x && val[x] != v) {
			y = x;
			x = ch[x][v > val[x]];
		}
		if (x) {
			cnt[x]++;
			sz[x]++;
		}
		else {
			x = ++id;
			val[x] = v;
			cnt[x] = sz[x] = 1;
			fa[x] = y;
			if (y) ch[y][v > val[y]] = x;
		}
		splay(rt, x);
	}
	
	bool remove(int v) {
		find(rt, v);
		if (!rt || val[rt] != v) return false;
		cnt[rt]--;
		sz[rt]--;
		if (!cnt[rt]) {
			int x = ch[rt][0];
			int y = ch[rt][1];
			fa[x] = fa[y] = 0;
			rt = merge(x, y);
		}
		return true;
	}
	
	int find_rank(int v) {
		find(rt, v);
		return sz[ch[rt][0]] + (val[rt] < v ? cnt[rt] : 0) + 1;
	}
	
	int find_prev(int v) {
		find(rt, v);
		if (rt && val[rt] < v) return val[rt];
		int x = ch[rt][0];
		if (!x) return -1;
		while (ch[x][1]) {
			x = ch[x][1];
		}
		splay(rt, x);
		return val[rt];
	}
	
	int find_next(int v) {
		find(rt, v);
		if (rt && val[rt] > v) return val[rt];
		int x = ch[rt][1];
		if (!x) return -1;
		while (ch[x][0]) {
			x = ch[x][0];
		}
		splay(rt, x);
		return val[rt];
	}
	
	void lazy_reverse(int x) {
		swap(ch[x][0], ch[x][1]);
		lz[x] ^= 1;
	}
	
	void push_down(int x) {
		if (lz[x]) {
			if (ch[x][0]) lazy_reverse(ch[x][0]);
			if (ch[x][1]) lazy_reverse(ch[x][1]);
			lz[x] = 0;
		}
	}

	void loc1(int& z, int k) {
		int x = z;
		while (true) {
			push_down(x);
			if (sz[ch[x][0]] >= k) {
				x = ch[x][0];
			}
			else if (sz[ch[x][0]] == k - 1) {
				break;
			}
			else {
				k -= sz[ch[x][0]] + cnt[x];
				x = ch[x][1];
			}
			push_down(x);
		}
		splay(z, x);
	}

	void build(int n) {
		for (int i = 1; i <= n + 2; i++) {
			++id;
			ch[id][0] = rt;
			if (rt) fa[rt] = id;
			rt = id;
			val[id] = i - 1;
			cnt[id]++;
			sz[id]++;
		}
		splay(rt, 1);
	}
	
	void reverse(int l, int r) {
		loc1(rt, l);
		loc1(ch[rt][1], r - l + 2);
		int x = ch[ch[rt][1]][0];
		lazy_reverse(x);
		push_down(x);
		splay(rt, x);
	}
	
	void print(int x) {
		if (!x) return;
		push_down(x);
		print(ch[x][0]);
		cout << val[x] << " ";
		print(ch[x][1]);
	}
	
	void print() {
		loc1(rt, 1);
		loc1(ch[rt][1], sz[rt] - 1);
		print(ch[ch[rt][1]][0]);
	}
};
```

### 2.4.3 文艺平衡树 （无旋Treap版）

```cpp
const int N=1e5+5;
mt19937 rnd(114514);

struct node{
	int l,r;
	int val,key;
	int size;
	bool reverse;
}fhq[N];

int cnt,root;

int newnode(int val){
	fhq[++cnt].val=val;
	fhq[cnt].key=rnd();
	fhq[cnt].size=1;
	return cnt;
}

void update(int now){
	fhq[now].size=fhq[fhq[now].l].size+fhq[fhq[now].r].size+1;
}

void pushdown(int now){
	std::swap(fhq[now].l,fhq[now].r);
	fhq[fhq[now].l].reverse^=1;
	fhq[fhq[now].r].reverse^=1;
	fhq[now].reverse=false;
}

void split(int now,int val,int &x,int &y){
	if(!now)x=y=0;
	else {
		if(fhq[now].val<=val){
			x=now;
			split(fhq[now].r,val,fhq[now].r,y);
		}else {
			y=now;
			split(fhq[now].l,val,x,fhq[now].l);
		}
		update(now);
	}
}

void split1(int now,int siz,int &x,int &y){
	if(!now)x=y=0;
	else {
		if(fhq[now].reverse)pushdown(now);
		if(fhq[fhq[now].l].size<siz){
			x=now;
			split1(fhq[now].r,siz-fhq[fhq[now].l].size-1,fhq[now].r,y);
		}
		else {
			y=now;
			split1(fhq[now].l,siz,x,fhq[now].l);
		}
		update(now);
	}
}

int merge(int x,int y){
	if(!x||!y)return x+y;
	if(fhq[x].key>fhq[y].key){
		if(fhq[x].reverse)pushdown(x);
		fhq[x].r=merge(fhq[x].r,y);
		update(x);
		return x;
	}else {
		if(fhq[y].reverse)pushdown(y);
		fhq[y].l=merge(x,fhq[y].l);
		update(y);
		return y;
	}
}

void reverse(int l,int r){
	int x,y,z;
	split1(root,l-1,x,y);
	split1(y,r-l+1,y,z);
	fhq[y].reverse^=1;
	root=merge(merge(x,y),z);
}

void ldr(int now){
	if(!now)return;
	if(fhq[now].reverse)pushdown(now);
	ldr(fhq[now].l);
	cout<<fhq[now].val<<" ";
	ldr(fhq[now].r);
}


int x,y,z;
void ins(int val){
	split(root,val,x,y);
	root=merge(merge(x,newnode(val)),y);
}

void del(int val){
	split(root,val,x,z);
	split(x,val-1,x,y);
	y=merge(fhq[y].l,fhq[y].r);
	root=merge(merge(x,y),z);
}

int getrank(int val){
	split(root,val-1,x,y);
	int ans=fhq[x].size+1;
	root=merge(x,y);
	return ans;
}

int getnum(int rank){
	int now=root;
	while(now){
		if(fhq[fhq[now].l].size+1==rank)break;
		else if(fhq[fhq[now].l].size+1>=rank){
			now=fhq[now].l;
		}else {
			rank-=fhq[fhq[now].l].size+1;
			now=fhq[now].r;
		}
	}
	return fhq[now].val;
}

int pre(int val){
	split(root,val-1,x,y);
	int now=x;
	while(fhq[now].r)now=fhq[now].r;
	int ans=fhq[now].val;
	root=merge(x,y);
	return ans;
}

intt(int val){
	split(root,val,x,y);
	int now=y;
	while(fhq[now].l)now=fhq[now].l;
	int ans=fhq[now].val;
	root=merge(x,y);
	return ans;
}
```

### 2.4.4 左偏树

由于大部分情况可由启发式优先队列合并，此处暂未给出代码。

```c++
const int NLT = 1e5 + 5;
struct LeftistTree{
	int n;
	int val[NLT], ls[NLT], rs[NLT], d[NLT];
	int fa[NLT];
	LeftistTree(){}
	LeftistTree(int n_) {
		init(n_);
	}

	void init(int n_) {
		n = n_;
		d[0] = -1;
		for (int i = 0; i <= n; i++) {
			val[i] = ls[i] = rs[i] = d[i] = 0;
			fa[i] = i;
		}
	}

	int find(int x) {
		while (x != fa[x]) x = fa[x] = fa[fa[x]];
		return x;
	}

	int merge(int x, int y) {
		if (!x || !y) return x | y;
		if (val[x] > val[y]) swap(x, y);
		pushdown(x);
		rs[x] = merge(rs[x], y);
		if (d[rs[x]] > d[ls[x]]) swap(ls[x], rs[x]);
		d[x] = d[rs[x]] + 1;
		fa[x] = x;
		fa[ls[x]] = x;
		fa[rs[x]] = x;
		return x;
	}

	void merge_node(int x, int y) {
		x = find(x), y = find(y);
		if (x == y) return;
		merge(x, y);
	}

	int top(int x) {
		return val[find(x)];
	}

	void pop(int x) {
		erase(find(x));
	}

	void erase(int x) {
		int rt = merge(ls[x], rs[x]);
		if (ls[fa[x]] == x) {
			ls[fa[x]] = rt;
			fa[rt] = fa[x];
		}
		else if (rs[fa[x]] == x) {
			rs[fa[x]] = rt;
			fa[rt] = fa[x];
		}
		else {
			fa[rt] = rt;
			fa[x] = rt;
		}
		pushup(fa[x]);
	}

	void pushdown(int x) {
		
	}

	void pushup(int x) {
		if (!x) return;
		if (d[x] != d[rs[x]] + 1) {
			d[x] = d[rs[x]] + 1;
			pushup(fa[x]);
		}
	}
} ltr;
```

### 2.4.5 CartesianTree（笛卡尔树）

```cpp
struct CartesianTree{
    int root, n;
    vector<int> a;
    vector<int> ls, rs;
    vector<int> v;
    
    void clear() {
        root = 0;
        v.clear();
        for (int i = 0; i < n; i++) {
            ls[i] = rs[i] = 0;
        }
    }
    
    CartesianTree(){}
    CartesianTree(int n_) {
        n = n_;
        a.resize(n);
        ls.assign(n, -1);
        rs.assign(n, -1);
    }
    CartesianTree(vector<int>& b) {
        n = b.size();
        a.resize(n);
        for (int i = 0; i < n; i++) {
            a[i] = b[i];
        }
        ls.assign(n, -1);
        rs.assign(n, -1);
        build();
    }
    
    void modify(int pos, int val) {
        a[pos] = val;
        return;
    }
    
    void build() {
        for(int i = 0; i < n; i++) {
            int j = -1;

            // < big
            // > small
            while (v.size() && a[v.back()] > a[i]) {
                j = v.back();
                v.pop_back();
            }
            
            if (!v.size()) root = i;
            else rs[v.back()] = i;
            
            ls[i] = j;
            v.push_back(i);
        }
    }

    int query(int l, int r) {
        int x = root;
        while (!(l <= x && x <= r)) {
            if (x > r) x = ls[x];
            else if (x < l) x = rs[x];
        }

        return a[x];
    }
};
```

## 2.5 散列与查找

### 2.5.1 Basis（线性基）

```cpp
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
```

### 2.5.2 ST（ST表）

```cpp
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
```

### 2.5.3 Chtholly Tree（珂朵莉树 OTD）

```cpp
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
```

### 2.5.4 Subsequence Automaton（子序列自动机 + 主席树实现）

```c++
struct PST{
    int tot, n, id;
	vector<int> ls, rs, rt, val;
    
    PST(){}
    PST(int n_, int m_){
        n = n_;
        id = 0;
		ls.resize(n << 5);
		rs.resize(n << 5);
		rt.resize(n << 5);
        val.resize(n << 5);
    }
    PST(vector<int>& init_) {
        tot = 0;
        id = init_.size();
        n = id;
		ls.resize(n << 5);
		rs.resize(n << 5);
		rt.resize(id + 1);
        val.assign(n << 5, -1);
        build(rt[id], 0, n);
        for (int i = id; i >= 1; i--) {
            add(rt[i - 1], rt[i], 0, n, init_[i - 1], i);
        }
    }

    void build(int& now, int l, int r) {
        now = ++tot;
        if (l == r) {
            val[now] == -1;
            return;
        }
        int mid = l + r >> 1;
        build(ls[now], l, mid);
        build(rs[now], mid + 1, r);
    }
    
    int add(int& now, int last, int l, int r, int pos, int v) {
        now = ++tot;
        ls[now] = ls[last];
        rs[now] = rs[last];
        val[now] = val[last];
        if (l == r) {
            val[now] = v;
            return now;
        }
        int mid = l + r >> 1;
        if (pos <= mid) add(ls[now], ls[last], l, mid, pos, v);
        else add(rs[now], rs[last], mid + 1, r, pos, v);
        return now;
    }
    
    int query(int now, int l, int r, int pos) {
        if (l == r) {
            return val[now];
        }
        int mid = l + r >> 1;
        if (pos <= mid) return query(ls[now], l, mid, pos);
        else return query(rs[now], mid + 1, r, pos);
    }

    int query(int now, int pos) {
        return query(rt[now], 0, n, pos);
    }
};
```

## 2.6 数值与数学封装

### 2.6.1 Modint（取模类）

```cpp
template<class T>
constexpr T power(T a, u64 b, T res = 1) {
    for (; b != 0; b /= 2, a *= a) {
        if (b & 1) {
            res *= a;
        }
    }
    return res;
}
 
template<u32 P>
constexpr u32 mulMod(u32 a, u32 b) {
    return u64(a) * b % P;
}
 
template<u64 P>
constexpr u64 mulMod(u64 a, u64 b) {
    u64 res = a * b - u64(1.L * a * b / P - 0.5L) * P;
    res %= P;
    return res;
}
 
constexpr i64 safeMod(i64 x, i64 m) {
    x %= m;
    if (x < 0) {
        x += m;
    }
    return x;
}
 
constexpr std::pair<i64, i64> invGcd(i64 a, i64 b) {
    a = safeMod(a, b);
    if (a == 0) {
        return {b, 0};
    }
    
    i64 s = b, t = a;
    i64 m0 = 0, m1 = 1;
 
    while (t) {
        i64 u = s / t;
        s -= t * u;
        m0 -= m1 * u;
        
        std::swap(s, t);
        std::swap(m0, m1);
    }
    
    if (m0 < 0) {
        m0 += b / s;
    }
    
    return {s, m0};
}
 
template<std::unsigned_integral U, U P>
struct ModIntBase {
public:
    constexpr ModIntBase() : x(0) {}
    template<std::unsigned_integral T>
    constexpr ModIntBase(T x_) : x(x_ % mod()) {}
    template<std::signed_integral T>
    constexpr ModIntBase(T x_) {
        using S = std::make_signed_t<U>;
        S v = x_ % S(mod());
        if (v < 0) {
            v += mod();
        }
        x = v;
    }
    
    constexpr static U mod() {
        return P;
    }
    
    constexpr U val() const {
        return x;
    }
    
    constexpr ModIntBase operator-() const {
        ModIntBase res;
        res.x = (x == 0 ? 0 : mod() - x);
        return res;
    }
    
    constexpr ModIntBase inv() const {
        auto v = invGcd(x, mod());
        assert(v.first == 1);
        return v.second;
    }
    
    constexpr ModIntBase &operator*=(const ModIntBase &rhs) & {
        x = mulMod<mod()>(x, rhs.val());
        return *this;
    }
    constexpr ModIntBase &operator+=(const ModIntBase &rhs) & {
        x += rhs.val();
        if (x >= mod()) {
            x -= mod();
        }
        return *this;
    }
    constexpr ModIntBase &operator-=(const ModIntBase &rhs) & {
        x -= rhs.val();
        if (x >= mod()) {
            x += mod();
        }
        return *this;
    }
    constexpr ModIntBase &operator/=(const ModIntBase &rhs) & {
        return *this *= rhs.inv();
    }
    
    friend constexpr ModIntBase operator*(ModIntBase lhs, const ModIntBase &rhs) {
        lhs *= rhs;
        return lhs;
    }
    friend constexpr ModIntBase operator+(ModIntBase lhs, const ModIntBase &rhs) {
        lhs += rhs;
        return lhs;
    }
    friend constexpr ModIntBase operator-(ModIntBase lhs, const ModIntBase &rhs) {
        lhs -= rhs;
        return lhs;
    }
    friend constexpr ModIntBase operator/(ModIntBase lhs, const ModIntBase &rhs) {
        lhs /= rhs;
        return lhs;
    }
    
    friend constexpr std::istream &operator>>(std::istream &is, ModIntBase &a) {
        i64 i;
        is >> i;
        a = i;
        return is;
    }
    friend constexpr std::ostream &operator<<(std::ostream &os, const ModIntBase &a) {
        return os << a.val();
    }
    
    friend constexpr bool operator==(const ModIntBase &lhs, const ModIntBase &rhs) {
        return lhs.val() == rhs.val();
    }
    friend constexpr std::strong_ordering operator<=>(const ModIntBase &lhs, const ModIntBase &rhs) {
        return lhs.val() <=> rhs.val();
    }
    
private:
    U x;
};
 
template<u32 P>
using ModInt = ModIntBase<u32, P>;
template<u64 P>
using ModInt64 = ModIntBase<u64, P>;
 
struct Barrett {
public:
    Barrett(u32 m_) : m(m_), im((u64)(-1) / m_ + 1) {}
 
    constexpr u32 mod() const {
        return m;
    }
 
    constexpr u32 mul(u32 a, u32 b) const {
        u64 z = a;
        z *= b;
        
        u64 x = u64((u128(z) * im) >> 64);
        
        u32 v = u32(z - x * m);
        if (m <= v) {
            v += m;
        }
        return v;
    }
 
private:
    u32 m;
    u64 im;
};
 
template<u32 Id>
struct DynModInt {
public:
    constexpr DynModInt() : x(0) {}
    template<std::unsigned_integral T>
    constexpr DynModInt(T x_) : x(x_ % mod()) {}
    template<std::signed_integral T>
    constexpr DynModInt(T x_) {
        int v = x_ % int(mod());
        if (v < 0) {
            v += mod();
        }
        x = v;
    }
    
    constexpr static void setMod(u32 m) {
        bt = m;
    }
    
    static u32 mod() {
        return bt.mod();
    }
    
    constexpr u32 val() const {
        return x;
    }
    
    constexpr DynModInt operator-() const {
        DynModInt res;
        res.x = (x == 0 ? 0 : mod() - x);
        return res;
    }
    
    constexpr DynModInt inv() const {
        auto v = invGcd(x, mod());
        assert(v.first == 1);
        return v.second;
    }
    
    constexpr DynModInt &operator*=(const DynModInt &rhs) & {
        x = bt.mul(x, rhs.val());
        return *this;
    }
    constexpr DynModInt &operator+=(const DynModInt &rhs) & {
        x += rhs.val();
        if (x >= mod()) {
            x -= mod();
        }
        return *this;
    }
    constexpr DynModInt &operator-=(const DynModInt &rhs) & {
        x -= rhs.val();
        if (x >= mod()) {
            x += mod();
        }
        return *this;
    }
    constexpr DynModInt &operator/=(const DynModInt &rhs) & {
        return *this *= rhs.inv();
    }
    
    friend constexpr DynModInt operator*(DynModInt lhs, const DynModInt &rhs) {
        lhs *= rhs;
        return lhs;
    }
    friend constexpr DynModInt operator+(DynModInt lhs, const DynModInt &rhs) {
        lhs += rhs;
        return lhs;
    }
    friend constexpr DynModInt operator-(DynModInt lhs, const DynModInt &rhs) {
        lhs -= rhs;
        return lhs;
    }
    friend constexpr DynModInt operator/(DynModInt lhs, const DynModInt &rhs) {
        lhs /= rhs;
        return lhs;
    }
    
    friend constexpr std::istream &operator>>(std::istream &is, DynModInt &a) {
        i64 i;
        is >> i;
        a = i;
        return is;
    }
    friend constexpr std::ostream &operator<<(std::ostream &os, const DynModInt &a) {
        return os << a.val();
    }
    
    friend constexpr bool operator==(const DynModInt &lhs, const DynModInt &rhs) {
        return lhs.val() == rhs.val();
    }
    friend constexpr std::strong_ordering operator<=>(const DynModInt &lhs, const DynModInt &rhs) {
        return lhs.val() <=> rhs.val();
    }
    
private:
    u32 x;
    static Barrett bt;
};
 
template<u32 Id>
Barrett DynModInt<Id>::bt = 998244353;
 
const int P = 1e9 + 7;
using Z = ModInt<P>;
```

### 2.6.2 Fraction（分数类）

```cpp
template<class T>	
struct Frac {
    T num;
    T den;
    Frac(T num_, T den_) : num(num_), den(den_) {
        if (den < 0) {
            den = -den;
            num = -num;
        }
    }
    Frac() : Frac(0, 1) {}
    Frac(T num_) : Frac(num_, 1) {}
    explicit operator double() const {
        return 1. * num / den;
    }
    Frac &operator+=(const Frac &rhs) {
        num = num * rhs.den + rhs.num * den;
        den *= rhs.den;
        return *this;
    }
    Frac &operator-=(const Frac &rhs) {
        num = num * rhs.den - rhs.num * den;
        den *= rhs.den;
        return *this;
    }
    Frac &operator*=(const Frac &rhs) {
        num *= rhs.num;
        den *= rhs.den;
        return *this;
    }
    Frac &operator/=(const Frac &rhs) {
        num *= rhs.den;
        den *= rhs.num;
        if (den < 0) {
            num = -num;
            den = -den;
        }
        return *this;
    }
    friend Frac operator+(Frac lhs, const Frac &rhs) {
        return lhs += rhs;
    }
    friend Frac operator-(Frac lhs, const Frac &rhs) {
        return lhs -= rhs;
    }
    friend Frac operator*(Frac lhs, const Frac &rhs) {
        return lhs *= rhs;
    }
    friend Frac operator/(Frac lhs, const Frac &rhs) {
        return lhs /= rhs;
    }
    friend Frac operator-(const Frac &a) {
        return Frac(-a.num, a.den);
    }
    friend bool operator==(const Frac &lhs, const Frac &rhs) {
        return lhs.num * rhs.den == rhs.num * lhs.den;
    }
    friend bool operator!=(const Frac &lhs, const Frac &rhs) {
        return lhs.num * rhs.den != rhs.num * lhs.den;
    }
    friend bool operator<(const Frac &lhs, const Frac &rhs) {
        return lhs.num * rhs.den < rhs.num * lhs.den;
    }
    friend bool operator>(const Frac &lhs, const Frac &rhs) {
        return lhs.num * rhs.den > rhs.num * lhs.den;
    }
    friend bool operator<=(const Frac &lhs, const Frac &rhs) {
        return lhs.num * rhs.den <= rhs.num * lhs.den;
    }
    friend bool operator>=(const Frac &lhs, const Frac &rhs) {
        return lhs.num * rhs.den >= rhs.num * lhs.den;
    }
    friend std::ostream &operator<<(std::ostream &os, Frac x) {
        T g = std::gcd(x.num, x.den);
        if (x.den == g) {
            return os << x.num / g;
        } else {
            return os << x.num / g << "/" << x.den / g;
        }
    }
};
```

### 2.6.3 Bigint（高精度）

```cpp
constexpr int N = 1000;

struct BigInt {
    int a[N];
    BigInt(int x = 0) : a{} {
        for (int i = 0; x; i++) {
            a[i] = x % 10;
            x /= 10;
        }
    }
    BigInt &operator*=(int x) {
        for (int i = 0; i < N; i++) {
            a[i] *= x;
        }
        for (int i = 0; i < N - 1; i++) {
            a[i + 1] += a[i] / 10;
            a[i] %= 10;
        }
        return *this;
    }
    BigInt &operator/=(int x) {
        for (int i = N - 1; i >= 0; i--) {
            if (i) {
                a[i - 1] += a[i] % x * 10;
            }
            a[i] /= x;
        }
        return *this;
    }
    BigInt &operator+=(const BigInt &x) {
        for (int i = 0; i < N; i++) {
            a[i] += x.a[i];
            if (a[i] >= 10) {
                a[i + 1] += 1;
                a[i] -= 10;
            }
        }
        return *this;
    }
};

std::ostream &operator<<(std::ostream &o, const BigInt &a) {
    int t = N - 1;
    while (a.a[t] == 0) {
        t--;
    }
    for (int i = t; i >= 0; i--) {
        o << a.a[i];
    }
    return o;
}
```

# 3. 图论

## 3.1 连通性

### 3.1.1 SCC（强联通分量）

用于求解一张图的强联通分量，用tarjan求解

```c++
struct SCC{
    int n;
    std::vector<std::vector<int>> adj;
    std::vector<int> stk;
    std::vector<int> dfn, low, bel;
    int cur, cnt;

    SCC(){}
    SCC(int n) {
        init(n);
    }

    void init(int n) {
        this->n = n;
        adj.assign(n, {});
        dfn.assign(n, -1);
        low.resize(n);
        bel.assign(n, -1);
        stk.clear();
        cur = cnt = 0;
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
    }

    void dfs(int x) {
        dfn[x] = low[x] = cur++;
        stk.push_back(x);

        for (auto y : adj[x]) {
            if (dfn[y] == -1) {
                dfs(y);
                low[x] = std::min(low[x], low[y]);
            }
            else if (bel[y] == -1) {
                low[x] = std::min(low[x], low[y]);
            }
        }

        if (dfn[x] == low[x]) {
            int y;
            do {
                y = stk.back();
                bel[y] = cnt;
                stk.pop_back();
            }
            while (y != x);
            cnt++;
        }
    }

    std::vector<int> work() {
        for (int i = 0; i < n; i++) {
            if (dfn[i] == -1) {
                dfs(i);
            }
        }

        return bel;
    }
};
```

### 3.1.2 EBCC（边双连通分量）

每一个联通分量无割边，依旧采用tarjan求解。

```cpp
std::set<std::pair<int, int>> E;

struct EBCC {
    int n;
    std::vector<std::vector<pii>> adj;
    std::vector<int> stk;
    std::vector<int> dfn, low, bel;
    int cur, cnt, eid;
    
    EBCC() {}
    EBCC(int n) {
        init(n);
    }
    
    void init(int n) {
        this->n = n;
        adj.assign(n, {});
        dfn.assign(n, -1);
        low.resize(n);
        bel.assign(n, -1);
        stk.clear();
        cur = cnt = eid = 0;
    }
    
    void addEdge(int u, int v) {
        adj[u].push_back({v, ++eid});
        adj[v].push_back({u, eid});
    }
    
    void dfs(int x, int pid) {
        dfn[x] = low[x] = cur++;
        stk.push_back(x);
        
        for (auto [y, id] : adj[x]) {
            if (id == pid) {
                continue;
            }
            if (dfn[y] == -1) {
                E.emplace(x, y);
                dfs(y, id);
                low[x] = std::min(low[x], low[y]);
            } else if (bel[y] == -1 && dfn[y] < dfn[x]) {
                E.emplace(x, y);
                low[x] = std::min(low[x], dfn[y]);
            }
        }
        
        if (dfn[x] == low[x]) {
            int y;
            do {
                y = stk.back();
                bel[y] = cnt;
                stk.pop_back();
            } while (y != x);
            cnt++;
        }
    }
    
    std::vector<int> work() {
        for (int i = 0; i < n; i++) {
            if (dfn[i] == -1) {
                dfs(i, -1);
            }
        }
        return bel;
    }
    
    struct Graph {
        int n;
        std::vector<std::pair<int, int>> edges;
        std::vector<int> siz;
        std::vector<int> cnte;
    };
    Graph compress() {
        Graph g;
        g.n = cnt;
        g.siz.resize(cnt);
        g.cnte.resize(cnt);
        for (int i = 0; i < n; i++) {
            g.siz[bel[i]]++;
            for (auto [j, id] : adj[i]) {
                if (bel[i] < bel[j]) {
                    g.edges.emplace_back(bel[i], bel[j]);
                } else if (i < j) {
                    g.cnte[bel[i]]++;
                }
            }
        }
        return g;
    }
};
```

### 3.1.3 VBCC（点双连通分量）

点双连通分量：图中任意两不同点之间都有至少两条点不重复的路径

一个点双分量中：两点之间的简单路径的并集，恰好完全等于这个点双。

```cpp
struct VBCC {
    int n;
    std::vector<std::vector<int>> adj, bel;
    std::vector<int> stk;
    std::vector<int> dfn, low;
    int cur, cnt;

    VBCC() {}
    VBCC(int n) {
        init(n);
    }

    void init(int n) {
        this->n = n;
        adj.assign(n, {});
        dfn.assign(n, -1);
        low.resize(n);
        bel.assign(n, {});
        stk.clear();
        cur = cnt = 0;
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void dfs(int x, int p) {
        dfn[x] = low[x] = ++cur;
        stk.push_back(x);
        int son = 0;

        for (int v : adj[x]) {
            if (v == p) continue;
            if (dfn[v] == -1) {
                son++;
                dfs(v, x);
                low[x] = min(low[x], low[v]);
                
                if (low[v] >= dfn[x]) {
                    vector<int> bcc;
                    int y;
                    do {
                        y = stk.back();
                        stk.pop_back();
                        bel[y].push_back(cnt);
                    } while (y != v);
                    bel[x].push_back(cnt);
                    cnt++;
                }
            }
            else {
                low[x] = min(low[x], dfn[v]);
            }
        }

        if (p == -1 && son == 0) {
            bel[x].push_back(cnt);
            cnt++;
        }
    }

    std::vector<vector<int>> work() {
        for (int i = 0; i < n; i++) {
            if (dfn[i] == -1) {
                dfs(i, -1);
            }
        }
        
        return bel;
    }
};
```

### 3.1.4 Block-Cut Tree（圆方树）

原图中的点用圆点表示，点（边）双连通分量用方点表示，每个点（边）双向包含的圆点连边。

一些性质：在点双圆方树上，度大于2的点是割点。

```c++
void solve(){
    int n, m;
    cin >> n >> m;
    VBCC vbcc(n);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        u--, v--;
        vbcc.addEdge(u, v);
    }

    auto bel = vbcc.work();
    vector<vector<int>> adj(n + vbcc.cnt);
    vector<int> in(n, 0);
    for (int i = 0; i < n; i++) {
        for (int v : bel[i]) {
            adj[i].push_back(v + n);
            adj[v + n].push_back(i);
            in[i]++;
        }
    }
}
```

## 3.2 生成树

### 3.2.1 Boruvka （最小生成树）

开始时每个点都是一个单独联通块，循环，每次找到每个联通块能与其他联通块相连的最小的边，再合并。

时间复杂度 $O(Elog V)$ 但可以在找边的过程中尝试优化（如异或可用Trie尝试优化），不用找所有边。

参考代码结构

```c++
ll Boruvka(int n, vector<int>& a) {
    ll ans = 0;
    DSU dsu(n);
    bool ok = 1;
    init();
    for (int i = 0; i < n; i++) {
        add(a[i], i);
    }
    vector<int> tok(n, -1);
    int t = 0;
    while (ok) {
        ok = 0;
        for (int i = tot; i >= 0; i--) {
            upd(i);
        }
        vector<ll> best(n, inf);
    
        for (int i = 0; i < n; i++) {
            int o = 1, res = 0;
            for (int j = 29; j >= 0; j--) {
                if (trie[o][(a[i] >> j) & 1] && col[trie[o][(a[i] >> j) & 1]] != dsu.find(i)) {
                    o = trie[o][(a[i] >> j) & 1];
                }
                else {
                    res += 1 << j;
                    o = trie[o][((a[i] >> j) & 1) ^ 1];
                }
            }

            if (best[dsu.find(i)] > res) {
                best[dsu.find(i)] = res;
                tok[dsu.find(i)] = col[o];
            }
        }

        for (int i = 0; i < n; i++) {
            if (dsu.find(i) == i) {
                if (best[i] == inf) continue;
                if (dsu.find(i) == dsu.find(tok[i])) continue;
                ans += best[i];
                dsu.merge(i, tok[i]);
                ok = 1;
            }
        }
    }

    return ans;
}
```

### 3.2.2 prufer序列

线性转化树和prefer序列，时间复杂度 $O(n)$ 

```c++
vector<int> get_prefer(vector<int>& f, int rt = 0) {
    int n = f.size();
    vector<int> in(n, 0);
    vector<int> p(n - 2);
    for (int i = 0; i < n; i++) {
        if (rt == i) continue;
        in[f[i]]++;
    }

    for (int i = 0, j = 0; i < n - 2; i++, j++) {
        while (in[j]) j++;
        p[i] = f[j];
        while (i < n - 3 && !(--in[p[i]]) && p[i] < j) {
            p[i + 1] = f[p[i]];
            i++;
        }
    }

    return p;
}

vector<int> get_tree(vector<int>& p, int rt = 0) {
    int n = p.size() + 2;
    p.push_back(rt);
    vector<int> f(n, -1), in(n, 0);
    for (int i = 0; i < n - 2; i++) {
        in[p[i]]++;
    }

    for (int i = 0, j = 0; i < n - 1; i++, j++) {
        while (in[j]) j++;
        f[j] = p[i];
        while (i < n - 1 && !(--in[p[i]]) && p[i] < j) {
            f[p[i]] = p[i + 1], ++i;
        }
    }

    return f;
}
```

## 3.3 匹配

### 3.3.1 HopcroftKarp（二分图最大匹配 ）

```c++
struct HopcroftKarp {
    vector<vector<int>> g;
    vector<int> pa, pb, vis;
    int n, m, dfn, res;

    HopcroftKarp(int _n, int _m) : n(_n + 1), m(_m + 1) {
        assert(0 <= n && 0 <= m);
        pa.assign(n, -1);
        pb.assign(m, -1);
        vis.resize(n);
        g.resize(n);
        res = 0;
        dfn = 0;
    }
    void add(int x, int y) {
        assert(0 <= x && x < n && 0 <= y && y < m);
        g[x].push_back(y);
    }
    bool dfs(int v) {
        vis[v] = dfn;
        for (int u : g[v]) {
            if (pb[u] == -1) {
                pb[u] = v;
                pa[v] = u;
                return true;
            }
        }
        for (int u : g[v]) {
            if (vis[pb[u]] != dfn && dfs(pb[u])) {
                pa[v] = u;
                pb[u] = v;
                return true;
            }
        }
        return false;
    }
    int work() {
        while (1) {
            dfn++;
            int cnt = 0;
            for (int i = 0; i < n; i++) {
                if (pa[i] == -1 && dfs(i)) {
                    cnt++;
                }
            }
            if (cnt == 0) break;
            res += cnt;
        }
        return res;
    }
};
signed main() {
    int n1, n2, m;
    cin >> n1 >> n2 >> m;
    HopcroftKarp flow(n1, n2);
    while (m--) {
        int x, y;
        cin >> x >> y;
        flow.add(x, y);
    }
    cout << flow.work() << endl;
}
```

### 3.3.2 Graph（一般图最大匹配 + 带花树算法）

```cpp
struct Graph {
    int n;
    std::vector<std::vector<int>> e;
    Graph(int n) : n(n), e(n) {}
    void addEdge(int u, int v) {
        e[u].push_back(v);
        e[v].push_back(u);
    }
    std::vector<int> findMatching() {
        std::vector<int> match(n, -1), vis(n), link(n), f(n), dep(n);
        
        // disjoint set union
        auto find = [&](int u) {
            while (f[u] != u)
                u = f[u] = f[f[u]];
            return u;
        };
        
        auto lca = [&](int u, int v) {
            u = find(u);
            v = find(v);
            while (u != v) {
                if (dep[u] < dep[v])
                    std::swap(u, v);
                u = find(link[match[u]]);
            }
            return u;
        };
        
        std::queue<int> que;
        auto blossom = [&](int u, int v, int p) {
            while (find(u) != p) {
                link[u] = v;
                v = match[u];
                if (vis[v] == 0) {
                    vis[v] = 1;
                    que.push(v);
                }
                f[u] = f[v] = p;
                u = link[v];
            }
        };
        
        // find an augmenting path starting from u and augment (if exist)
        auto augment = [&](int u) {
            
            while (!que.empty())
                que.pop();
            
            std::iota(f.begin(), f.end(), 0);
            
            // vis = 0 corresponds to inner vertices, vis = 1 corresponds to outer vertices
            std::fill(vis.begin(), vis.end(), -1);
            
            que.push(u);
            vis[u] = 1;
            dep[u] = 0;
            
            while (!que.empty()){
                int u = que.front();
                que.pop();
                for (auto v : e[u]) {
                    if (vis[v] == -1) {
                        
                        vis[v] = 0;
                        link[v] = u;
                        dep[v] = dep[u] + 1;
                        
                        // found an augmenting path
                        if (match[v] == -1) {
                            for (int x = v, y = u, temp; y != -1; x = temp, y = x == -1 ? -1 : link[x]) {
                                temp = match[y];
                                match[x] = y;
                                match[y] = x;
                            }
                            return;
                        }
                        
                        vis[match[v]] = 1;
                        dep[match[v]] = dep[u] + 2;
                        que.push(match[v]);
                        
                    } else if (vis[v] == 1 && find(v) != find(u)) {
                        // found a blossom
                        int p = lca(u, v);
                        blossom(u, v, p);
                        blossom(v, u, p);
                    }
                }
            }
            
        };
        
        // find a maximal matching greedily (decrease constant)
        auto greedy = [&]() {
            
            for (int u = 0; u < n; ++u) {
                if (match[u] != -1)
                    continue;
                for (auto v : e[u]) {
                    if (match[v] == -1) {
                        match[u] = v;
                        match[v] = u;
                        break;
                    }
                }
            }
        };
        
        greedy();
        
        for (int u = 0; u < n; ++u)
            if (match[u] == -1)
                augment(u);
        
        return match;
    }
};
```

## 3.4 网络流与割

### 3.4.1 MaxFlow（最大流）

```cpp
constexpr int inf = 1E9;
template<class T>
struct MaxFlow {
    struct _Edge {
        int to;
        T cap;
        _Edge(int to, T cap) : to(to), cap(cap) {}
    };
    
    int n;
    std::vector<_Edge> e;
    std::vector<std::vector<int>> g;
    std::vector<int> cur, h;
    
    MaxFlow() {}
    MaxFlow(int n) {
        init(n);
    }
    
    void init(int n) {
        this->n = n;
        e.clear();
        g.assign(n, {});
        cur.resize(n);
        h.resize(n);
    }
    
    bool bfs(int s, int t) {
        h.assign(n, -1);
        std::queue<int> que;
        h[s] = 0;
        que.push(s);
        while (!que.empty()) {
            const int u = que.front();
            que.pop();
            for (int i : g[u]) {
                auto [v, c] = e[i];
                if (c > 0 && h[v] == -1) {
                    h[v] = h[u] + 1;
                    if (v == t) {
                        return true;
                    }
                    que.push(v);
                }
            }
        }
        return false;
    }
    
    T dfs(int u, int t, T f) {
        if (u == t) {
            return f;
        }
        auto r = f;
        for (int &i = cur[u]; i < int(g[u].size()); ++i) {
            const int j = g[u][i];
            auto [v, c] = e[j];
            if (c > 0 && h[v] == h[u] + 1) {
                auto a = dfs(v, t, std::min(r, c));
                e[j].cap -= a;
                e[j ^ 1].cap += a;
                r -= a;
                if (r == 0) {
                    return f;
                }
            }
        }
        return f - r;
    }
    void addEdge(int u, int v, T c) {
        g[u].push_back(e.size());
        e.emplace_back(v, c);
        g[v].push_back(e.size());
        e.emplace_back(u, 0);
    }
    T flow(int s, int t) {
        T ans = 0;
        while (bfs(s, t)) {
            cur.assign(n, 0);
            ans += dfs(s, t, std::numeric_limits<T>::max());
        }
        return ans;
    }
    
    std::vector<bool> minCut() {
        std::vector<bool> c(n);
        for (int i = 0; i < n; i++) {
            c[i] = (h[i] != -1);
        }
        return c;
    }
    
    struct Edge {
        int from;
        int to;
        T cap;
        T flow;
    };
    std::vector<Edge> edges() {
        std::vector<Edge> a;
        for (int i = 0; i < e.size(); i += 2) {
            Edge x;
            x.from = e[i + 1].to;
            x.to = e[i].to;
            x.cap = e[i].cap + e[i + 1].cap;
            x.flow = e[i + 1].cap;
            a.push_back(x);
        }
        return a;
    }
};
```

### 3.4.2 MinCostFlow（最小费用最大流）

```cpp
template<class T>
struct MinCostFlow {
    struct _Edge {
        int to;
        T cap;
        T cost;
        _Edge(int to_, T cap_, T cost_) : to(to_), cap(cap_), cost(cost_) {}
    };
    int n;
    std::vector<_Edge> e;
    std::vector<std::vector<int>> g;
    std::vector<T> h, dis;
    std::vector<int> pre;
    bool dijkstra(int s, int t) {
        dis.assign(n, std::numeric_limits<T>::max());
        pre.assign(n, -1);
        std::priority_queue<std::pair<T, int>, std::vector<std::pair<T, int>>, std::greater<std::pair<T, int>>> que;
        dis[s] = 0;
        que.emplace(0, s);
        while (!que.empty()) {
            T d = que.top().first;
            int u = que.top().second;
            que.pop();
            if (dis[u] != d) {
                continue;
            }
            for (int i : g[u]) {
                int v = e[i].to;
                T cap = e[i].cap;
                T cost = e[i].cost;
                if (cap > 0 && dis[v] > d + h[u] - h[v] + cost) {
                    dis[v] = d + h[u] - h[v] + cost;
                    pre[v] = i;
                    que.emplace(dis[v], v);
                }
            }
        }
        return dis[t] != std::numeric_limits<T>::max();
    }
    MinCostFlow() {}
    MinCostFlow(int n_) {
        init(n_);
    }
    void init(int n_) {
        n = n_;
        e.clear();
        g.assign(n, {});
    }
    void addEdge(int u, int v, T cap, T cost) {
        g[u].push_back(e.size());
        e.emplace_back(v, cap, cost);
        g[v].push_back(e.size());
        e.emplace_back(u, 0, -cost);
    }
    std::pair<T, T> flow(int s, int t) {
        T flow = 0;
        T cost = 0;
        h.assign(n, 0);
        while (dijkstra(s, t)) {
            for (int i = 0; i < n; ++i) {
                h[i] += dis[i];
            }
            T aug = std::numeric_limits<int>::max();
            for (int i = t; i != s; i = e[pre[i] ^ 1].to) {
                aug = std::min(aug, e[pre[i]].cap);
            }
            for (int i = t; i != s; i = e[pre[i] ^ 1].to) {
                e[pre[i]].cap -= aug;
                e[pre[i] ^ 1].cap += aug;
            }
            flow += aug;
            cost += aug * h[t];
        }
        return std::make_pair(flow, cost);
    }
    struct Edge {
        int from;
        int to;
        T cap;
        T cost;
        T flow;
    };
    std::vector<Edge> edges() {
        std::vector<Edge> a;
        for (int i = 0; i < e.size(); i += 2) {
            Edge x;
            x.from = e[i + 1].to;
            x.to = e[i].to;
            x.cap = e[i].cap + e[i + 1].cap;
            x.cost = e[i].cost;
            x.flow = e[i + 1].cap;
            a.push_back(x);
        }
        return a;
    }
};
```

### 3.4.3 Stoer_Wagner（无向图最小割）

```c++
struct Stoer_Wagner {
    int n;
    vector<vector<ll>> g;
    vector<int> vis1, vis2;
    vector<ll> w;
    Stoer_Wagner(){}
    Stoer_Wagner(int n_) {
        n = n_;
        g.assign(n, vector<ll>(n, 0));
        vis1.assign(n, 0);
        vis2.assign(n, 0);
        w.assign(n, 0);
    }

    void addEdge(int u, int v, ll val) {
        g[u][v] += val;
        g[v][u] += val;
    }

    ll work() {
        ll ans = LLONG_MAX;
        for (int i = 0; i < n - 1; i++) {
            int s = 0, t = 0;
            for (int i = 0; i < n; i++) {
                w[i] = 0;
                vis2[i] = 0;
            }
            for (int j = 0; j < n - i; j++) {
                int now = -1;
                for (int k = 0; k < n; k++) {
                    if (!vis1[k] && !vis2[k] && (now == -1 || w[k] > w[now])) now = k;
                }
                s = t, t = now;
                vis2[now] = 1;
                for (int k = 0; k < n; k++) {
                    w[k] += g[k][now];
                }
            }
            ans = min(ans, w[t]);
            vis1[t] = 1;
            for (int j = 0; j < n; j++) {
                if (j != s) {
                    g[s][j] += g[t][j], g[j][s] += g[j][t];
                }
            }
        }

        return ans;
    }
};
```

### 3.4.4 Flow(浮点应用)

```cpp
template<class T>
struct Flow {
    const int n;
    struct Edge {
        int to;
        T cap;
        Edge(int to, T cap) : to(to), cap(cap) {}
    };
    std::vector<Edge> e;
    std::vector<std::vector<int>> g;
    std::vector<int> cur, h;
    Flow(int n) : n(n), g(n) {}
    
    bool bfs(int s, int t) {
        h.assign(n, -1);
        std::queue<int> que;
        h[s] = 0;
        que.push(s);
        while (!que.empty()) {
            const int u = que.front();
            que.pop();
            for (int i : g[u]) {
                auto [v, c] = e[i];
                if (c > 0 && h[v] == -1) {
                    h[v] = h[u] + 1;
                    if (v == t) {
                        return true;
                    }
                    que.push(v);
                }
            }
        }
        return false;
    }
    
    T dfs(int u, int t, T f) {
        if (u == t) {
            return f;
        }
        auto r = f;
        double res = 0;
        for (int &i = cur[u]; i < int(g[u].size()); ++i) {
            const int j = g[u][i];
            auto [v, c] = e[j];
            if (c > 0 && h[v] == h[u] + 1) {
                auto a = dfs(v, t, std::min(r, c));
                res += a;
                e[j].cap -= a;
                e[j ^ 1].cap += a;
                r -= a;
                if (r == 0) {
                    return f;
                }
            }
        }
        return res;
    }
    void addEdge(int u, int v, T c) {
        g[u].push_back(e.size());
        e.emplace_back(v, c);
        g[v].push_back(e.size());
        e.emplace_back(u, 0);
    }
    T maxFlow(int s, int t) {
        T ans = 0;
        while (bfs(s, t)) {
            cur.assign(n, 0);
            ans += dfs(s, t, 1E100);
        }
        return ans;
    }
};
```

## 3.5 树与其他

### 3.5.1 LCA （倍增）

```c++
int n, m;
cin >> n >> m;
vector<vector<int>> fa(n, vector<int>(21)), cost(n, vector<int>(21));
vector<int> dep(n);
vector<vector<int>> adj(n);
for (int i = 0; i < n - 1; i++) {
    int u, v;
    u--, v--;
    adj[u].push_back(v);
    adj[v].push_back(u);
}

auto dfs = [&](this auto&& dfs, int u, int p) -> void {
    fa[u][0] = p;
    dep[p] = dep[fa[u][0]] + 1;

    for (int i = 1; i <= 20; i++) {
        fa[u][i] = fa[fa[u][i - 1]][i - 1];
        cost[u][i] = cost[fa[u][i - 1]][i - 1] + cost[u][i - 1];
    }

    for (auto v : adj[u]) {
        if (v == p) continue;
        dfs(v, u);
    }
};

dep[0] = -1;
dfs(0, 0);
```

### 3.5.2 HLD（树链剖分）

trick：查询p是否在s，t的路径上等价于LCA(p, LCA(s, t) = LCA(s, t)，且 LCA(p, s) = p 或 LCA(p, t) = p

```cpp
struct HLD {
    int n;
    std::vector<int> siz, top, dep, parent, in, out, seq;
    std::vector<std::vector<int>> adj;
    int cur;
    
    HLD() {}
    HLD(int n) {
        init(n);
    }
    void init(int n) {
        this->n = n;
        siz.resize(n);
        top.resize(n);
        dep.resize(n);
        parent.resize(n);
        in.resize(n);
        out.resize(n);
        seq.resize(n);
        cur = 0;
        adj.assign(n, {});
    }
    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    void work(int root = 0) {
        top[root] = root;
        dep[root] = 0;
        parent[root] = -1;
        dfs1(root);
        dfs2(root);
    }
    void dfs1(int u) {
        if (parent[u] != -1) {
            adj[u].erase(std::find(adj[u].begin(), adj[u].end(), parent[u]));
        }
        
        siz[u] = 1;
        for (auto &v : adj[u]) {
            parent[v] = u;
            dep[v] = dep[u] + 1;
            dfs1(v);
            siz[u] += siz[v];
            if (siz[v] > siz[adj[u][0]]) {
                std::swap(v, adj[u][0]);
            }
        }
    }
    void dfs2(int u) {
        in[u] = cur++;
        seq[in[u]] = u;
        for (auto v : adj[u]) {
            top[v] = v == adj[u][0] ? top[u] : v;
            dfs2(v);
        }
        out[u] = cur;
    }
    int lca(int u, int v) {
        while (top[u] != top[v]) {
            if (dep[top[u]] > dep[top[v]]) {
                u = parent[top[u]];
            } else {
                v = parent[top[v]];
            }
        }
        return dep[u] < dep[v] ? u : v;
    }
    
    int dist(int u, int v) {
        return dep[u] + dep[v] - 2 * dep[lca(u, v)];
    }
    
    int jump(int u, int k) {
        if (dep[u] < k) {
            return -1;
        }
        
        int d = dep[u] - k;
        
        while (dep[top[u]] > d) {
            u = parent[top[u]];
        }
        
        return seq[in[u] - dep[u] + d];
    }
    
    bool isAncester(int u, int v) {
        return in[u] <= in[v] && in[v] < out[u];
    }
    
    int rootedParent(int u, int v) {
        std::swap(u, v);
        if (u == v) {
            return u;
        }
        if (!isAncester(u, v)) {
            return parent[u];
        }
        auto it = std::upper_bound(adj[u].begin(), adj[u].end(), v, [&](int x, int y) {
            return in[x] < in[y];
        }) - 1;
        return *it;
    }
    
    int rootedSize(int u, int v) {
        if (u == v) {
            return n;
        }
        if (!isAncester(v, u)) {
            return siz[v];
        }
        return n - siz[rootedParent(u, v)];
    }
    
    int rootedLca(int a, int b, int c) {
        return lca(a, b) ^ lca(b, c) ^ lca(c, a);
    }
};
```

### 3.5.3 虚树

虚树是一种用于优化树形动态规划的技巧，核心思想是：**只保留关键节点（询问节点）及其两两之间的LCA，构建一棵节点数远少于原树的压缩树**。

```c++
auto build = [&](vector<int>& nodes) {
        sort(all(nodes), [&](int x, int y) {
            return dfn[x] < dfn[y];
        });
    
        vector<int> stk;
        adjvt[0].clear();
        stk.push_back(0);
        int len = 1;
    
        for (int j = 0; j < nodes.size(); j++) {
            int l = lca(stk[len - 1], nodes[j]);
            if (l != stk[len - 1]) {
                while (dfn[stk[len - 2]] > dfn[l]) {
                    adjvt[stk[len - 2]].push_back(stk[len - 1]);
                    stk.pop_back();
                    len--;
                }
    
                if (stk[len - 2] != l) {
                    adjvt[l].clear();
                    adjvt[l].push_back(stk[len - 1]);
                    stk.pop_back();
                    stk.push_back(l);
                }
                else {
                    adjvt[stk[len - 2]].push_back(stk[len - 1]);
                    stk.pop_back();
                    len--;
                }
            }
    
            adjvt[nodes[j]].clear();
            stk.push_back(nodes[j]);
            len++;
        }
    
        while (stk.size() > 1) {
            adjvt[stk[len - 2]].push_back(stk[len - 1]);
            stk.pop_back();
            len--;
        }
    };
```

### 3.5.4 LCT（动态树）

```c++
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
```

### 3.5.5 TwoSat（2-SAT）

使用SCC来求解，通过是否在同一个强联通分量确定是否有解

```cpp
struct TwoSat {
    int n;
    std::vector<std::vector<int>> e;
    std::vector<bool> ans;
    TwoSat(int n) : n(n), e(2 * n), ans(n) {}
    void addClause(int u, bool f, int v, bool g) {
        e[2 * u + !f].push_back(2 * v + g);
        e[2 * v + !g].push_back(2 * u + f);
    }
    bool satisfiable() {
        std::vector<int> id(2 * n, -1), dfn(2 * n, -1), low(2 * n, -1);
        std::vector<int> stk;
        int now = 0, cnt = 0;
        std::function<void(int)> tarjan = [&](int u) {
            stk.push_back(u);
            dfn[u] = low[u] = now++;
            for (auto v : e[u]) {
                if (dfn[v] == -1) {
                    tarjan(v);
                    low[u] = std::min(low[u], low[v]);
                } else if (id[v] == -1) {
                    low[u] = std::min(low[u], dfn[v]);
                }
            }
            if (dfn[u] == low[u]) {
                int v;
                do {
                    v = stk.back();
                    stk.pop_back();
                    id[v] = cnt;
                } while (v != u);
                ++cnt;
            }
        };
        for (int i = 0; i < 2 * n; ++i) if (dfn[i] == -1) tarjan(i);
        for (int i = 0; i < n; ++i) {
            if (id[2 * i] == id[2 * i + 1]) return false;
            ans[i] = id[2 * i] > id[2 * i + 1];
        }
        return true;
    }
    std::vector<bool> answer() { return ans; }
};
```

### 3.5.6 三元环计数问题

考虑将一张无向图转变成DAG，边变为有向，由小度数指向大度数，度数相同由编号小指向编号大。

```cpp
void solve(){
    int n, m;
    cin >> n >> m;
    vector<int> u(m), v(m), in(n, 0);
    for (int i = 0; i < m; i++) {
        cin >> u[i] >> v[i];
        u[i]--, v[i]--;
        in[u[i]]++, in[v[i]]++;
    }
    vector<vector<int>> adj(n);
    for (int i = 0; i < m; i++) {
        if (in[u[i]] > in[v[i]]) swap(u[i], v[i]);
        else if (in[u[i]] == in[v[i]] && u[i] > v[i]) swap(u[i], v[i]);
        adj[u[i]].push_back(v[i]);
    }
    int ans = 0;
    vector<int> vis(n, -1);
    for (int i = 0; i < n; i++) {
        for (auto v : adj[i]) {
            vis[v] = i;
        } 
        for (auto v : adj[i]) {
            for (auto w : adj[v]) {
                if (vis[w] == i) ans++;
            }
        }
    }

    cout << ans << "\n";
}
```

# 4. 字符串

## 4.1 Trie 与自动机

### 4.1.1 Trie（字典树）

```c++
constexpr int N =1e6 + 10;

int trie[N][26];
int val[N];
int tot;

void insert(string s){
	int p=0;
	for(int i = 0;i < s.size(); i++){
		if(trie[p][s[i] - 'a'] != 0){
			p = trie[p][s[i] - 'a'];
		}
		else {
			tot++;
			trie[p][s[i] - 'a'] = tot;
			p = tot;
		}
	}
}

int query(string s){
	int p = 0;
	for(int i = 0;i < s.size(); i++){
		if(trie[p][s[i] - 'a'] != 0){
			p = trie[p][s[i] - 'a'];
		}
		else {
			return 0;
		}
	}
	return p;
}

void clear(){
	for(int i=0;i<=tot;i++){
		for(int j=0;j<26;j++){
			trie[i][j] = 0;
		}
		val[i] = 0;
	}
	return;
}
```

### 4.1.2 01Trie（最大异或对）

```cpp
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
```

### 4.1.3 01Trie（区间最小下标）

```c++
constexpr int N = 1E7;
constexpr int inf = 1E9;
int tot;
int trie[N][2];
int f[N];

int newNode() {
    int x = ++tot;
    trie[x][0] = trie[x][1] = 0;
    f[x] = inf;
    return x;
}

void add(int x, int i) {
    int p = 1;
    for (int j = 29; j >= 0; j--) {
        int &q = trie[p][x >> j & 1];
        if (q == 0) {
            q = newNode();
        }
        p = q;
        f[p] = std::min(f[p], i);
    }
}

int query(int a, int b) {
    int ans1 = inf, ans2 = inf;
    int p = 1;
    for (int i = 29; i >= 0; i--) {
        int d = a >> 1 & 1;
        int e = b >> 1 & 1;
        if (e) {
            ans1 = std::min(ans1, f[trie[p][d]]);
        } else {
            ans2 = std::min(ans2, f[trie[p][d ^ 1]]);
        }
        p = trie[p][e ^ d];
    }
    ans1 = std::min(ans1, f[p]);
    ans2 = std::min(ans2, f[p]);
    if(ans1 == inf || ans2 == inf) {
        return -1;
    }
    return std::max({1, ans1, ans2});
}
```

### 4.1.4 AC自动机

#### 4.1.4.1 数组版

```c++
constexpr int N =1e6 + 10;

int trie[N][26];
int fail[N];
int val[N];
int tot;

void insert(string s){
	int p=0;
	for(int i = 0;i < s.size(); i++){
		if(trie[p][s[i] - 'a'] != 0){
			p = trie[p][s[i] - 'a'];
		}
		else {
			tot++;
			trie[p][s[i] - 'a'] = tot;
			p = tot;
		}
	}
	val[p]++;
}

int query(string s){
	int p = 0;
	for(int i = 0;i < s.size(); i++){
		if(trie[p][s[i] - 'a'] != 0){
			p = trie[p][s[i] - 'a'];
		}
		else {
			return 0;
		}
	}
	return p;
}

void build(){
	queue<int> q;
	for(int i = 0; i < 26; i++){
		if(trie[0][i] != 0){
			q.push(trie[0][i]);
		}
	}
	while(!q.empty()){
		int u = q.front();
		q.pop();
		for(int i = 0; i < 26; i++){
			if(trie[u][i] != 0){
				fail[trie[u][i]] = trie[fail[u]][i];
				q.push(trie[u][i]);
			}
			else {
				trie[u][i] = trie[fail[u]][i];
			}
		}
	}
}

void clear(){
	for(int i=0;i<=tot;i++){
		for(int j=0;j<26;j++){
			trie[i][j] = 0;
		}
		val[i] = 0;
		fail[i] = 0;
	}
	tot = 0;
	return;
}
```

#### 4.1.4.2 结构体版·string

```c++
struct AhoCorasick {
    static constexpr int ALPHABET = 26;
    struct Node {
        int len;
        int link;
        std::array<int, ALPHABET> next;
        Node() : len{0}, link{0}, next{} {}
    };
    
    std::vector<Node> t;
    
    AhoCorasick() {
        init();
    }
    
    void init() {
        t.assign(2, Node());
        t[0].next.fill(1);
        t[0].len = -1;
    }
    
    int newNode() {
        t.emplace_back();
        return t.size() - 1;
    }
    
    int add(const std::string &a) {
        int p = 1;
        for (auto c : a) {
            int x = c - 'a';
            if (t[p].next[x] == 0) {
                t[p].next[x] = newNode();
                t[t[p].next[x]].len = t[p].len + 1;
            }
            p = t[p].next[x];
        }
        return p;
    }
    
    void work() {
        std::queue<int> q;
        q.push(1);
        
        while (!q.empty()) {
            int x = q.front();
            q.pop();
            
            for (int i = 0; i < ALPHABET; i++) {
                if (t[x].next[i] == 0) {
                    t[x].next[i] = t[t[x].link].next[i];
                } else {
                    t[t[x].next[i]].link = t[t[x].link].next[i];
                    q.push(t[x].next[i]);
                }
            }
        }
    }
    
    int next(int p, int x) {
        return t[p].next[x];
    }
    
    int link(int p) {
        return t[p].link;
    }
    
    int len(int p) {
        return t[p].len;
    }
    
    int size() {
        return t.size();
    }
};
```

#### 4.1.4.3 结构体版·vector

``` c++
struct AhoCorasick {
    static constexpr int ALPHABET = 26;
    struct Node {
        int len;
        int link;
        std::array<int, ALPHABET> next;
        Node() : link{}, next{} {}
    };
    
    std::vector<Node> t;
    
    AhoCorasick() {
        init();
    }
    
    void init() {
        t.assign(2, Node());
        t[0].next.fill(1);
        t[0].len = -1;
    }
    
    int newNode() {
        t.emplace_back();
        return t.size() - 1;
    }
    
    int add(const std::vector<int> &a) {
        int p = 1;
        for (auto x : a) {
            if (t[p].next[x] == 0) {
                t[p].next[x] = newNode();
                t[t[p].next[x]].len = t[p].len + 1;
            }
            p = t[p].next[x];
        }
        return p;
    }
    
    int add(const std::string &a, char offset = 'a') {
        std::vector<int> b(a.size());
        for (int i = 0; i < a.size(); i++) {
            b[i] = a[i] - offset;
        }
        return add(b);
    }
    
    void work() {
        std::queue<int> q;
        q.push(1);
        
        while (!q.empty()) {
            int x = q.front();
            q.pop();
            
            for (int i = 0; i < ALPHABET; i++) {
                if (t[x].next[i] == 0) {
                    t[x].next[i] = t[t[x].link].next[i];
                } else {
                    t[t[x].next[i]].link = t[t[x].link].next[i];
                    q.push(t[x].next[i]);
                }
            }
        }
    }
    
    int next(int p, int x) {
        return t[p].next[x];
    }
    
    int next(int p, char c, char offset = 'a') {
        return next(p, c - 'a');
    }
    
    int link(int p) {
        return t[p].link;
    }
    
    int len(int p) {
        return t[p].len;
    }
    
    int size() {
        return t.size();
    }
};
```

### 4.1.5 Fail Tree（失配树）

对一个字符串跑KMP，即可得到一颗有每个节点的父节点的数组，这就是失配树。用与border的处理。

## 4.2 字符串匹配

### 4.2.1 KMP算法

```c++
vector<int> kmp(string& s){
	int n=s.size();
	vector<int> nex(n + 1);
	for(int i = 1, j = 0; i < n; i++){
		while(j && s[i] != s[j]){
			j = nex[j];
		}
		j += (s[i] == s[j]);
		nex[i + 1] = j;
	}
	return nex;
}
```

### 4.2.2 Z函数（拓展KMP）

```c++
vector<int> Z(string s){
	int n = s.size();
	vector<int> z(n + 1);
	z[0] = n;
	int l = 0, r = 0;
	for(int i = 1; i < n; i++){
		z[i] = (i > r)? 0 : min(z[i - l], r - i + 1);
		while(i + z[i] < n && s[i + z[i]] == s[z[i]]) z[i]++;
		if(i + z[i] - 1 > r){
			l = i;
			r = i + z[i] - 1;
		}
	}
	return z;
}
```

### 4.2.3 Manacher（马拉车）

```c++
vector<int> manacher(string s){
    string t = "@#";
    for(int i = 0; i < s.length(); i++){
        t += s[i];
        t += '#';
    }
    int n = t.size() - 1;
    t += '!';
    vector<int> p(n + 1);
    int id, mx = 0;
    for(int i = 1; i <= n; i++){
        if(i < mx){
            p[i] = min(mx - i, p[2 * id - i]);
        }
        else {
            p[i] = 1;
        }
        while(t[i - p[i]] == t[i + p[i]]){
            p[i]++;
        }
        if(mx < i + p[i]){
            mx = i + p[i];
            id = i;
        }
    }
    return p;
}
```

### 4.2.4 最小表示法

```c++
string minstring(string s) {
    int n = s.size();
    int k = 0, i = 0, j = 1;
    while (k < n && i < n && j < n) {
        if (s[(i + k) % n] == s[(j + k) % n]) {
            k++;
        }
        else {
            s[(i + k) % n] > s[(j + k) % n] ? i = i + k + 1 : j = j + k + 1;
            if (i == j) i++;
            k = 0;
        }
    }
    i = min(i, j);
    string ans = "";
    for (k = 0; k < n; k++) {
        ans += s[(i + k) % n];
    }
    return ans;
}
```

## 4.3 后缀结构

### 4.3.1 SAM（后缀自动机）

```c++
struct SAM {
    static constexpr int ALPHABET_SIZE = 26;
    struct Node {
        int len;
        int link;
        std::array<int, ALPHABET_SIZE> next;
        Node() : len{}, link{}, next{} {}
    };
    std::vector<Node> t;
    SAM() {
        init();
    }
    void init() {
        t.assign(2, Node());
        t[0].next.fill(1);
        t[0].len = -1;
    }
    int newNode() {
        t.emplace_back();
        return t.size() - 1;
    }
    int extend(int p, int c) {
        if (t[p].next[c]) {
            int q = t[p].next[c];
            if (t[q].len == t[p].len + 1) {
                return q;
            }
            int r = newNode();
            t[r].len = t[p].len + 1;
            t[r].link = t[q].link;
            t[r].next = t[q].next;
            t[q].link = r;
            while (t[p].next[c] == q) {
                t[p].next[c] = r;
                p = t[p].link;
            }
            return r;
        }
        int cur = newNode();
        t[cur].len = t[p].len + 1;
        while (!t[p].next[c]) {
            t[p].next[c] = cur;
            p = t[p].link;
        }
        t[cur].link = extend(p, c);
        return cur;
    }
    int extend(int p, char c, char offset = 'a') {
        return extend(p, c - offset);
    }
    
    int next(int p, int x) {
        return t[p].next[x];
    }
    
    int next(int p, char c, char offset = 'a') {
        return next(p, c - 'a');
    }
    
    int link(int p) {
        return t[p].link;
    }
    
    int len(int p) {
        return t[p].len;
    }
    
    int size() {
        return t.size();
    }
};
```

### 4.3.2 SA（后缀数组）

```c++
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
```

下面的sa算法来自jiangly，构建速度更快

```c++
struct SA {
    int n;
    vector<int> sa, rk, lc;

    SA(string s) {
        n = s.size();
        sa.resize(n);
        lc.resize(n - 1);
        rk.resize(n);
        iota(sa.begin(), sa.end(), 0);
        sort(sa.begin(), sa.end(),
            [&](int a, int b) {
                return s[a] < s[b];
            });
        rk[sa[0]] = 0;
        for (int i = 1; i < n; i++) {
            rk[sa[i]] = rk[sa[i - 1]] + (s[sa[i]] != s[sa[i - 1]]);
        }
        int k = 1;
        vector<int> tmp, cnt(n);
        tmp.reserve(n);
        while (rk[sa[n - 1]] < n - 1) {
            tmp.clear();
            for (int i = 0; i < k; i++) {
                tmp.push_back(n - k + i);
            }
            for (auto i : sa) {
                if (i >= k) {
                    tmp.push_back(i - k);
                }
            }
            fill(cnt.begin(), cnt.end(), 0);
            for (int i = 0; i < n; i++) {
                cnt[rk[i]]++;
            }
            for (int i = 1; i < n; i++) {
                cnt[i] += cnt[i - 1];
            }
            for (int i = n - 1; i >= 0; i--) {
                sa[--cnt[rk[tmp[i]]]] = tmp[i];
            }
            swap(rk, tmp);
            rk[sa[0]] = 0;
            for (int i = 1; i < n; i++) {
                rk[sa[i]] = rk[sa[i - 1]] + (tmp[sa[i - 1]] < tmp[sa[i]] || sa[i - 1] + k == n || tmp[sa[i - 1] + k] < tmp[sa[i] + k]);
            }
            k *= 2;
        }
        for (int i = 0, j = 0; i < n; i++) {
            if (rk[i] == 0) {
                j = 0;
            } else {
                for (j -= j > 0; i + j < n && sa[rk[i] - 1] + j < n && s[i + j] == s[sa[rk[i] - 1] + j]; ) {
                    j++;
                }
                lc[rk[i] - 1] = j;
            }
        }
    }
};

void solve() {
    int n;
    string s;
    cin >> s;
    auto S = s + string(s.rbegin(), s.rend());
    int l = S.size();

    SA a(S);

    auto sa = a.sa, lc = a.lc, rk = a.rk;

    constexpr int K = 21;
    vector st(K, vector<int>(l - 1));
    st[0] = lc;
    for (int j = 0; j < K - 1; j++) {
        for (int i = 0; i + (2 << j) <= l - 1; i++) {
            st[j + 1][i] = min(st[j][i], st[j][i + (1 << j)]);
        }
    }
    
    auto rmq = [&](int l, int r) {
        int k = std::__lg(r - l);
        return min(st[k][l], st[k][r - (1 << k)]);
    };

    auto lcp = [&](int i, int j) {
        if (i == j || i == n || j == n) {
            return min(n - i, n - j);
        }
        int a = rk[i];
        int b = rk[j];
        if (a > b) {
            swap(a, b);
        }
        return min({n - i, n - j, rmq(a, b)});
    };
    
    auto lcs = [&](int i, int j) {
        if (i == j || i == 0 || j == 0) {
            return min(i, j);
        }
        int a = rk[n + n - i];
        int b = rk[n + n - j];
        if (a > b) {
            swap(a, b);
        }
        return min({i, j, rmq(a, b)});
    };
}
```

# 5. 计算几何

## 5.1 点、线、基本函数

```c++
#define double long double
const double EPS = 1e-15;
const double Pi = acos(-1);
const double INF = 1e18;
int sign(double x) {
    return x < EPS ? -1 : x > EPS; 
}

template<class T>
struct Point {
    T x, y;
    Point(const T &x_ = 0, const T &y_ = 0) : x(x_), y(y_) {}

    template<class U>
    operator Point<U>() {
        return Point<U>(U(x), U(y));
    }
    Point &operator+=(const Point &p) & {
        x += p.x;
        y += p.y;
        return *this;
    }
    Point &operator-=(const Point &p) & {
        x -= p.x;
        y -= p.y;
        return *this;
    }
    Point &operator*=(const T &v) & {
        x *= v;
        y *= v;
        return *this;
    }
    Point &operator/=(const T &v) & {
        x /= v;
        y /= v;
        return *this;
    }
    Point operator-() const {
        return Point(-x, -y);
    }
    friend Point operator+(Point a, const Point &b) {
        return a += b;
    }
    friend Point operator-(Point a, const Point &b) {
        return a -= b;
    }
    friend Point operator*(Point a, const T &b) {
        return a *= b;
    }
    friend Point operator*(const T &a, Point b) {
        return b *= a;
    }
    friend Point operator/(Point a, const T &b) {
        return a /= b;
    }
    friend bool operator==(const Point &a, const Point &b) {
        return a.x == b.x && a.y == b.y;
    }
    friend bool operator!=(const Point &a, const Point &b) {
        return !(a == b);
    }
    friend std::istream &operator>>(std::istream &is, Point &p) {
        return is >> p.x >> p.y;
    }
    friend std::ostream &operator<<(std::ostream &os, const Point &p) {
        return os << "(" << p.x << ", " << p.y << ")";
    }
};

template<class T>
struct Line {
    Point<T> a;
    Point<T> b;
    Line(const Point<T> &a_ = Point<T>(), const Point<T> &b_ = Point<T>()) : a(a_), b(b_) {}
};

template<class T>
T dot(const Point<T> &a, const Point<T> &b) {
    return a.x * b.x + a.y * b.y;
}

template<class T>
T cross(const Point<T> &a, const Point<T> &b) {
    return a.x * b.y - a.y * b.x;
}

template<class T>
T square(const Point<T> &p) {
    return dot(p, p);
}

template<class T>
double length(const Point<T> &p) {
    return std::sqrt(square(p));
}

template<class T>
double length(const Line<T> &l) {
    return length(l.a - l.b);
}

template<class T>
Point<T> normalize(const Point<T> &p) {
    return p / length(p);
}

template<class T>
bool parallel(const Line<T> &l1, const Line<T> &l2) {
    return cross(l1.b - l1.a, l2.b - l2.a) == 0;
}

template<class T>
double distancePP(const Point<T> &a, const Point<T> &b) {
    return length(a - b);
}

template<class T>
double distancePL(const Point<T> &p, const Line<T> &l) {
    return std::abs(cross(l.a - l.b, l.a - p)) / length(l);
}

template<class T>
double distancePS(const Point<T> &p, const Line<T> &l) {
    if (dot(p - l.a, l.b - l.a) < 0) {
        return distancePP(p, l.a);
    }
    if (dot(p - l.b, l.a - l.b) < 0) {
        return distancePP(p, l.b);
    }
    return distancePL(p, l);
}

template<class T>
Point<T> rotate(const Point<T> &a) {
    return Point(-a.y, a.x);
}

template<class T>
int sgn(const Point<T> &a) {
    return a.y > 0 || (a.y == 0 && a.x > 0) ? 1 : -1;
}

template<class T>
bool pointOnLineLeft(const Point<T> &p, const Line<T> &l) {
    return cross(l.b - l.a, p - l.a) > 0;
}

template<class T>
Point<T> lineIntersection(const Line<T> &l1, const Line<T> &l2) {
    return l1.a + (l1.b - l1.a) * (cross(l2.b - l2.a, l1.a - l2.a) / cross(l2.b - l2.a, l1.a - l1.b));
}

template<class T>
bool pointInPolygon(const Point<T> &a, const std::vector<Point<T>> &p) {
    int n = p.size();
    for (int i = 0; i < n; i++) {
        if (pointOnSegment(a, Line(p[i], p[(i + 1) % n]))) {
            return true;
        }
    }
    
    int t = 0;
    for (int i = 0; i < n; i++) {
        auto u = p[i];
        auto v = p[(i + 1) % n];
        if (u.x < a.x && v.x >= a.x && pointOnLineLeft(a, Line(v, u))) {
            t ^= 1;
        }
        if (u.x >= a.x && v.x < a.x && pointOnLineLeft(a, Line(u, v))) {
            t ^= 1;
        }
    }
    
    return t == 1;
}

// 0 : not intersect
// 1 : strictly intersect
// 2 : overlap
// 3 : intersect at endpoint
template<class T>
std::tuple<int, Point<T>, Point<T>> segmentIntersection(const Line<T> &l1, const Line<T> &l2) {
    if (std::max(l1.a.x, l1.b.x) < std::min(l2.a.x, l2.b.x)) {
        return {0, Point<T>(), Point<T>()};
    }
    if (std::min(l1.a.x, l1.b.x) > std::max(l2.a.x, l2.b.x)) {
        return {0, Point<T>(), Point<T>()};
    }
    if (std::max(l1.a.y, l1.b.y) < std::min(l2.a.y, l2.b.y)) {
        return {0, Point<T>(), Point<T>()};
    }
    if (std::min(l1.a.y, l1.b.y) > std::max(l2.a.y, l2.b.y)) {
        return {0, Point<T>(), Point<T>()};
    }
    if (cross(l1.b - l1.a, l2.b - l2.a) == 0) {
        if (cross(l1.b - l1.a, l2.a - l1.a) != 0) {
            return {0, Point<T>(), Point<T>()};
        } else {
            auto maxx1 = std::max(l1.a.x, l1.b.x);
            auto minx1 = std::min(l1.a.x, l1.b.x);
            auto maxy1 = std::max(l1.a.y, l1.b.y);
            auto miny1 = std::min(l1.a.y, l1.b.y);
            auto maxx2 = std::max(l2.a.x, l2.b.x);
            auto minx2 = std::min(l2.a.x, l2.b.x);
            auto maxy2 = std::max(l2.a.y, l2.b.y);
            auto miny2 = std::min(l2.a.y, l2.b.y);
            Point<T> p1(std::max(minx1, minx2), std::max(miny1, miny2));
            Point<T> p2(std::min(maxx1, maxx2), std::min(maxy1, maxy2));
            if (!pointOnSegment(p1, l1)) {
                std::swap(p1.y, p2.y);
            }
            if (p1 == p2) {
                return {3, p1, p2};
            } else {
                return {2, p1, p2};
            }
        }
    }
    auto cp1 = cross(l2.a - l1.a, l2.b - l1.a);
    auto cp2 = cross(l2.a - l1.b, l2.b - l1.b);
    auto cp3 = cross(l1.a - l2.a, l1.b - l2.a);
    auto cp4 = cross(l1.a - l2.b, l1.b - l2.b);
    
    if ((cp1 > 0 && cp2 > 0) || (cp1 < 0 && cp2 < 0) || (cp3 > 0 && cp4 > 0) || (cp3 < 0 && cp4 < 0)) {
        return {0, Point<T>(), Point<T>()};
    }
    
    Point p = lineIntersection(l1, l2);
    if (cp1 != 0 && cp2 != 0 && cp3 != 0 && cp4 != 0) {
        return {1, p, p};
    } else {
        return {3, p, p};
    }
}

template<class T>
double distanceSS(const Line<T> &l1, const Line<T> &l2) {
    if (std::get<0>(segmentIntersection(l1, l2)) != 0) {
        return 0.0;
    }
    return std::min({distancePS(l1.a, l2), distancePS(l1.b, l2), distancePS(l2.a, l1), distancePS(l2.b, l1)});
}

template<class T>
bool segmentInPolygon(const Line<T> &l, const std::vector<Point<T>> &p) {
    int n = p.size();
    if (!pointInPolygon(l.a, p)) {
        return false;
    }
    if (!pointInPolygon(l.b, p)) {
        return false;
    }
    for (int i = 0; i < n; i++) {
        auto u = p[i];
        auto v = p[(i + 1) % n];
        auto w = p[(i + 2) % n];
        auto [t, p1, p2] = segmentIntersection(l, Line(u, v));
        
        if (t == 1) {
            return false;
        }
        if (t == 0) {
            continue;
        }
        if (t == 2) {
            if (pointOnSegment(v, l) && v != l.a && v != l.b) {
                if (cross(v - u, w - v) > 0) {
                    return false;
                }
            }
        } else {
            if (p1 != u && p1 != v) {
                if (pointOnLineLeft(l.a, Line(v, u))
                    || pointOnLineLeft(l.b, Line(v, u))) {
                    return false;
                }
            } else if (p1 == v) {
                if (l.a == v) {
                    if (pointOnLineLeft(u, l)) {
                        if (pointOnLineLeft(w, l)
                            && pointOnLineLeft(w, Line(u, v))) {
                            return false;
                        }
                    } else {
                        if (pointOnLineLeft(w, l)
                            || pointOnLineLeft(w, Line(u, v))) {
                            return false;
                        }
                    }
                } else if (l.b == v) {
                    if (pointOnLineLeft(u, Line(l.b, l.a))) {
                        if (pointOnLineLeft(w, Line(l.b, l.a))
                            && pointOnLineLeft(w, Line(u, v))) {
                            return false;
                        }
                    } else {
                        if (pointOnLineLeft(w, Line(l.b, l.a))
                            || pointOnLineLeft(w, Line(u, v))) {
                            return false;
                        }
                    }
                } else {
                    if (pointOnLineLeft(u, l)) {
                        if (pointOnLineLeft(w, Line(l.b, l.a))
                            || pointOnLineLeft(w, Line(u, v))) {
                            return false;
                        }
                    } else {
                        if (pointOnLineLeft(w, l)
                            || pointOnLineLeft(w, Line(u, v))) {
                            return false;
                        }
                    }
                }
            }
        }
    }
    return true;
}

template<class T>
std::vector<Point<T>> hp(std::vector<Line<T>> lines) {
    std::sort(lines.begin(), lines.end(), [&](auto l1, auto l2) {
        auto d1 = l1.b - l1.a;
        auto d2 = l2.b - l2.a;
        
        if (sgn(d1) != sgn(d2)) {
            return sgn(d1) == 1;
        }
        
        return cross(d1, d2) > 0;
    });
    
    std::deque<Line<T>> ls;
    std::deque<Point<T>> ps;
    for (auto l : lines) {
        if (ls.empty()) {
            ls.push_back(l);
            continue;
        }
        
        while (!ps.empty() && !pointOnLineLeft(ps.back(), l)) {
            ps.pop_back();
            ls.pop_back();
        }
        
        while (!ps.empty() && !pointOnLineLeft(ps[0], l)) {
            ps.pop_front();
            ls.pop_front();
        }
        
        if (cross(l.b - l.a, ls.back().b - ls.back().a) == 0) {
            if (dot(l.b - l.a, ls.back().b - ls.back().a) > 0) {
                
                if (!pointOnLineLeft(ls.back().a, l)) {
                    assert(ls.size() == 1);
                    ls[0] = l;
                }
                continue;
            }
            return {};
        }
        
        ps.push_back(lineIntersection(ls.back(), l));
        ls.push_back(l);
    }
    
    while (!ps.empty() && !pointOnLineLeft(ps.back(), ls[0])) {
        ps.pop_back();
        ls.pop_back();
    }
    if (ls.size() <= 2) {
        return {};
    }
    ps.push_back(lineIntersection(ls[0], ls.back()));
    
    return std::vector(ps.begin(), ps.end());
}

template<class T>
auto getHull(std::vector<Point<T>> p) {
    std::sort(p.begin(), p.end(),
        [&](auto a, auto b) {
            return a.x < b.x || (a.x == b.x && a.y < b.y);
        });
    p.erase(unique(p.begin(), p.end()), p.end());
    std::vector<Point<T>> hi, lo;
    for (auto p : p) {
        while (hi.size() > 1 && cross(hi.back() - hi[hi.size() - 2], p - hi.back()) >= 0) {
            hi.pop_back();
        }
        while (!hi.empty() && hi.back().x == p.x) {
            hi.pop_back();
        }
        hi.push_back(p);
        while (lo.size() > 1 && cross(lo.back() - lo[lo.size() - 2], p - lo.back()) <= 0) {
            lo.pop_back();
        }
        if (lo.empty() || lo.back().x < p.x) {
            lo.push_back(p);
        }
    }
    return std::make_pair(hi, lo);
}

template<class T>
std::vector<Point<T>> getFullHull(std::vector<Point<T>> points) {
    auto [hi, lo] = getHull(points);
    
    std::vector<Point<T>> hull;
    
    for (int i = 0; i < lo.size(); i++) {
        hull.push_back(lo[i]);
    }
    for (int i = hi.size() - 1; i >= 0; i--) {
        if (i == 0 && hi[0] == lo[0]) continue;
        if (i == hi.size() - 1 && hi[i] == lo.back()) continue;
        hull.push_back(hi[i]);
    }
    
    return hull;
}
```

## 5.2 三维点与向量

```c++
using i64 = long long;
using real = double;

struct Point {
    real x = 0;
    real y = 0;
    real z = 0;
};

Point operator+(const Point &a, const Point &b) {
    return {a.x + b.x, a.y + b.y, a.z + b.z};
}

Point operator-(const Point &a, const Point &b) {
    return {a.x - b.x, a.y - b.y, a.z - b.z};
}

Point operator*(const Point &a, real b) {
    return {a.x * b, a.y * b, a.z * b};
}

Point operator/(const Point &a, real b) {
    return {a.x / b, a.y / b, a.z / b};
}

real length(const Point &a) {
    return std::hypot(a.x, a.y, a.z);
}

Point normalize(const Point &a) {
    real l = length(a);
    return {a.x / l, a.y / l, a.z / l};
}

real getAng(real a, real b, real c) {
    return std::acos((a * a + b * b - c * c) / 2 / a / b);
}

std::ostream &operator<<(std::ostream &os, const Point &a) {
    return os << "(" << a.x << ", " << a.y << ", " << a.z << ")";
}

real dot(const Point &a, const Point &b) {
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

Point cross(const Point &a, const Point &b) {
    return {
        a.y * b.z - a.z * b.y,
        a.z * b.x - a.x * b.z,
        a.x * b.y - a.y * b.x
    };
}
```

## 5.3 凸包（Graham 扫描法）

```c++
template<class T>
std::vector<Point<T>> gethull(vector<Point<T>> points) {
    for (int i = 1; i < points.size(); i++) {
        if (points[i].y < points[0].y || (points[i].y == points[0].y && points[i].x < points[0].x)) {
            swap(points[0], points[i]);
        }
    }

    sort(points.begin() + 1, points.end(), [&](Point<T>& a, Point<T>& b){
        if (atan2(a.y - points[0].y, a.x - points[0].x) == atan2(b.y - points[0].y, b.x - points[0].x)) {
            return distancePP(a, points[0]) < distancePP(b, points[0]);
        }
        return atan2(a.y - points[0].y, a.x - points[0].x) < atan2(b.y - points[0].y, b.x - points[0].x);
    });

    vector<Point<T>> hull;
    hull.push_back(points[0]);
    for (int i = 1; i < points.size(); i++) {
        while (hull.size() > 1 && cross(hull.back() - hull[hull.size() - 2], points[i] - hull.back()) < EPS) {
            hull.pop_back();
        }
        hull.push_back(points[i]);
    }

    return hull;
}
```

## 5.4 旋转卡壳

不能算是一种算法吧。。。就是一种技巧。

```c++
void solve(){
    int n;
    cin >> n;
    vector<Point<double>> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i].x >> p[i].y;
    }

    vector<Point<double>> hull = getFullHull(p);
    int m = hull.size();
    double ans = 0;
    if (m < 3) {
        ans = max(ans, distancePP(hull[0], hull[1]));
        cout << ll(ans * ans + 0.5) << "\n";
        return;
    }
    for(int i = 0, j = 2; i < m; i++) {
        while (distancePL(hull[j], Line(hull[i], hull[(i + 1) % m])) < distancePL(hull[(j + 1) % m], Line(hull[i], hull[(i + 1) % m]))) {
            j = (j + 1) % m;
        }

        ans = max(ans, distancePP(hull[j], hull[i]));
        ans = max(ans, distancePP(hull[j], hull[(i + 1) % m]));
    }

    cout << ll(ans * ans + 0.5) << "\n";
}
```

# 6. 莫队

## 6.1 莫队

对于每一个 $l_i$ 所在的块中，$r_i$ 是单调增的，从前往后跑O($n$)，但是 $l_i$ 被限制在这个块中移动不会超过 O($\sqrt{n}$) 的。

```c++
struct node{
    int l, r, id;
};

void solve(){
    int n, m, k;
    cin >> n >> m >> k;
    int len = sqrt(n);
    vector<int> a(n);
    vector<node> modui(m);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> modui[i].l >> modui[i].r;
        modui[i].l--, modui[i].r--;
        modui[i].id = i;
    }
    sort(modui.begin(), modui.end(), [&](node& x, node& y){
        if (x.l / len == y.l / len) return x.r < y.r;
        return x.l / len < y.l / len;
    });
    vector<int> cnt(k + 1, 0), res(m, 0);
    int ans = 0;
    
    auto add = [&](int x){
        ans += cnt[x] * 2 + 1;
        cnt[x]++;
    };
    auto del = [&](int x){
        ans -= cnt[x] * 2 - 1;
        cnt[x]--;
    };
    

    int lstl = modui[0].l, lstr = modui[0].l - 1;
    for (int i = 0; i < m; i++) {
        int l = modui[i].l, r = modui[i].r;
        while (lstl > l) --lstl, add(a[lstl]);
        while (lstl < l) del(a[lstl]), ++lstl;
        while (lstr > r) del(a[lstr]), --lstr;
        while (lstr < r) ++lstr, add(a[lstr]);
        res[modui[i].id] = ans;
    }

    for (int i = 0; i < m; i++) {
        cout << res[i] << '\n';
    }
}
```

## 6.2 带修莫队

依旧数颜色，在（l， r）的基础上加个t就行，（l，r，t），块大小 $$n^{2 / 3}$$，时间复杂度$$O(n\cdot n^{2 / 3})$$

```c++
const int MAXN = 1e6 + 5;
int cnt[MAXN], a[MAXN], ans[MAXN], sum, cntq, cntc;

struct Q{
    int l, r, t, id;
}qr[MAXN];

struct C{
    int pos, val;
}qc[MAXN];

void add(int x) {
    sum += !cnt[x]++;
}

void del(int x) {
    sum -= !--cnt[x];
}

void upd(int x, int t) {
    if (qr[x].l <= qc[t].pos && qc[t].pos <= qr[x].r) {
        del(a[qc[t].pos]);
        add(qc[t].val);
    }
    swap(a[qc[t].pos], qc[t].val);
}

void solve() {
    int n, m;
    cin >> n >> m;
    int sz = pow(n, 0.6666);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i <= m; i++) {
        char op;
        cin >> op;
        if (op == 'Q') {
            ++cntq;
            cin >> qr[cntq].l >> qr[cntq].r;
            qr[cntq].id = cntq;
            qr[cntq].t = cntc;
        }
        if (op == 'R') {
            ++cntc;
            cin >> qc[cntc].pos >> qc[cntc].val;
        }
    }

    sort(qr + 1, qr + 1 + cntq, [&](Q x, Q y) {
        if (x.l / sz == y.l / sz) {
            if (x.r / sz == y.r / sz) {
                return x.t < y.t;
            }
            return x.r / sz < y.r / sz;
        }
        return x.l / sz < y.l / sz;
    });

    int l = 1, r = 0, t = 0;
    for (int i = 1; i <= cntq; i++) {
		while (l > qr[i].l) add(a[--l]);
		while (l < qr[i].l) del(a[l++]);
		while (r > qr[i].r) del(a[r--]);
		while (r < qr[i].r) add(a[++r]);
		while (t < qr[i].t) upd(i, ++t);
		while (t > qr[i].t) upd(i, t--);
        ans[qr[i].id] = sum;
    }
    
    for (int i = 1; i <= cntq; i++) {
        cout << ans[i] << "\n";
    }
}
```

## 6.3 回滚莫队

暴力重置 $l$ 为当前编号块的右端点，记录历史值即可。

```c++
struct Q {
    int l, r, ans;
    int pos, id;
};

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> sorted(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sorted[i] = a[i];
    }

    sort(all(sorted));
    sorted.erase(unique(all(sorted)), sorted.end());

    for (int i = 0; i < n; i++) {
        a[i] = lower_bound(all(sorted), a[i]) - sorted.begin();
    }

    int len = sqrt(n);
    int cnt = sorted.size();

    int m;
    cin >> m;
    vector<Q> qr(m);
    for (int i = 0; i < m; i++) {
        cin >> qr[i].l >> qr[i].r;
        qr[i].l--, qr[i].r--;
        qr[i].pos = i;
        qr[i].id = qr[i].l / len;
    }

    sort(all(qr), [&](Q x, Q y) {
        if (x.id == y.id) {
            return x.r < y.r;
        }

        return x.id < y.id;
    });

    vector<int> maxn(cnt, 0), minn (cnt, 1e9);
    int res = 0;
    for (int i = 0, l = 0, r = 0, lstid = -1; i < m; i++) {
        if (lstid != qr[i].id) {
            for (int j = 0; j < cnt; j++) {
                maxn[j] = 0;
                minn[j] = 1e9;
            }
            res = 0;
            r = (qr[i].id + 1) * len;
            lstid = qr[i].id;
        }

        vector<pii> premax, premin;
        if (qr[i].id == qr[i].r / len) {
            int resnow = res;
            for (int j = qr[i].l; j <= qr[i].r; j++) {
                premax.push_back({a[j], maxn[a[j]]});
                premin.push_back({a[j], minn[a[j]]});
                maxn[a[j]] = max(maxn[a[j]], j);
                minn[a[j]] = min(minn[a[j]], j);
                resnow = max(resnow, maxn[a[j]] - minn[a[j]]);
            }

            qr[i].ans = resnow;
            while (!premax.empty()) {
                maxn[premax.back().first] = premax.back().second;
                premax.pop_back();
            }
            while (!premin.empty()) {
                minn[premin.back().first] = premin.back().second;
                premin.pop_back();
            }
            continue;
        }
        while (r <= qr[i].r) {
            maxn[a[r]] = max(maxn[a[r]], r);
            minn[a[r]] = min(minn[a[r]], r);
            res = max(res, maxn[a[r]] - minn[a[r]]);
            r++;
        }
        int resnow = res;
        l = (qr[i].id + 1) * len - 1;
        while (l >= qr[i].l) {
            premax.push_back({a[l], maxn[a[l]]});
            premin.push_back({a[l], minn[a[l]]});
            maxn[a[l]] = max(maxn[a[l]], l);
            minn[a[l]] = min(maxn[a[l]], l);
            resnow = max(resnow, maxn[a[l]] - minn[a[l]]);
            l--;
        }
        qr[i].ans = resnow;
        while (!premax.empty()) {
            maxn[premax.back().first] = premax.back().second;
            premax.pop_back();
        }
        while (!premin.empty()) {
            minn[premin.back().first] = premin.back().second;
            premin.pop_back();
        }
    }

    sort(all(qr), [&](Q x, Q y) {
        return x.pos < y.pos;
    });

    for (int i = 0; i < m; i++) {
        cout << qr[i].ans << "\n";
    }
}
```

## 6.4 莫队二次离线 / 第十四分块(前体)

对于计算转移的时间复杂度为 $O(f(x))$ 时，可对修改操作进行离线操作，然后对 $ans$ 进行前缀和求解

```c++
struct Q {
    int l, r, id, pos;
    ll ans = 0;
};

struct Q1
{
    int l, r, id, x;
    ll c;
};

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    int len = sqrt(n);
    vector<Q> qr(m);
    vector<int> num;

    for (int i = 0; i < (1 << 15); i++) {
        if (__builtin_popcount(i) == k) {
            num.push_back(i);
        }
    }

    vector<ll> pre(n + 1, 0);
    vector<ll> cnt((1 << 15), 0);

    for (int i = 1; i <= n; i++) {
        pre[i] = cnt[a[i]];

        for (int x : num) {
            cnt[x ^ a[i]]++;
        }   
    }

    for (int i = 0; i < m; i++) {
        cin >> qr[i].l >> qr[i].r;
        qr[i].id = qr[i].l / len;
        qr[i].pos = i;
    }

    sort(all(qr), [&](Q x, Q y) {
        if (x.id == y.id) {
            return x.r < y.r;
        }

        return x.id < y.id;
    });

    vector<vector<Q1>> mmd(n + 1);

    for (int i = 0, l = 1, r = 0; i < m; i++) {
        if (r < qr[i].r) {
            mmd[l - 1].push_back(Q1{r + 1, qr[i].r, i, a[r + 1], -1});
        }
        while (r < qr[i].r) {
            r++;
            qr[i].ans += pre[r];
        }
        if (r > qr[i].r) {
            mmd[l - 1].push_back(Q1{qr[i].r + 1, r, i, a[r], 1});
        }
        while (r > qr[i].r) {
            qr[i].ans -= pre[r];
            r--;
        }
        if (l < qr[i].l) {
            mmd[r].push_back(Q1{l, qr[i].l - 1, i, a[l], -1});
        }
        while (l < qr[i].l) {
            qr[i].ans += pre[l];
            if (k == 0) qr[i].ans++;
            l++;
        }
        if (l > qr[i].l) {
            mmd[r].push_back(Q1{qr[i].l, l - 1, i, a[l - 1], 1});
        }
        while (l > qr[i].l) {
            l--;
            qr[i].ans -= pre[l];
            if (k == 0) qr[i].ans--;
        }
    }

    for (int i = 0; i < cnt.size(); i++) cnt[i] = 0;

    for (int i = 1; i <= n + 1; i++) {

        for (auto x : mmd[i - 1]) {
            ll tmp = 0;
            for (int j = x.l; j <= x.r; j++) {
                tmp += cnt[a[j]];
            }
            qr[x.id].ans += x.c * tmp;
        }

        if (i == n + 1) break;

        for (int x : num) {
            cnt[x ^ a[i]]++;
        }
    }

    for (int i = 1; i < m; i++) {
        qr[i].ans += qr[i - 1].ans;
    }

    sort(all(qr), [&](Q x, Q y) {
        return x.pos < y.pos;
    });

    for (int i = 0; i < m; i++) {
        cout << qr[i].ans << "\n";
    }
}
```

# 7. 其他

## 7.1 随机数、树、图生成

```c++
mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());
int r(int a, int b) {
    return rnd() % (b - a + 1) + a;
}

void graph(int n, int root = -1, int m = -1) {
    vector<pair<int, int>> t;
    for (int i = 1; i < n; i++) { // 先建立一棵以0为根节点的树
        t.emplace_back(i, r(0, i - 1));
    }

    vector<pair<int, int>> edge;
    set<pair<int, int>> uni;
    if (root == -1) {
        root = r(0, n - 1); // 确定根节点
    }
    for (auto [x, y] : t) { // 偏移建树
        x = (x + root) % n + 1;
        y = (y + root) % n + 1;
        edge.emplace_back(x, y);
        uni.emplace(x, y);
    }

    if (m != -1) { // 如果是图，则在树的基础上继续加边
        for (int i = n; i <= m; i++) {
            while (true) {
                int x = r(1, n), y = r(1, n);
                if (x == y) continue; // 拒绝自环
                if (uni.count({x, y}) || uni.count({y, x})) continue; // 拒绝重边
                edge.emplace_back(x, y);
                uni.emplace(x, y);
                break;
            }
        }
    }

    random_shuffle(edge.begin(), edge.end()); // 打乱节点
    for (auto [x, y] : edge) {
        cout << x << " " << y << endl;
    }
}
```

## 7.2 对拍

$.bat$

```c++
@echo off
g++ -o data.exe data.cpp
g++ -o a.exe a.cpp
g++ -o a1.exe a1.cpp

set t = 0
:loop
set /a t += 1
echo %t%
data.exe > in.txt
a.exe < in.txt > a.txt
a1.exe < in.txt > a1.txt
fc a.txt a1.txt > nul || (
    echo WA
    exit
)
goto loop
```

$.sh$

```c++
#!/bin/bash

g++ -o data data.cpp
g++ -o a a.cpp
g++ -o a1 a1.cpp

t=0
while true; do
    t=$((t+1))
    echo $t

    ./data > in.txt
    ./a < in.txt > a.txt
    ./a1 < in.txt > a1.txt

    if ! diff -q a.txt a1.txt > /dev/null; then
        echo WA
        exit
    fi
done
```
