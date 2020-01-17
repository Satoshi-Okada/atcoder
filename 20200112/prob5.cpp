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
int main()
{
    int n, k;
    vector<ll> vc(n);

    rep(i, n)
    {
        cin >> vc[i];
    }
    sort(vc.begin(), vc.end());
    int i, j;
    ll ans = 0;

    for (i = 0; i < n - k; i++)
    {
        for (j = n - 1; j > n - k; j--)
        {
        }
    }
}