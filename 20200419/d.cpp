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

template <class T>
T inv_num(T num)
{
    return PowMod(num, MOD - 2);
}
template <class T>
T COM(T n, T a)
{
    T X, Y;
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
    ll n,k;
    cin >> n >> k;
    ll ans = 0;
    ll mn,mx;
    for (ll i = k; i <=n+1; i++)
    {
        mn = (0+i-1)*i/2;
        mx = (n+n-i+1)*i/2;
        //cout << mn << " " << mx << endl;
        ans += (mx-mn)%MOD+1;
        ans %= MOD;
    }
    cout << ans << endl;
}