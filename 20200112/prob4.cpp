#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define PI 3.14159265358979323846
#define sz(x) ((int)(x).size())

const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

vector<string> maze;
int h, w;
struct node
{
    int r;
    int c;
};

int bfs(int r, int c)
{
    int counter = 0;
    int dist[h][w];
    rep(i, h)
    {
        rep(j, w)
        {
            dist[i][j] = -1;
        }
    }
    queue<node> que;
    que.push((node){r, c});
    while (!que.empty())
    {
        counter++;
        node temp;
        temp = que.front();
        que.pop();
        dist[temp.r][temp.c] = 1;
        if (temp.r == 0)
        {
            if (temp.c != w - 1)
            {
                if (dist[temp.r + 1][temp.c] != 1 && maze[temp.r + 1][temp.c] != '#')
                {
                    que.push((node){temp.r + 1, temp.c});
                }
                if (dist[temp.r][temp.c + 1] != 1 && maze[temp.r][temp.c + 1] != '#')
                {
                    que.push((node){temp.r, temp.c + 1});
                }
                if (dist[temp.r][temp.c - 1] != 1 && maze[temp.r][temp.c - 1] != '#')
                {
                    que.push((node){temp.r - 1, temp.c});
                }
            }
            else
            {
                if (dist[temp.r + 1][temp.c] != 1 && maze[temp.r + 1][temp.c] != '#')
                {
                    que.push((node){temp.r + 1, temp.c});
                }
            }
        }
        else if (temp.r != h - 1)
        {
            if (temp.c == 0)
            {
                if (dist[temp.r - 1][temp.c] != 1 && maze[temp.r - 1][temp.c] != '#')
                {
                    que.push((node){temp.r - 1, temp.c});
                }
                if (dist[temp.r][temp.c + 1] != 1 && maze[temp.r][temp.c + 1] != '#')
                {
                    que.push((node){temp.r, temp.c + 1});
                }
                if (dist[temp.r + 1][temp.c] != 1 && maze[temp.r + 1][temp.c] != '#')
                {
                    que.push((node){temp.r + 1, temp.c});
                }
            }
            else if (temp.c == w - 1)
            {
                if (dist[temp.r - 1][temp.c] != 1 && maze[temp.r - 1][temp.c] != '#')
                {
                    que.push((node){temp.r - 1, temp.c});
                }
                if (dist[temp.r + 1][temp.c] != 1 && maze[temp.r + 1][temp.c] != '#')
                {
                    que.push((node){temp.r + 1, temp.c});
                }
            }
            else
            {
                if (dist[temp.r - 1][temp.c] != 1 && maze[temp.r - 1][temp.c] != '#')
                {
                    que.push((node){temp.r - 1, temp.c});
                }
                if (dist[temp.r][temp.c + 1] != 1 && maze[temp.r][temp.c + 1] != '#')
                {
                    que.push((node){temp.r, temp.c + 1});
                }
                if (dist[temp.r][temp.c - 1] != 1 && maze[temp.r][temp.c - 1] != '#')
                {
                    que.push((node){temp.r, temp.c - 1});
                }
            }
        }
        else
        {
            if (temp.c == 0)
            {
                if (dist[temp.r - 1][temp.c] != 1 && maze[temp.r - 1][temp.c] != '#')
                {
                    que.push((node){temp.r - 1, temp.c});
                }
                if (dist[temp.r][temp.c + 1] != 1 && maze[temp.r][temp.c + 1] != '#')
                {
                    que.push((node){temp.r, temp.c + 1});
                }
            }
            else if (temp.c == w - 1)
            {
                if (dist[temp.r - 1][temp.c] != 1 && maze[temp.r - 1][temp.c] != '#')
                {
                    que.push((node){temp.r - 1, temp.c});
                }
                if (dist[temp.r][temp.c - 1] != 1 && maze[temp.r][temp.c - 1] != '#')
                {
                    que.push((node){temp.r, temp.c - 1});
                }
            }
            else
            {
                if (dist[temp.r - 1][temp.c] != 1 && maze[temp.r - 1][temp.c] != '#')
                {
                    que.push((node){temp.r - 1, temp.c});
                }
                if (dist[temp.r][temp.c + 1] != 1 && maze[temp.r][temp.c + 1] != '#')
                {
                    que.push((node){temp.r, temp.c + 1});
                }
                if (dist[temp.r - 1][temp.c] != 1 && maze[temp.r - 1][temp.c] != '#')
                {
                    que.push((node){temp.r - 1, temp.c});
                }
            }
        }
    }
    return counter;
}

int main()
{

    cin >> h >> w;
    rep(i, h)
    {
        string temp;
        cin >> temp;
        maze.push_back(temp);
    }
    int mx = -1;
    rep(i, h)
    {
        rep(j, w)
        {
            if (maze[i][j] != '#')
            {
                mx = max(mx, bfs(i, j));
            }
        }
    }
    cout << mx << endl;
}