const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

ll dist[1005][1005];
// 頂点数v, 辺数e
int v, e;

void warshall_floyd()
{
    for (int k = 0; k < v; k++)
    {
        for (int i = 0; i < v; i++)
        {
            for (int j = 0; j < v; j++)
            {
                if (dist[i][k] != LINF && dist[k][j] != LINF)
                    chmin(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
}
// 負閉路あり->false, 負閉路なし->true
bool negative_judge()
{
    // ワーシャルフロイドは所詮DP
    // ループ回しきってdist[i][i]が負になってたら負閉路
    rep(i, v)
    {
        if (dist[i][i] < 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{

    cin >> v >> e;
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            if (i == j)
            {
                dist[i][j] = (ll)0;
                continue;
            }
            dist[i][j] = LINF;
        }
    }
    rep(i, e)
    {
        int from;
        int to;
        ll cost;
        cin >> from >> to >> cost;
        // 2つの頂点が直接接続していたら最短
        dist[from][to] = cost;
    }

    warshall_floyd();
    bool result = negative_judge();
    if (result)
    {
        for (int i = 0; i < v; i++)
        {
            for (int j = 0; j < v; j++)
            {
                if (dist[i][j] == LINF)
                {
                    cout << "INF";
                }
                else
                {
                    cout << dist[i][j];
                }
                if (j != v - 1)
                {
                    cout << " ";
                }
                else
                {
                    cout << endl;
                }
            }
        }
    }
    else
    {
        cout << "NEGATIVE CYCLE" << endl;
    }
}