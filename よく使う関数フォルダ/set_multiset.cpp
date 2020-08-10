#include<set>

set<int> s;
// 二分探索
s.lower_bound(5);


multiset<int> ms;
// 追加
ms.insert(5);
// 要素数を調べる
ms.count(5);

// 有無
ms.find(5);
// なければendが返る
ms.find(5) == ms.end();
// 値を1つ消す
auto it = ms.fint(5)
if(it!=ms.end())
{
    ms.erase(it);
}
