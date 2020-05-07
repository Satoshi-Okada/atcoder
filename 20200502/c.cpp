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
int dp[10][10];
int main()
{
    int n,m,q;
    cin >> n >> m >> q;
    vector<tuple> tuples;
    rep(i,q)
    {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        auto f = make_tuple(a,b,c,d)
        tuples.push_back(f);
    }
    sort(tuples.begin(), tuples.end())
    rep(i,q)
    {
        if()
        chmax(dp[get<1>(tuples[i])][], dp[get<0>(tuples[i])][]+get<3>(tuples[i]);
    }
    
    

}