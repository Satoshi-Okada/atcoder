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

char cand[] = {'a', 'b', 'c'};
vector<string> ans;
void dfs(int num, string s)
{
    if(num==0)
    {
        cout << s << endl;
        return;
    }
    for (int i = 0; i < 3; i++)
    {
        dfs(num-1, s+cand[i]);
    }
    
    
}
int main()
{
    int n;cin >> n;
    dfs(n, "");
    
}