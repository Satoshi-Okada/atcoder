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
// const int MOD = 1e9 + 7;
const ll LINF = 1e18;
 
const ll MOD = 998244353;
 
ll perm[200005];
ll comb[200005];
int main()
{
    int n,m,k;cin >> n >> m >> k;
    perm[0] = 1;
    for (int i = 1; i <= m; i++)
    {
        perm[i]=perm[i-1]*(m-i+1);
        perm[i]%=MOD;
    }
    comb[0] = 1;
    for (int i = 1; i <=n-1; i++)
    {
        comb[i] = ((comb[i-1]*(n-i))/i)%MOD;
    }
    cout << perm[2] << " " << comb[2] << endl;
    ll ans = 0;
    for (int i = 0; i <=k; i++)
    {
        
        if(m<n-i)
        {
            continue;
        }
        ll temp = (perm[i]*comb[i])%MOD;
        ans  = (ans +temp)%MOD;
    }
    cout << ans << endl;
    
    
    
}