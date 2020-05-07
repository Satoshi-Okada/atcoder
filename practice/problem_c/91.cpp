#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> P;
#define ll long long
#define ld long double
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define PI 3.14159265358979323846
#define sz(x) ((int)(x).size())
#define chmin(x,y) x = min(x,y)
#define chmax(x,y) x = max(x,y)

const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

bool compare_by_first(pair<int, int> a, pair<int, int> b)
{
    if (a.first != b.first)
    {
        return a.first < b.first; //昇順
        //return a.second > b.second; // 降順
    }
    else
    {
        return a.second < b.second;
    }
}
int main()
{
    int n;
    cin >> n;
    vector<P<int, int>> r;
    vector<P<int, int>> b;
    rep(i,n)
    {
        int x,y;
        cin >> x >> y;
        r.push_back(P(x,y));
    }
    rep(i, n)
    {
        int x, y;
        cin >> x >> y;
        b.push_back(P(x, y));
    }
    sort(a.begin(), a.end(),compare_by_first);
    sort(b.begin(), b.end(),compare_by_first);
    for (auto pair : a)
    {
        
    }
    


}