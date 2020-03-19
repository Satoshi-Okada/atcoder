#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> P;
#define ll long long
#define ld long double
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define PI 3.14159265358979323846
#define sz(x) ((int)(x).size())
#define chmin(x,y) x = min(x,y)

const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

ll dp[100010];
ll h[100010];


int main()
{
    int n,k;
    cin >> n >> k;
    rep(i,n)
    {
        cin >> h[i];
    }
    rep(i,n)
    {
        dp[i] = INF;
    }
    dp[0] = 0;
    rep(i,n)
    {
        rep(j,k+1)
        {
            chmin(dp[i+j], dp[i]+abs(h[i+j]-h[i]));
        }
    }
    cout << dp[n-1] << endl;
}