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

template <typename T>
T gcd(T x, T y)
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
    return y;
};


int main()
{
    int n,x;
    cin >> n >> x;
    vector<int> city(n);
    rep(i,n)
    {
        cin >> city[i];
    }
    vector<int> diff(n);
    rep(i,n)
    {
        diff[i] = abs(x-city[i]);
    }
    int ans = diff[0];
    rep(i,n)
    {
       ans = gcd(ans, diff[i]);
    }
    cout << ans << endl;
}
