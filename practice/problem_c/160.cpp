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
    int k,n;cin >> k >> n;
    vector<int> a(2*n);
    rep(i,n)
    {
        cin >> a[i];
    }
    int ans = INF;
    rep(i,n)
    {
        if(i==0)
        {
            chmin(ans, k-(k+a[0]-a[n-1]));
            continue;
        }
        chmin(ans, k-(a[i]-a[i-1]));
    }
    
    cout << ans << endl;
}