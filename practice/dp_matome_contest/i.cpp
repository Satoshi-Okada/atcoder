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
vector<double> p;
double dp[3005][3005];
int main()
{
    int n;
    cin >> n;
    
    p.resize(n+1);
    for (int  i = 1; i <=n; i++)
    {
        cin >> p[i];
    }
    
    dp[0][0] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            dp[i + 1][j + 1] += dp[i][j] * p[i+1];
            dp[i + 1][j] += dp[i][j] * (1-p[i+1]);
        }
    }
    double ans = 0;
    for (int i = 0; i <=n; i++)
    {
        if(2*i > n)
        {
            ans += dp[n][i];
        }
    }

    cout << setprecision(11) << ans << endl;
}
