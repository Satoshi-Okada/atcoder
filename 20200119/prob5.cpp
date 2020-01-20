#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define PI 3.14159265358979323846
#define sz(x) ((int)(x).size())

const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;
template <typename T>
T lcm(T x, T y)
{
    T xy = x * y;
    if (x < y)
    {
        swap(x, y);
    }
    T r;
    r = x % y;
    while (r != 0)
    {
        x = y;
        y = r;
        r = x % y;
    }
    return xy / y;
};
int main()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n)
    {
        cin >> a[i];
    }
    ll num = 1;
    for (int i = 0; i < n; i++)
    {
        num = lcm(num, a[i]);
    }
    ll ans = 0;

    rep(i, n)
    {
        ans = (ans + num / a[i]) % MOD;
    }
    cout << ans << endl;
}
