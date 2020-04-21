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
    string s;
    cin >> s;
    vector<int> r;
    vector<int> g;
    vector<int> b;
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='R')r.push_back(i);
        if(s[i]=='G')g.push_back(i);
        if(s[i]=='B')b.push_back(i);
    }
    ll ans = (ll)sz(r) * (ll)sz(g) * (ll)sz(b);
    ll sub = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j+2*i<= n-1; j++)
        {
            if (s[j] != s[j + i] && s[j + i] != s[j + 2 * i] && s[j] != s[j + 2 * i])
            {
                sub++;
            }
            
        }
        
    }
    cout << ans-sub << endl;
}