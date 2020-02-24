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


int dp[101][4][4][4];

int main()
{
    int n;
    cin >> n;
    dp[0][3][3][3] = 1;
    for (int len = 0; len < n+1; len++)
    {
        for (int c1 = 0; c1 < 4; c1++)
        {
            for (int c2 = 0; c2 < 4; c2++)
            {
                for (int c3 = 0; c3 < 4; c3++)
                {
                    if(dp[len][c1][c2][c3] == 0) continue;

                    for (int a = 0; a < 4; a++)
                    {
                        if(a==1 && c1==2 && c2 == 0)continue;
                        if(a==2 && c1==1 && c2 == 0)continue;
                        if(a==1 && c1==0 && c2 == 2)continue;
                        if(a==1 && c2==2 && c3 == 0)continue;
                        if(a==1 && c1==2 && c3 == 0)continue;

                        dp[len+1][a][c1][c2] += dp[len][c1][c2][c3];
                        dp[len + 1][a][c1][c2] %= MOD;
                    }
                }
            }
        }
    }
    ll ans = 0;
    for (int c1 = 0; c1 < 4; c1++)
    {
        for (int c2 = 0; c2 < 4; c2++)
        {
            for (int c3 = 0; c3 < 4; c3++)
            {
                ans += dp[n][c1][c2][c3];
                ans %= MOD;
            }
        }
    }
    cout << ans << endl;
}