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
int dh[] = {0, 1, 0, -1};
int dw[] = {1, 0, -1, 0};
int dp[1005][1005];
vector<string> mp;



int main()
{
    int h,w;
    cin >> h >> w;
    mp.resize(h);
    rep(i, h)cin >> mp[i];
    dp[0][0] = 1;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if(i+1 <=h-1 && mp[i+1][j]=='.')
            {
                dp[i+1][j]+= dp[i][j];
                dp[i+1][j]%=MOD;

            }
            if (j + 1 <= w - 1 && mp[i][j+1] == '.')
            {
                dp[i][j+1] += dp[i][j];
                dp[i][j+1] %= MOD;
            }
        }
        
    }

    cout << dp[h-1][w-1]%MOD << endl;
    
}