#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define PI 3.14159265358979323846
#define sz(x) ((int)(x).size())

const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

typedef pair<int ,int > P;
int main()
{
    int h,n;
    cin >> h >> n;
    //vector<P> attack(n);
    vector<int> a(n);
    vector<int> d(n);
    rep(i,n)
    {
        cin >> a[i] >> d[i];
    }
    vector<vector<int>> dp(n+1,vector<int> (h+1,INF));

    rep(i,n+1)
    {
        dp[i][0] = 0;
    }

    rep(i,n)
    {
        rep(j,h+1)
        {
            if (j<a[i])
            {
                dp[i+1][j] = min(dp[i][j],dp[i+1][0]+d[i]);
            }else
            {
                dp[i+1][j] = min(dp[i][j],dp[i+1][j-a[i]]+d[i]);
            }
        }
    }
    cout << dp[n][h] << endl;
}