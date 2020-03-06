#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define PI 3.14159265358979323846
#define sz(x) ((int)(x).size())

const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

struct UnionFind
{
    vector<int> d;
    UnionFind(int n=0): d(n,-1) {}
    int root(int x)
    {
        if(d[x]<0) return x;
        return d[x] = root(d[x]);
    }
    bool unite(int x, int y)
    {
        x = root(x); y = root(y);
        if (x==y)
        {
            return false;
        }
        if (-d[x] < -d[y]) swap(x,y); //y.size()が小でx.size()が大にしておきたい
        d[x] += d[y];
        d[y] = x;
        return true;
    }
    bool same(int x, int y){return root(x)==root(y);}
    int size(int x){return -d[root(x)];}
};

int deg[100005];
vector<int> to[100005];

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    UnionFind uf(n);
    rep(i,m)
    {
        int a,b;
        cin >> a  >> b;
        --a; --b;
        deg[a]++; deg[b]++;
        uf.unite(a,b);
    }
    rep(i,k)
    {
        int a, b;
        cin >>  a >> b;
        --a; --b;
        to[a].push_back(b);
        to[b].push_back(a);
    }

    rep(i,n)
    {
        int ans = uf.size(i)-1-deg[i];
        for(int u: to[i])
        {
            if (uf.same(i,u)) --ans;
        }
        cout << ans << ' ';
    }
    cout << endl;
}