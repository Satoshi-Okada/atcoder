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

vector<string> maze;
vector<vector<int> > dist;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
int h, w, t;

int dijkstra(P start)
{
    priority_queue<P> q;
    q.push(start);
    while(!q.empty())
    {
        P p = q.top();
        int x= p.first; int y = p.second;
        int nx,ny;
        rep(i,4)
        {
            nx = x+dx[i];ny = y+dy[i];
            int add;
            if(nx>=0 && ny >=0 && nx <=w-1 && ny <= h-1)
            {
                if (maze[nx][ny] == '#')
                {
                    add = 2;
                }else
                {
                    add = 1;
                }
                
            }
            if(dist[nx][ny]>dist[x][y]+add)
            {
                dist[nx][ny] = dist[x][y]+add;
            }
            
        }
    }
}

int main()
{
    cin >> h >> w >> t;
    maze.reserve(h);rep(i,h)cin >> maze[i];
    dist.resize(h);
    rep(i,w)dist[i].resize(w);
    int sharp = 0;

}