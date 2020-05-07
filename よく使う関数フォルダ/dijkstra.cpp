#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> P;
#define ll long long
#define ld long double
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define PI 3.14159265358979323846
#define sz(x) ((int)(x).size())
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)

const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;
//グラフ firstがedgeの重さ、secondがto
vector<P> graph[100005];
//キュー firstが現時点での最短距離、secondがv_num
priority_queue<P, vector<P>, greater<P>> q;
//始点からの距離
int dist[100005];

//始点rのみ指定
void dijkstra(int r)
{
    q.push(P(0, r));
    dist[r] = 0;
    while (!q.empty())
    {
        P p = q.top();
        int v = p.second;
        q.pop();
        if (dist[v] < p.first) continue; //こうすることで同一ノードの古い(重複する)データは捨てられる。
        for (auto &i : graph[v])
        {
            int w, to;
            w = i.first;
            to = i.second;
            if (dist[to] > dist[v] + w)
            {
                dist[to] = dist[v] + w;
                q.push(P(dist[to], to));
            }
        }
    }
}
int main()
{
    int v, e, r;
    cin >> v >> e >> r;
    rep(i, 100005) dist[i] = INF;

    rep(i, e)
    {
        int s, t, d;
        cin >> s >> t >> d;
        graph[s].push_back(P(d, t));
    }
    dijkstra(r);
    rep(i, v)
    {
        if (dist[i] != INF)
        {
            cout << dist[i] << endl;
            continue;
        }
        cout << "INF" << endl;
    }
}