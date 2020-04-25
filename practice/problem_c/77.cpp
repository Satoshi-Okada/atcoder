#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> P;
#define ll long long
#define ld long double
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define PI 3.14159265358979323846
#define sz(x) ((int)(x).size())
#define chmin(x,y) x = min(x,y)
#define chmax(x,y) x = max(x,y)

const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);
    sort(a.begin(), a.end());
    sort(b.begin(),b.end());
    sort(c.begin(), c.end());
    rep(i, n) cin >> a[i];
    rep(i,n) cin >> b[i];
    rep(i, n) cin >> c[i];
    int b_index = 0;
    int c_index = 0;
    ll ans = 0;
    rep(i,n)
    {
        
    }
    cout << ans << endl;

}