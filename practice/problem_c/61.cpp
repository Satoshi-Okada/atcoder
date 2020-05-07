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
    ll k;
    cin >> n >> k;
    vector<P> pairs(n);
    rep(i,n)
    {
        cin >> pairs[i].first >> pairs[i].second;
    }
    sort(pairs.begin(),pairs.end());
    
    for (auto s : pairs)
    {
        k -= (ll)s.second;
        if(k<=0)
        {
            cout << s.first << endl;
            return 0;
        }
    }
    
}