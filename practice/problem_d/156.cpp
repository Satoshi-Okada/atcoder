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

const int MAX = 3 * (1e6 + 5) + 5;
//const int MOD = 1000000007;

ll PowMod(ll n,ll m)
{
    ll temp;
    if (m == 0)
    {
        return 1;
    }
    if (m % 2 == 0)
    {
        temp = PowMod(n,m / 2);
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
    ll X=1;
    ll Y=1;

    for (ll i = 0; i < a; i++)
    {
        X = X* (n - i) % MOD;
        Y = Y*(a - i) % MOD;
    }
    //cout << X <<" " <<  Y << endl;
    return X * (inv_num(Y)) % MOD;
}

int main()
{
    ll n,a,b;
    cin >> n >> a >> b;
    ll ans = 0;
    ll two = 2;
    ans = PowMod(two,n);
    //cout << COM(n, a) << endl;
    //cout << COM(n, b) << endl;
    ans = (ans - 1 - COM(n,a)- COM(n,b))%MOD;
    if (ans < 0)
    {
        ans += MOD;
    }
    cout << ans << endl;
}