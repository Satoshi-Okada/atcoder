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

int num[5];
vector<int> sum;

void dfs(int counter, int before, vector<int> vc)
{
    if(counter == 3)
    {
        int t_sum = 0;
        rep(i,3)
        {
            t_sum += vc[i];
        }
        sum.push_back(t_sum);
    }
    int mx = -1;
    for (int i = before + 1; i < 5; i++)
    {
        vc[counter] = num[i];
        dfs(counter + 1, i, vc);
    }
}
int main()
{
    rep(i,5)cin >> num[i];
    vector<int> vc(3);
    dfs(0, -1, vc);
    sort(sum.begin(),sum.end(),greater<int>());
    cout << sum[2] << endl;

}