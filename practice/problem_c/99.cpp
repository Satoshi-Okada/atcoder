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
int dp[13][100010];
int main()
{
    vector<int> devider;
    int temp9, temp6;
    temp9 = 1;temp6 = 1;
    devider.push_back(temp9);
    for (int i = 0; i < 9; i++)
    {
        temp9*=9;
        temp6*= 6;
        if (temp9<100010)
        {
            devider.push_back(temp9);
        }
        if (temp6 < 100010)
        {
            devider.push_back(temp6);
        }
    }
    sort(devider.begin(),devider.end());
    int n;
    cin >> n;
    for (int  i= 0; i < 13; i++)
    {
        for (int j = 0; j < 100010; j++)
        {
            dp[i][j] = INF;
        }
        
    }
    /*for (int i = 0; i < 13; i++)
    {
        dp[i][0] = 0;
    }*/
    dp[0][0] = 0;
    
    
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < n+1; j++)
        {
            chmin(dp[i+1][j], dp[i][j]);
            if (j-devider[i]>=0)
            {
                chmin(dp[i + 1][j], dp[i + 1][j - devider[i]] + 1);
            }
        }
    }
    cout << dp[12][n] << endl;
    
    
}