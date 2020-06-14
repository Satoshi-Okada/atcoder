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

vector<int> tenbo[100005];
int h[100005];
int main()
{
    int n,m;cin >> n >>m;
    rep(i,n)cin >> h[i];
    rep(i,m)
    {
        int a,b;cin >> a >> b;
        --a;--b;
        tenbo[a].push_back(b);
        tenbo[b].push_back(a);
    }
    int counter = 0;
    rep(i,n)
    {
        bool win = true;
        for(auto r: tenbo[i])
        {
            if(h[i]<=h[r])win = false;
        }
        if(win)counter++;
    }
    cout << counter << endl;
}