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


struct hoge
{
    int a;
    int b;
    int diff;
    int score;
};
vector<hoge> c_data;
int dfs(int n, int m,int before,int index, vector<int> vc)
{
    // for(auto i : vc)cout << i;
    // cout << endl;
    if(n==0)
    {
        int sum = 0;
        for(auto i:c_data)
        {
            if(vc[i.b]-vc[i.a]==i.diff)
            {
                sum += i.score;
            }
        }
        return sum;
    }
    int ans = 0;
    for (int i = before; i <= m; i++)
    {
        vc[index] = i;
        ans = max(ans, dfs(n-1,m,i,index+1,vc));
    }
    return ans;
}



int main()
{
    int n,m,q;
    cin >> n >> m >> q;
    
    rep(i,q)
    {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        --a;--b;
        hoge temp;
        temp.a = a;temp.b = b;temp.diff = c;temp.score = d;
        c_data.push_back(temp);
    }
    vector<int> vc(n);
    cout << dfs(n,m,1,0,vc) << endl;
   
}