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
int main()
{
    int n,k;
    cin >> n >> k;

    vector<ll> h(n);
    rep(i,n)
    {
        cin >> h[i];
    }
    sort(h.begin(),h.end(),greater<int>());
    ll sum = 0;
    for (int i = k; i < n; i++)
    {
        sum += h[i];
    }
    cout << sum << endl;
    

}