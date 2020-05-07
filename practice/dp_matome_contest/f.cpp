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
int dp[3005][3005];
int main()
{
    string s,t;
    cin >> s >> t;
    int sl = s.length();
    int tl = t.length();

    for (int i = 1; i <= sl; i++)
    {
        for (int j = 1; j <= tl; j++)
        {
            if(s[i-1] == t[j-1])dp[i][j]=dp[i-1][j-1]+1;
            chmax(dp[i][j], dp[i - 1][j]);
            chmax(dp[i][j], dp[i][j-1]);
        }
    }
    //cout << dp[sl][tl] << endl;
    int si, ti;
    si = sl;
    ti = tl;
    string ans = "";
    while(si > 0 && ti > 0)
    {
        if(dp[si][ti] == dp[si][ti - 1])
        {
            ti--;
        }
        else if (dp[si][ti] == dp[si - 1][ti])
        {
            si--;
        }
        else if (dp[si][ti] == dp[si - 1][ti - 1] + 1)
        {
            ans = s[si - 1] + ans;
            si--;
            ti--;
        }
    }
    cout << ans << endl;
}