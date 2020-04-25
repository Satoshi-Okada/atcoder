#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define PI 3.14159265358979323846
#define sz(x) ((int)(x).size())

const int INF = 1e9;
const ll MOD = 1e9 + 7;
const ll LINF = 1e18;

ll PowMod(ll n, ll m)
{
    if (m == 0)
    {
        return 1;
    }
    if (m % 2 == 0)
    {
        ll temp = PowMod(n, m / 2);
        return temp * temp%MOD;
    }
    return n * PowMod(n, m - 1) % MOD;
}


ll inv_num(ll num)
{
    return PowMod(num, MOD-2);
}

ll COM(ll n, ll a)
{
    ll X, Y;
    X = 1;
    Y = 1;
    rep(i, a)
    {
        X *= (n - i) % MOD;
        Y *= (a - i) % MOD;
    }
    return X * (inv_num(Y)) % MOD;
}

int main()
{
    cout << inv_num((ll)2) << endl;
    cout << COM((ll)10,(ll)2) << endl;
}