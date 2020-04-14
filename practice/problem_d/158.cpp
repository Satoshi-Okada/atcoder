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
    string s;
    cin >> s;
    int q;
    cin >> q;
    deque<char> ans;
    for (auto u : s)
    {
        ans.push_back(u);
    }
    
    int flag = 0;
    vector<int> t(q);
    vector<int> f(q);
    vector<char> c(q);
    rep(i,q)
    {
        cin >> t[i];
        if (t[i]==2)
        {
            cin >> f[i] >> c[i];
        }
    }
    rep(i,q)
    {
        if (t[i]==1)
        {
            flag = (flag+1)%2;
        }
        else
        {
            if (flag == 0)
            {
                if (f[i]==1)
                {
                    ans.push_front(c[i]);
                }else
                {
                    ans.push_back(c[i]);
                }
            }else
            {
                if (f[i]== 2)
                {
                    ans.push_front(c[i]);
                }
                else
                {
                    ans.push_back(c[i]);
                }
            }
        }
    }
    if (flag == 1)
    {
        reverse(ans.begin(), ans.end());
    }
    for (auto u : ans)
    {
        cout << u;
    }
    cout << endl;
    
}