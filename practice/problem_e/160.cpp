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
    int x,y;
    int a,b,c;
    cin >> x >> y >> a >> b >> c;
    vector<int> p(a);
    vector<int> q(b);
    vector<int> r(c);
    rep(i, a) cin >> p[i];
    rep(i,b) cin >> q[i];
    rep(i, c) cin >> r[i];
    sort(p.begin(), p.end(), greater<int>());
    sort(q.begin(),q.end(), greater<int>());
    sort(r.begin(), r.end(), greater<int>());
    vector<int> temp;
    rep(i,x)
    {
        temp.push_back(p[i]);
    }
    rep(i, y)
    {
        temp.push_back(q[i]);
    }
    for (auto &&i : r)
    {
        temp.push_back(i);
    }
    sort(temp.begin(),temp.end(),greater<int>());
    ll sum= 0;
    rep(i,x+y)
    {
        sum += temp[i];
    }
    cout << sum << endl;
}