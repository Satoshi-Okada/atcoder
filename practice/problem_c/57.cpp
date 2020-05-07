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

ll compare_two_digits(ll a,ll b)
{
    string s,t;
    s = to_string(a);
    t = to_string(b);
    return max((ll)s.length(), (ll)t.length());
}

int main()
{
    ll n;
    cin >> n;
    ll ans = LINF;
    for (ll i = 1; i*i<=n ; i++)
    {
        if(n%i==0)
        {
            ans = min(ans, compare_two_digits(i,n/i));
        }
    }
    cout << ans << endl;

}