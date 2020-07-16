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
int n;
ll a, b;
vector<ll> h;
bool enough(ll temp)
{
    ll counter = 0;
    rep(i,n)
    {
        ll rm = h[i]-temp*b;
        if(rm>0)
        {
            counter += (rm-1)/(a-b)+1;
        }
    }
    if(counter<=temp)
    {
        return true;
    }
    return false;
}

ll bs(ll limit)
{
    ll mx,mn;
    mx = limit;
    mn = 0;
    ll med = (mn+mx)/2;
    while(mx-mn > 1)
    {
        if (enough(med))
        {
            mx = med;
            med = (mn + med) / 2;
            
        }else
        {
            mn = med;
            med = (med + mx)/2;
        }
    }
    return mx; 
}

int main()
{
    cin >> n >> a >> b;
    h.resize(n);
    ll hmax = -1;
    rep(i,n)
    {
        cin >> h[i];
        hmax = max(hmax, h[i]);
    }
    ll limit = (hmax-1)/b+1;
    cout << bs(limit) << endl;
    // cout << enough(2) << endl;
}