#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;
#define ll long long
#define ld long double
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define PI 3.14159265358979323846
#define sz(x) ((int)(x).size())
#define chmax(x,y) x = max(x,y)

const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;


int dp[3005][3005];

int main()
{
    int n,t;
    cin >> n >> t;
    vector<P> p(n);
    rep(i,n)
    {
        cin >> p[i].first >> p[i].second;
    }
    int ans = 0;
    sort(p.begin(),p.end());
    rep(i,n)
    {
        rep(j,t)
        {
            chmax(dp[i+1][j], dp[i][j]);
            int nj = j+p[i].first;
            if (nj < t)
            {
                chmax(dp[i+1][nj], dp[i][j]+p[i].second);
            }
        }
        ans = max(ans, dp[i][t-1]+p[i].second);
    }
    cout << ans << endl;
}