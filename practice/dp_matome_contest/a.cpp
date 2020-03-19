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
ll dp[150000];
ll h[150000];
int main()
{
    int n;
    cin >> n;
    rep(i,n)
    {
        cin >> h[i];
    }
    dp[1] = abs(h[1]-h[0]);
    rep(i,n)
    {
        dp[i] = LINF;
    }
    dp[0] = 0;
    for (int i = 0; i < n; i++)
    {
        chmin(dp[i], dp[i - 1] + abs(h[i] - h[i - 1]));
        if (i > 1) chmin(dp[i], dp[i - 2] + abs(h[i] - h[i - 2]));
    }
    cout << dp[n-1] << endl;
}
