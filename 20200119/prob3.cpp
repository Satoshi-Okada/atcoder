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
    int n;
    cin >> n;
    vector<int> p(n);
    rep(i, n)
    {
        cin >> p[i];
    }
    int mn = p[0];
    int ans = 0;
    rep(i, n)
    {
        if (mn >= p[i])
        {
            ans++;
        }
        mn = min(mn, p[i]);
    }
    cout << ans << endl;
}