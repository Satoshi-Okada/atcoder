#include <stack>
#include <utility>
#include <algorithm>
#include <vector>
using namespace std;

#define ll long long



int main()
{
    pair<int,int> mypair;//宣言
    mypair = make_pair(a,b);//aとbでペアを作成
    vector<pair<int,int> > pairs;//vectorにpairを格納していく
    sort(pairs.begin(),pairs.end(),compare_by_seond);
    
}
//２つ目でのソートを優先して、そのあと１つ目でソートするときに使うやつ
bool compare_by_seond(pair<int, int> a, pair<int, int> b) {
    if(a.second != b.second){
        return a.second < b.second;//昇順
        //return a.second > b.second; // 降順
    }else{
        return a.first < b.first;
    }
}