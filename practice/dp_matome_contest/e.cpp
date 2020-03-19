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

ll dp[110][10000010];
int w[110];
int v[110]
int main()
{
    int n;
    ll limit;
    cin >> n >> limit;
    ll sum_v = 0;

    rep(i,n)
    {
        cin >> w[i] >> v[i];
        sum_v += v[i];
    }

    rep(i,n)
    {
        rep(i,sum_v+1)
        {
            dp[i][j] = -INF;
        }
    }
    dp[0][0] = 0;
    rep(i, n)
    {
        rep(i, sum_v + 1)
        {
            chmin(dp[i+1][j], dp[i][j]);
            chmin(dp[i+1][])
        }
    }
}