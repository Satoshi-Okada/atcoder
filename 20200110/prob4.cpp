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
        swap(x, y);
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
    ll m;
    cin >> n >> m;
    vector<ll> vc(n);

    rep(i, n)
    {
        cin >> vc[i];
    }
    vector<int> counter(n);
    rep(i, n)
    {
        int num = 0;
        int a;
        a = vc[i];
        while (a % 2 == 0)
        {
            a = a / 2;
            num++;
        }
        counter[i] = num;
    }
    rep(i, n - 1)
    {
        if (counter[i] != counter[i + 1])
        {
            cout << 0 << endl;
            return 0;
        }
    }

    ll temp = 1;
    for (int i = 0; i < n; i++)
    {
        temp = lcm(vc[i], temp);
    }
    ll ans = 0;
    ll p = 0;
    while (temp * p + (temp / 2) <= m)
    {
        p++;
        ans++;
    }
    cout << ans << endl;
}