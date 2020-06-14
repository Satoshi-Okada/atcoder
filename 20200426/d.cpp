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
// const int MOD = 1e9 + 7;
const ll MOD = 2019;
const ll LINF = 1e18;
ll amari[2019];
int main()
{
    string s;
    cin >> s;
    reverse(s.begin(),s.end());
    // あまりの準備l
    int sl = (int)s.length();
    ll ans = 0;
    ll ruiseki = 0;
    amari[ruiseki]++;
    ll tenbeki = 1;
    rep(i,sl)
    {
        ruiseki=(ruiseki + tenbeki*(s[i]-'0'))%MOD;
  
        ans += amari[ruiseki];
        
        amari[ruiseki]++;
        tenbeki = tenbeki*10%MOD;
    }
    cout << ans << endl;
}