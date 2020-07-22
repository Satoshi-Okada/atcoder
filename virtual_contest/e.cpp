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
#define all(x) (x).begin(),(x).end()

const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;
int main()
{
    int l;cin >> l;
    vector<ll> b(l);rep(i,l)cin >> b[i];
    ll temp = 0;
    rep(i,l)
    {
        temp ^= b[i];
    }
    if(temp!=0)
    {
        cout << -1 << endl;
        return 0;
    }
    vector<ll> ans(l,0);
    rep(i,l)
    {
        if(i==0)continue;
        ans[i] = b[i-1]^ans[i-1];
    }
    rep(i,l)
    {
        cout << ans[i] << endl;
    }
}