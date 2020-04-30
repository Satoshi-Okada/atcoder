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
vector<int> graph[55];

struct UnionFind
{
    vector<int> d;
    UnionFind(int n = 0) : d(n, -1) {}
    int root(int x)
    {
        if (d[x] < 0)return x;
        return d[x] = root(d[x]);
    }
    bool unite(int x, int y)
    {
        x = root(x);
        y = root(y);
        if (x == y)
        {
            return false;
        }
        if (-d[x] < -d[y])swap(x, y); //y.size()が小でx.size()が大にしておきたい
        d[x] += d[y];
        d[y] = x;
        return true;
    }
    bool same(int x, int y) { return root(x) == root(y); }
    int size(int x) { return -d[root(x)]; }
};
int main()
{
    int n,m;
    cin >> n >> m;
    vector<int> a(m);
    vector<int> b(m);
    rep(i,m)
    {
        cin >> a[i] >> b[i];
        a[i]--;
        b[i]--;
    }
    int ans = 0;
    rep(i,m)
    {
        UnionFind uf(n);
        for (int j = 0; j < m; j++)
        {
            if(i==j)continue;
            uf.unite(a[j],b[j]);
        }
        if(uf.size(0) != n)ans++;
    }
    cout << ans << endl;

}