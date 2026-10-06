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
