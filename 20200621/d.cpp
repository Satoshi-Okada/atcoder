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
int counter[100005];
int main()
{
    ll n;cin >> n;
    vector<ll> a(n);rep(i,n) cin >> a[i];
    ll q; cin >> q;
    vector<ll> b(q);
    vector<ll> c(q);
    rep(i,q)cin >> b[i] >> c[i];
    ll sum = 0;
    rep(i,n)
    {
        counter[a[i]]++;
        sum += a[i];
    }
    rep(i,q)
    {
        counter[c[i]] += counter[b[i]];
        sum = sum-counter[b[i]]*b[i]+counter[b[i]]*c[i];
        counter[b[i]]= 0;
        cout << sum << endl;
    }


}