#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define PI 3.14159265358979323846
#define sz(x) ((int)(x).size())
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

ll dp[(int)1e6][2];
ll a[(int)1e6];

int main()
{
    int n;
    cin >> n;

    rep(i, n)
    {
        cin >> a[i + 1];
    }

    dp[1][0] = 0;
    dp[1][1] = (-1) * INF;
    a[0] = 0;
    //cout << dp[0][0] << dp[0][1] << endl;
    for (size_t i = 1; i < n; i++)
    {
        dp[i + 1][0] = max(dp[i][0] + a[i], dp[i][1] - a[i]);
        dp[i + 1][1] = max(dp[i][1] + a[i], dp[i][0] - a[i]);
        //cout << dp[i + 1][0] << dp[i + 1][1] << endl;
    }
    cout << max(dp[n][0] + a[n], dp[n][1] - a[n]) << endl;
}