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
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> vc(m);
    rep(i, m)
    {
        cin >> vc[i].first >> vc[i].second;
    }

    rep(x, 1000)
    {
        int keta = 1;
        int nx = x / 10;
        vector<int> d;
        d.push_back(x % 10);
        while (nx)
        {
            keta++;
            d.push_back(nx % 10);
            nx /= 10;
        }
        reverse(d.begin(), d.end());
        if (keta != n)continue;
        bool ok = true;
        rep(i, m)
        {
            if (d[vc[i].first-1] != vc[i].second)ok = false;
        }
        if (ok)
        {
            cout << x << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}