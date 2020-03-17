#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define PI 3.14159265358979323846
#define sz(x) ((int)(x).size())

const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;
template <class T, class S>

T PowMod(S n, T m)
{
    if (m == 0)
    {
        return 1;
    }
    if (m % 2 == 0)
    {
        T temp = PowMod(n, m / 2);
        return temp * temp % MOD;
    }
    else
    {
        return n*PowMod(n, m - 1) % MOD;
    }
}
ll my_Pow(ll a, ll b)
{
    ll r = 1;
    while (b--)
    {
        r *= (ll)a;
    }
    return r;
}

int main()
{
   int i;
   cin >> i;
   cout << my_Pow(2,0) << endl;
}