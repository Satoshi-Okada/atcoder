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
    
    rep(i, n) cin >> a[i];
    rep(i,n) cin >> b[i];
    rep(i, n) cin >> c[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());
    int b_index = 0;
    int c_index = 0;

    vector<int> c_counter(n);
    rep(i,n)
    {
        c_counter[i] = 0;
    }
    rep(i,n)
    {
        
        for (; c[c_index]<=b[i] && c_index < n; c_index++)
        {
            continue;
        }
        c_counter[i] = n-c_index;
    }

    vector<ll> b_counter(n);
    ll temp = 0;
    for (int i = n-1; i >=0; i--)
    {
        temp += (ll)c_counter[i];
        b_counter[i] = temp;
    }
    ll ans = 0;

    rep(i, n)
    {
        for (; b[b_index] <= a[i] && b_index < n; b_index++)
        {
            continue;
        }
        if(b_index == n)continue;
        ans += b_counter[b_index];
    }
    
    

    cout << ans << endl;

}