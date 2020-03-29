#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define ld long double
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define PI 3.14159265358979323846
#define sz(x) ((int)(x).size())
#define chmin(x,y) x = min(x,y)
#define chmax(x,y) x = max(x,y)
using P = pair<int, int>;

const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int dp[110][100010];
int w[110];
int v[110];

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

    rep(i,n+1)
    {
        rep(j,sum_v+1)
        {
            dp[i][j] = INF;
        }
    }
    dp[0][0] = 0;
    rep(i, n)
    {
        rep(j, sum_v + 1)
        {
            chmin(dp[i+1][j], dp[i][j]);
            if (j-v[i]>=0)
            {
                chmin(dp[i+1][j], dp[i][j-v[i]]+w[i]);
            }
        }
    }
    
    ll ans = 0;
    rep(j,sum_v+1)
    {
        if (dp[n][j]<=limit)
        {
            ans = j;
        }
    }
    cout << ans << endl;
}