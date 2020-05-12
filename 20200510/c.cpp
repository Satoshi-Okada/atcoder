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
    int n,m,x;cin >> n >> m >> x;
    vector<vector<int> > books(n, vector<int>(m));
    vector<int> c(n);
    rep(i,n)
    {
        cin >> c[i];
        rep(j,m)cin >> books[i][j];
    }
    
    int counter = 1<<n;
    int mn = INF;
    int flag = 0;
    rep(i,counter)
    {
        int price = 0;
        vector<int> skills(m);
        rep(i, m) skills[i] = 0;
        rep(j,n)
        {
            if(i & (1<<j))
            {
                price += c[j];
                rep(k,m)
                {
                    skills[k] += books[j][k];
                }
            }
        }
        bool result = true;
        rep(l,m)
        {
            if(skills[l]<x)
            {
                result = false;
                break;
            }
        }
        if(result)
        {
            mn = min(mn, price);
            flag = 1;
        }
    }
    if(flag == 0)
    {
        cout << -1 << endl;
        return 0;
    }
    cout << mn << endl;
}