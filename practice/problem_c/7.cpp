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
vector<vector<int>> dist;
int dx[] = {-1,1,0,0};
int dy[] = {0,0,1,-1};
int row, col;
void bfs(int sx,int sy)
{
    dist[sx][sy] = 0;
    queue<P> q;
    q.push(P(sx,sy));
    while(!q.empty())
    {
        int x,y;x = q.front().first;y = q.front().second;
        q.pop();
        rep(i,4)
        {
            int nx = x+dx[i];
            int ny = y+dy[i];
            if(maze[nx][ny]=='#' || nx > row-1 || ny > col-1)
            {
                continue;
            }
            if(dist[nx][ny]==-1)
            {
                dist[nx][ny]= dist[x][y]+1;
                q.push(P(nx,ny));
            }
        }
    }    
}

int main()
{
    cin >> row >> col;
    dist.resize(row);
    rep(i,row)dist[i].resize(col);
    rep(i,row)
    {
        rep(j,col)
        {
            dist[i][j]=-1;
        }
    }
    
    int sx,sy,gx,gy;cin >> sx >> sy >> gx >> gy;
    sx--;sy--;gx--;gy--;

    rep(i,row)
    {
        string temp;cin >> temp;
        maze.push_back(temp);
    }

    bfs(sx,sy);
    cout << dist[gx][gy] << endl;

}