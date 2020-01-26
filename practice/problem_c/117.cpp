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
    int n,m;
    cin >> n >> m;
    vector<int> x(m);
    rep(i,m)
    {
        cin >> x[i];
    }
    sort(x.begin(),x.end());
    int range = x[m-1]-x[0];
    vector<int> dist(m-1);
    rep(i,m-1)
    {
        dist[i] = x[i+1]-x[i];
    }
    sort(dist.begin(),dist.end(),greater<int>());
    int sub = 0;
    int mn;
    mn = min(m-1,n-1);
    rep(i,mn)
    {
        sub += dist[i];
    }
    cout << range-sub << endl;
}