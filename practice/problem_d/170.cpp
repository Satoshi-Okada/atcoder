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
bool dp[1000006];
int main()
{
    int n;cin >> n;
    vector<int> a(n);rep(i,n) cin >> a[i];
    sort(a.begin(),a.end());
    int before = -1;
    rep(i,1000006)dp[i] = true;
    for (auto &&i : a)
    {
        if(i == before)
        {
            before = i;
            dp[i] = false;
            continue;
        }
        
        if(dp[i])
        {
            int counter = 2;
            while(i*counter < 1000006)
            {
                dp[i*counter] = false;
                counter++;
            }
        }
        before = i;
    }
    int ans = 0;
    before = -1;
    for (auto &&i : a)
    {
        if(i == before)
        {
            before = i;
            continue;
        }
        before = i;
        if(dp[i])ans++;
    }
    cout << ans << endl;
    
}