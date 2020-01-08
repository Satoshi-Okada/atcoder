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

vector<pair<ll, int>> vc;

bool compare_by_first(pair<ll, int> a, pair<ll, int> b)
{
    return a.first < b.first;
}

int main()
{
    int n, m;
    cin >> n >> m;

    rep(i, n)
    {
        ll a;
        int b;
        cin >> a;
        cin >> b;
        pair<ll, int> mypair;
        mypair.first = a;
        mypair.second = b;
        vc.push_back(mypair);
    }
    sort(vc.begin(), vc.end(), compare_by_first);

    int counter = 0;
    ll ans = 0;

    for (auto &e : vc)
    {
        if (counter + e.second <= m)
        {
            ans += e.second * e.first;
            counter += e.second;
        }
        else
        {
            int temp = m - counter;
            ans += e.first * temp;
            break;
        }
    }
    cout << ans << endl;
}