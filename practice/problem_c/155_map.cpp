#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define PI 3.14159265358979323846
#define sz(x) ((int)(x).size())

const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;
int main()
{
    int n;
    cin >> n;
    map<string, int> mp;
    rep(i,n)
    {
        string s;
        cin >> s;
        mp[s]++;
    }
    int mx= 0;
    for(auto p: mp)mx = max(mx, p.second);
    for(auto p : mp)
    {
        if(p.second == mx) cout << p.first << endl;
    } 
    return 0;
}