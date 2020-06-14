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
ll pattern[105];
int dist[105];
bool visited[105];
vector<int> graph[105];
void bfs(int p)
{
    queue<int> q;
    q.push(p);
    dist[p] = 0;
    pattern[p] = 1;
    while(!q.empty())
    {
        int parent = q.front();
        q.pop();
        for(auto i: graph[parent])
        {
            if(dist[parent]+1 < dist[i])
            {
                dist[i] = dist[parent]+1;
                pattern[i] += pattern[parent];
                pattern[i] %= MOD;
                q.push(i);
            }else if (dist[parent]+1 == dist[i]) 
            {
                pattern[i] += pattern[parent];
                pattern[i]%=MOD;
            }
            
        }
    }
}



int main()
{
    int n;cin >> n;
    int a,b;cin >> a>> b;
    --a;--b;
    int m;cin >> m;
    rep(i,m)
    {
        int from, to;cin >> from >> to;
        --from; --to;
        graph[from].push_back(to);
        graph[to].push_back(from);
    }

    rep(i, 105)dist[i] = INF;
    bfs(a);
    cout << pattern[b] << endl;
}