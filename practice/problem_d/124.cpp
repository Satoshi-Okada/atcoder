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

struct cake
{
    ll d;
    int candle;
};

bool asc(const cake &left, const cake &right)
{
    return left.d == right.d ? left.candle < right.candle : left.d > right.d;
}

int main()
{
    int x, y, z, k;
    cin >> x >> y >> z >> k;
    vector<ll> a;
    vector<ll> b;
    vector<ll> c;

    ll deli;
    rep(i, x)
    {
        cin >> deli;
        a.push_back(deli);
    }
    sort(a.begin(), a.end(), greater<ll>());
    rep(i, y)
    {
        cin >> deli;
        b.push_back(deli);
    }
    sort(b.begin(), b.end(), greater<ll>());

    rep(i, z)
    {
        cin >> deli;
        c.push_back(deli);
    }
    sort(c.begin(), c.end(), greater<ll>());

    vector<ll> ans;

    rep(i, x)
    {
        rep(j, y)
        {
            rep(l, z)
            {
                if ((i + 1) * (j + 1) * (l + 1) <= k)
                {
                    ans.push_back(a[i] + b[j] + c[l]);
                }
                else
                {
                    break;
                }
            }
        }
    }
    sort(ans.begin(), ans.end(), greater<ll>());
    rep(i, k)
    {
        cout << ans[i] << endl;
    }
}