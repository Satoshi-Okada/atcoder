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
vector<int> rl[15];
int dist[15];

void bfs(int start)
{
    dist[start] = 0;
    vector<int> vc;
    int counter =0;
    for(auto i: rl[start])
    {
        if(dist[i] == INF) dist[i] = 1;
        for(auto j : rl[i])
        {
            vc.push_back(j);
        }
    }
    for(auto i: vc)
    {
        if(dist[i] == INF)
        {
            counter++;
            dist[i]= 2;
        }
    }
    cout << counter << endl;
}
int main()
{
    int n,m; cin >> n >> m;
    rep(i,m)
    {
        int hoge, fuga;cin >> hoge >> fuga;
        --hoge; --fuga;
        rl[hoge].push_back(fuga);
        rl[fuga].push_back(hoge);
    }

    rep(i,n)
    {
        rep(j, 15)dist[j] = INF;
        bfs(i);
    }

}