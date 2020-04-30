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
vector<int> graph[200005];
int main()
{
    int n,m;
    cin >> n >> m;
    int a, b;
    rep(i,m)
    {   
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    queue<int> dest;
    for (auto i : graph[1])
    {
        dest.push(i);
    }
    queue<int> dest2;
    while(!dest.empty())
    {
        int s = dest.front();
        dest.pop();
        for (auto i : graph[s])
        {
            dest2.push(i);
        }
    }
    while (!dest2.empty())
    {
        int s = dest2.front();
        dest2.pop();
        if(s==n)
        {
            cout << "POSSIBLE" << endl;
            return 0;
        }
    }
    cout << "IMPOSSIBLE" << endl;
}