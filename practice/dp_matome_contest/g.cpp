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
ll dp[100005];
vector<int> graph[100005];

ll rec(int v)
{
    if(dp[v]!=-1) return dp[v];
    ll res = 0;
    for (auto s : graph[v])
    {
        chmax(res, rec(s)+1);
    }
    dp[v] = res;
    return res;
    
}
int main()
{
    int n,m;
    cin >> n >> m;
    
    rep(i,m)
    {
       int x,y;
       cin >>x  >>y ;
       --x; --y;
       graph[x].push_back(y);
    }
    rep(i, 100005)
    {
        dp[i] = (ll)-1;
    }
    ll ans =0;
    rep(i,n) chmax(ans, rec(i));

    cout << ans << endl;
    
}