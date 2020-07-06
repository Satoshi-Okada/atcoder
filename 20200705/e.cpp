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
    int n,k;cin >> n >> k;
    vector<ll> a(n);rep(i,n)cin >> a[i];
    vector<ll> plus_g;
    vector<ll> minus_g;

    rep(i,n)
    {
        if(a[i]<0)
        {
            minus_g.push_back(a[i])
            continue;
        }
        plus_g.push_back(a[i]);
    }
    sort(all(plus_g), greater<int>());
    sort(all(minus_g));

    int minus_size = sz(minus_g);
    int plus_size = sz(minus_g);
    ll　ans;
    if(minus_size==k && minus_size%2==1)
    {
        for (auto &&i : minus_g)
        {
            ans *= (ll)i;
            ans %= MOD;
        }
        cout << ans << endl;
        return 0;
    }
    
}