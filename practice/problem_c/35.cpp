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
    ll n,q; cin >> n >> q;
    vector<ll> l(q);
    vector<ll> r(q);
    rep(i,q)
    {
        cin >> l[i] >> r[i];
        l[i]--;r[i]--;
    }
    vector<ll> osero(n+1);rep(i,n+1) osero[i] = 0;;
    rep(i,q)
    {
        osero[l[i]]++;
        osero[r[i]+1]--;
    }

    for (int i = 1; i < n+1; i++)
    {
        osero[i] += osero[i-1];
    }
    vector<char> ans(n);
    rep(i,n)
    {
        if(osero[i]%2==0)
        {
            ans[i] = '0';
        }else
        {
            ans[i] = '1';
        }
        
    }
    rep(i,n)
    {
        cout << ans[i];
    }
    cout << endl;
    
}