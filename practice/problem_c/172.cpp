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
#define all(x) (x).begin(),(x).end()

const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;
int main()
{
    ll n,m,k;cin >> n >> m >> k;
    vector<ll> a(n);
    vector<ll> ra(n);
    ll temp = 0;
    rep(i,n)
    {
        cin >> a[i];
        temp += a[i];
        ra[i] = temp;
    }
    temp = 0;
    vector<ll> b(m);
    vector<ll> rb(m);
    rep(i, m)
    {
        cin >> b[i];
        temp += b[i];
        rb[i] = temp;
    }
    ll ans = upper_bound(all(rb), k) - rb.begin();

    rep(i,n)
    {
        if(k-ra[i]<0)
        {
            continue;
        }
        ll bi = upper_bound(all(rb), k-ra[i])-rb.begin();
        ans = max(ans, bi + (ll)i + (ll)1);
        
    }
    cout << ans << endl;

}