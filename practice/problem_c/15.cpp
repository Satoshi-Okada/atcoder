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

vector<vector<int> > t;
int n, k;

bool dfs(int row, vector<int> rec)
{
    if(row == n)
    {
        int ret = 0;
        for (auto &&i : rec)
        {
            ret = ret^i;
        }
        if(ret == 0) return false;
        else return true;
    }
    int flag = 0;
    rep(i,k)
    {
        rec[row] = t[row][i];
        if(!dfs(row+1, rec))
        {
            return false;
        }
    }
    return true;

}


int main()
{
    cin >> n >> k;
    t.resize(n);
    rep(i,n)t[i].resize(k);
    rep(i,n)
    {
        rep(j,k)
        {
            cin >> t[i][j];
        }
    }
    // cout<< "YES" << endl;
    vector<int> rec(n);
    int row = 0;
    if(dfs(row, rec))
    {
        cout << "Nothing" << endl;
        return 0;
    }else
    {
        cout << "Found" << endl;
        return 0;
    }
    

    
}