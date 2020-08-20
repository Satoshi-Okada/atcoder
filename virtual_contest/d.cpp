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
#define all(x) (x).begin(),(x).end()

const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;
int main()
{
    int n;cin >> n;
    int k;cin >> k;
    vector<int> p(n);rep(i,n)
    {
        cin >> p[i];
        p[i]--;
    }

    vector<ll> c(n);rep(i,n)cin >> c[i];

    vector<vector<int> > lps;

    int top, next;
    top = 0;
    next = -1;
    vector<bool> check(n);rep(i,n)check[i] = false;
    rep(i,n)
    {
        if(!check[i])
        {
            top = i;
            vector<int> temp;
            temp.push_back(c[i]);
            next = p[i];
            check[i] = true;
            while(top!=next)
            {
                temp.push_back(c[next]);
                check[next] = true;
                next = p[next];
            }
            lps.push_back(temp);
        }
    }
    vector<ll> lpscore;

    for (auto &&i : lps)
    {
        ll temp = 0;
        for (auto &&j : i)
        {
            temp += lps[j];
        }
        lpscore.push_back(temp);
    }
    for (auto &&i : lps)
    {
        int lsize = sz(i);
        for (int j = 0; j < lsize; j++)
        {
            i.push_back(i[j]);
        }
    }
    
    ll ans = -LINF;

    for(int i = 0; i < sz(lps); i++)
    {
        int lsize = sz(lps[i]);
        // 一周のスコアが負
        if(lpscore[i]<0)
        {
            chmax(ans, )
        }
    }
}