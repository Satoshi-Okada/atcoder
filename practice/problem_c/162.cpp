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
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
int main()
{
    ll k;cin >> k;
    ll sum = 0;
    for (ll a = 1; a <=k; a++)
    {
        for (ll b = 1; b <= k; b++)
        {
            for (ll c = 1; c <= k; c++)
            {
                sum += gcd(gcd(a,b),c);
            }
        }
    }
    cout << sum << endl;
    
}