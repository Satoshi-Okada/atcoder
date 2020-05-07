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

ll calc(ll a,ll b, ll x)
{
    return (a*x)/b-a*(x/b);
}

int main()
{
    ll a,b,n;
    cin >> a >> b >> n;
    ll x;
    if(n>=b-1)
    {
        x = b-1;
        cout << calc(a,b,x) << endl;
        return 0;
    }else
    {
        x = n;
        cout << calc(a,b,x) << endl;
        return 0;
    }
}