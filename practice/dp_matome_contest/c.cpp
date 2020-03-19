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


ll dp[3][100010];
int __list[] = {0,1,2};
ll abc[3][100010];

int main()
{
    int n;
    cin >> n;
    rep(i,n)
    {
        cin >> abc[0][i]>> abc[1][i] >> abc[2][i];
    }

    rep(i,n)
    {
        rep(j,3)
        {
            for(auto& u: __list)
            {
                if (u!=j)
                {
                    chmax(dp[u][i+1], dp[j][i]+abc[u][i]);
                }
            }
        }
    }
    ll ans = 0;
    for(auto& u : __list)
    {
        ans = max(ans, dp[u][n]);
    }
    cout << ans << endl;
}