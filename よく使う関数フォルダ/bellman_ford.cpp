// 計算量O(|v||e|)
struct edge
{
    int from;
    int to;
    int cost;
};
int v, e, r; //rが始点
int dist[1005];
// グラフとして持つのではなく辺の集合を持つ
vector<edge> edges;
//負閉路判定、到達不可能性判定もいれた。負閉路あり->false なし->true
bool bellman_ford()
{
    dist[r] = 0;
    //最初のループはnegative loopの判定のため。別にwhileでも良い
    for (int count = 0; count < v; count++)
    {
        // 全edgeを舐める
        for (int i = 0; i < e; i++)
        {
            // dist[from]がINFなら更新しない->到達不可能性を判断できる
            if (dist[edges[i].from] != INF)
            {
                if (dist[edges[i].from] + edges[i].cost < dist[edges[i].to])
                {
                    dist[edges[i].to] = dist[edges[i].from] + edges[i].cost;
                    if (count == v - 1)
                    {
                        return false;
                    }
                }
            }
        }
    }
    return true;
}

int main()
{
    cin >> v >> e >> r;

    rep(i, e)
    {
        edge temp;
        cin >> temp.from >> temp.to >> temp.cost; //頂点は0index
        edges.push_back(temp);
    }
    rep(i, 1005)
    {
        dist[i] = INF;
    }
    bool result = bellman_ford();
    if (result)
    {
        rep(i, v)
        {
            if (dist[i] == INF)
            {
                cout << "INF" << endl;
                continue;
            }
            cout << dist[i] << endl;
        }
    }
    else
    {
        cout << "NEGATIVE CYCLE" << endl;
    }
    return 0;
}