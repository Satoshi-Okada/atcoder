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
const ll MOD = 1e9 + 7;
const ll LINF = 1e18;
ll twopow[200005];
//繰り返し二乗法。雰囲気だけ。これ使う時はMODをllとかにしとかないとしんどい
int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return a / gcd(a, b) * b; }
ll PowMod(ll n, ll m)
{
    if (m == 0)
    {
        return (ll)1;
    }
    if (m % 2 == 0)
    {
        ll temp = PowMod(n, m / 2);
        return temp * temp % MOD;
    }
    return n * PowMod(n, m - 1) % MOD;
}
int main()
{
    int n; cin >> n;
    twopow[0] = 1;
    for (int i = 1; i < 200005; i++)
    {
        twopow[i] = twopow[i-1]*2;
        twopow[i] %= MOD;
    }
    
    map<P, int>mp;
    vector<int> a(n);
    vector<int> b(n);
    rep(i,n)
    {
        cin >> a[i] >> b[i];
        int g= gcd(a[i], b[i]);
        mp[P(a[i]/g, b[i]/g)]++;
    }
    ll ans = twopow[n]-1;
    ll sub = 0;
    for(auto obj: mp)
    {
        cout << obj.first.first << " "  << obj.first.second << " " << obj.second << endl;
    }
    for(auto obj: mp)
    {
        ll temp = 0;
        int hoge = 0;
        int fuga =0;
        int flag = 0;
       if(mp.count(P(obj.first.second, (-1) * obj.first.first)))
       {
            fuga += mp[obj.first];
            hoge += mp[P(obj.first.second, (-1) * obj.first.first)];
            mp.erase(P(obj.first.second, (-1) * obj.first.first));
            flag ++;
       }
       if (mp.count(P((-1)*obj.first.second, obj.first.first)))
       {
            if(flag == 0)fuga += mp[obj.first];
            hoge += mp[P((-1) * obj.first.second, obj.first.first)];
            mp.erase(P((-1)*obj.first.second, obj.first.first));
       }
       temp = twopow[n - hoge - fuga] * (twopow[hoge] - 1) % MOD;
       temp = temp * (twopow[fuga] - 1) % MOD;
       sub += temp;
       sub %= MOD;
       mp.erase(obj.first);
    }
    ans -=sub;
    ans %= MOD;
    cout << ans << endl;
}