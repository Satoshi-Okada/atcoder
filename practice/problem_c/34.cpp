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
const ll MOD = 1e9+7;
ll PowMod(ll n, ll m)
{
    if (m == 0)
    {
        return (ll)1;
    }
    if (m % 2 == 0)
    {
        ll temp = PowMod(n, m / 2);
        return temp * temp % MOD;
    }
    return n * PowMod(n, m - 1) % MOD;
}

ll inv_num(ll num)
{
    return PowMod(num, MOD - 2);
}

ll COM(ll n, ll a)
{
    ll X, Y;
    X = 1;
    Y = 1;
    rep(i, a)
    {
        X *= (n - i);
        X %= MOD;
        Y *= (a - i);
        Y %= MOD;
    }
    return X * (inv_num(Y)) % MOD;
}
int main()
{
    ll w, h;cin >> w >> h;
    w--;h--;
    cout << COM(w+h,w) << endl;
}