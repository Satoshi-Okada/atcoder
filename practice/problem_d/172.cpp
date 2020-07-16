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
    ll n;cin >> n;
    //vector<bool> isprime(n, true);
    vector<ll> counter(n+1, 0);
    ll ans = 0;
    //isprime[0] = false;
    //isprime[1] = false;
    for (ll i = 1; i <= n ; i++)
    {
        for (ll j = 1; i*j <=n; j++)
        {
            //if(i!=1)isprime[i*j]=false;
            counter[i*j]++;
        }
        
    }
    
    for (ll i = 1; i <=n; i++)
    {
        ans += i*(counter[i]);
    }
    cout << ans << endl;
    // cout << counter[n] << endl;
    
    

}