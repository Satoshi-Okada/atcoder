#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define ld long double
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define PI 3.14159265358979323846
#define sz(x) ((int)(x).size())
#define chmin(x,y) x = min(x,y)
#define chmax(x,y) x = max(x,y)
typedef pair<ll, ll> P;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

ll dist[305][305];
vector<P> from_zero;
int main()
{
    int v,e; cin >> v >> e;
    for (int i = 0; i < 305; i++)
    {
        for (int j = 0; j < 305; j++)
        {
            if(i==j)
            {
                dist[i][j] = 0;
                continue;
            }
            dist[i][j]=LINF;
        }
    }
    
    for (ll i = 0; i < e; i++)
    {
        ll from, to, d; cin >> from >> to >> d;
        --from; --to;
       
        if(from==0)
        {
            from_zero.push_back(P(to,d));
            continue;
        }
        if (to == 0)
        {
            from_zero.push_back(P(from, d));
            continue;
        }
        dist[from][to] = d;
        dist[to][from] = d;
    }
    for (int i = 1; i < v; i++)
    {
        for (int j = 1; j < v; j++)
        {
            for (int k = 1; k < v; k++)
            {
                if (dist[j][i] != LINF && dist[i][k] != LINF)chmin(dist[j][k], dist[j][i] + dist[i][k]);
            }
        }
    }
    
    int len = sz(from_zero);
    ll mn = LINF;
    int flag = 0;
    for (int i = 0; i < len; i++)
    {
        for(int j=i+1; j < len; j++)
        {
            if(dist[from_zero[i].first][from_zero[j].first] != LINF)
            {
                // cout << dist[from_zero[i].first][from_zero[j].first] << endl;
                mn = min(dist[from_zero[i].first][from_zero[j].first] + from_zero[i].second + from_zero[j].second, mn);
                flag = 1;
            }
            
        }
    }
    if(flag == 0)
    {
        cout<< -1 << endl;
        return 0;
    }
    cout << mn << endl;
    
}