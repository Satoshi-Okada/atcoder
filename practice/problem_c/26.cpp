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
vector<int> graph[25];

int dfs(int x)
{
    if(graph[x].empty())
    {
        return 1;
    }
    int mn,mx;mn = INF; mx = -1;
    for(auto i: graph[x])
    {
        int temp = dfs(i);
        mn = min(mn,temp);
        mx = max(mx,temp);
    }
    return (mn+mx)+1;
}
int main()
{
    int n;cin >> n;
    vector<int> b(n+1);
    for (int i = 2; i <=n; i++)
    {
        cin >> b[i];
        graph[b[i]].push_back(i);
    }
    cout << dfs(1) << endl;
    
}