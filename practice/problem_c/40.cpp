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

ll dp[100005];
int main()
{
    int n; cin >> n;
    vector<ll> a(n);rep(i,n)cin >> a[i];
    dp[0] = 0;
    for (int i = 0; i < n; i++)
    {
        dp[i+1] = dp[i]+abs(a[i+1]-a[i]);
        if(i>0) chmin(dp[i+1], dp[i-1]+abs(a[i+1]-a[i-1]));
    }
    cout << dp[n-1] << endl;

}