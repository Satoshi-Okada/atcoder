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
int main()
{
    ll n,h;cin >> n >> h;
    ll a,b,c,d,e;cin >> a >> b >> c >> d >> e;
    ll mn = LINF;
    for (ll x = 0; x <= n; x++)
    {
        ll y = max((ll)0,(e*n-e*x-b*x-h)/(d+e)+(ll)1);
        if(y <= n-x)
        {
            chmin(mn, a*x + c*y);
        }
    }
    cout << mn << endl;
    
}