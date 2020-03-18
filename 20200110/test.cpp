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

ll gcd(ll a, ll b)
{
    if (a < b)
        swap(a, b);
    if (a % b == 0)
        return b;
    return gcd(a % b, b);
}
ll lcm(ll a, ll b)
{
    return a / gcd(a, b) * b;
}

int main()
{
    int n;
    ll m;
    cin >> n >> m;
    vector<ll> vc(n);

    rep(i, n)
    {
        cin >> vc[i];
    }
    ll temp = 1;
    for (int i = 0; i < n; i++)
    {
        temp = lcm(vc[i], temp);
    }
    cout << temp << endl;
}