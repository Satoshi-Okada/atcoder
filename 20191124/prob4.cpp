#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define MOD 1000000007
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define PI 3.14159265358979323846
#define sz(x) ((int)(x).size())

struct edge
{
    int to;
    int id;
};

vector<vector<edge> > g;
vector<int> ans;

void dfs(int v,int c = -1,int p = -1)
{
    int k=1;
    rep(i,g[v].size())
    {
        int to = g[v][i].to, ei = g[v][i].id;
        if (to == p)
        {
            continue;
        }
        if (k==c)
        {   
            k++;
        }
        ans[ei] = k;
        k++;
        dfs(to,ans[ei],v);
    }    
}

int main()
{
    int n;
    cin >> n;
    g.resize(n);
    ans.resize(n-1);
    rep(i,n-1)
    {
        int a,b;
        cin >> a >> b;
        a--;b--;
        g[a].push_back((edge){b,i});
        g[b].push_back((edge){a,i});
    }
    dfs(0);
    int mx = 0;
    rep(i,n)
    {
        mx = max(mx,sz(g[i]));
    }
    cout << mx << endl;
    rep(i,n-1)
    {
        cout << ans[i] << endl;
    }

}