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
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> w(n,0);
    vector<int> e(n,0);
    for (int i = 0; i < n-1; i++)
    {
        w[i+1] = w[i];
        if (s[i]=='W')
        {
            w[i+1] = w[i+1]+1;
        }
    }
    for (int i = n-1; i > 0; i--)
    {
        e[i-1] = e[i];
        if (s[i] == 'E')
        {
            e[i-1] = e[i-1]+1;
        }
    }
    int ans = INF;
    //for (auto &&i : e)cout << i;
    //cout << endl;
    //for (auto &&i : w)cout << i;
    //cout << endl;
    

    rep(i,n)
    {
       ans = min(ans, e[i]+w[i]); 
    }
    cout << ans << endl;
    
}