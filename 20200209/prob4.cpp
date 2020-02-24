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
    vector<double> p(n);
    rep(i,n)
    {
        cin >> p[i];
    }
    double ans = 0;

    vector<double> exp(n);
    rep(i,n)
    {
        exp[i] = (1+p[i])/2;
    }
    rep(i,k)
    {
        ans+=exp[i];
    }
    double temp = ans;
    for (int i = 0; i < n-k; i++)
    {
        temp = temp-exp[i]+exp[i+k];
        ans = max(ans,temp);
    }
    cout << setprecision(11) << ans << endl;
}