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

ll dp[110][100010];
int w[100010];
int v[100010];

int main()
{
    int n,w_limit;
    cin >> n >> w_limit;
    rep(i,n)
    {
        cin >> w[i] >> v[i];
    }
    rep(i,n)
    {
        rep(j,w_limit+1)
        {
            chmax(dp[i+1][j], dp[i][j]);
            int nj = j+w[i];
            if (nj<=w_limit)
            {
                chmax(dp[i+1][nj], dp[i][j]+v[i]);
            }
        }
    }
    cout << dp[n][w_limit] << endl;
}