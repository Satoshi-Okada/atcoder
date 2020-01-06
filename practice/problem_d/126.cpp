#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define PI 3.14159265358979323846
#define sz(x) ((int)(x).size())

struct edge
{
    int to;
    ll length;
};

vector<vector<edge>> tree;
vector<int> ans;

void dfs(int v, int p = -1)
{
    for (int i = 0; i < sz(tree[v]); i++)
    {
        int to = tree[v][i].to;
        int l = tree[v][i].length;
        if (to == p)
        {
            continue;
        }

        if (l % 2 == 0)
        {
            ans[to] = ans[v] % 2;
        }
        else
        {
            ans[to] = (ans[v] + 1) % 2;
        }
        dfs(to, v);
    }
}

int main()
{
    int n;
    cin >> n;
    tree.resize(n);
    ans.resize(n);

    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        ll c;
        cin >> a >> b >> c;
        a--;
        b--;
        tree[a].push_back((edge){b, c});
        tree[b].push_back((edge){a, c});
    }
    ans[0] = 1;
    dfs(0);

    rep(i, n)
    {
        cout << ans[i] << endl;
    }
}