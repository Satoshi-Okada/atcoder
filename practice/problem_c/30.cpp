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
    int n,m; cin >> n >> m;
    ll x,y;cin >> x >> y;
    vector<ll> a(n);rep(i,n)cin >> a[i];
    vector<ll> b(m);rep(i,m)cin >> b[i];
    ll a_time = 0;
    ll b_time;
    ll counter = 0;
    while(true)
    {
        if (lower_bound(a.begin(), a.end(), a_time) - a.begin()<=n-1)
        {
            b_time = a[lower_bound(a.begin(), a.end(), a_time) - a.begin()] + x;
        }
        else
        {
            break;
        }
        if (lower_bound(b.begin(), b.end(), b_time) - b.begin()<=m-1)
        {
            a_time = b[lower_bound(b.begin(), b.end(), b_time) - b.begin()] + y;
        }
        else
        {
            break;
        } 
        // cout << a_time << " " << b_time << endl; 
        counter++;
    }
    cout << counter << endl;

}