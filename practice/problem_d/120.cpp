#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define PI 3.14159265358979323846
#define sz(x) ((int)(x).size())


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

ll deg_size(int a)
{
    ll ans;
    ans = (ll) (a - 1) * (ll)a / 2;
    return ans;
}

int main()
{
    int n,m;
    cin >> n >> m;
    UnionFind uf(n);
    vector<int> A(m);
    vector<int> B(m);
    vector<ll> free(m+1);
    free[m] = 0;
    rep(i,m)
    {
        int a, b;
        cin >> a >> b;
        --a;
        --b;
        A[i] = a;
        B[i] = b;

    }
    for (int i = m-1; i >=0; i--)
    {
        free[i] = free[i+1];
        ll sub1, sub2;
        sub1 = deg_size(uf.size(A[i]));
        sub2 = deg_size(uf.size(B[i]));
        bool ok = uf.unite(A[i], B[i]);
        if (ok)
        {
            free[i]= free[i] + deg_size(uf.size(A[i])) - sub1 - sub2; 
        }
    }
    ll ans;
    ans = (ll)n*(n-1)/2;
    for (int i = 1; i < m+1; i++)
    {
        cout << ans - free[i] << endl;
    }
    
}