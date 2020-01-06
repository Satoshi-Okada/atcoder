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
    vector<cake> vc;

    int candle = 1;
    ll deli;
    rep(i, x)
    {
        cin >> deli;
        vc.push_back((cake){deli, candle});
    }
    candle++;
    rep(i, y)
    {
        cin >> deli;
        vc.push_back((cake){deli, candle});
    }
    candle++;
    rep(i, z)
    {
        cin >> deli;
        vc.push_back((cake){deli, candle});
    }

    sort(vc.begin(), vc.end(), asc);
    int ai = 0;
    int bi = 0;
    int ci = 0;
    int index = 0;
    vector<ll> a;
    vector<ll> b;
    vector<ll> c;

    while (ai * bi * ci < k)
    {
        if (vc[index].candle == 1)
        {
            ai++;
            a.push_back(vc[index].d);
        }
        else if (vc[index].candle == 2)
        {
            bi++;
            b.push_back(vc[index].d);
        }
        else
        {
            ci++;
            c.push_back(vc[index].d);
        }
        index++;
    }
    vector<ll> ans;
    int i, j, l;

    for (i = 0; i < ai; i++)
    {
        for (j = 0; j < bi; j++)
        {
            for (l = 0; l < ci; l++)
            {
                ans.push_back(a[i] + b[j] + c[l]);
            }
        }
    }
    sort(ans.begin(), ans.end(), greater<ll>());
    rep(i, k)
    {
        cout << ans[i] << endl;
    }
}