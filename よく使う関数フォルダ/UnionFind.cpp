//UnionFind
// グラフを保持する必要はない。このままはっつけていける
// 計算量はほぼ定数とみなせる
struct UnionFind
{
    vector<int> d;
    UnionFind(int n = 0) : d(n, -1) {}
    int root(int x)
    {
        if (d[x] < 0)
            return x;
        return d[x] = root(d[x]);
    }
    // 辺情報から2点をくっつける
    bool unite(int x, int y)
    {
        x = root(x);
        y = root(y);
        if (x == y)
        {
            return false;
        }
        if (-d[x] < -d[y])
            swap(x, y); //y.size()が小でx.size()が大にしておきたい
        d[x] += d[y];
        d[y] = x;
        return true;
    }
    bool same(int x, int y) { return root(x) == root(y); }
    int size(int x) { return -d[root(x)]; }
};
//
// 宣言する時はUnionFind uf(ノード数)
// ノードは0インデックス
