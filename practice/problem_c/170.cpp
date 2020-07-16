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
    int x,n;cin >> x >> n;
    vector<int> p(n);rep(i,n)cin >> p[i];
    rep(i,105)
    {
        int l,s;
        l = x+i;
        s = x-i;
        bool flag = true;
        for (auto &&j : p)
        {
            if(s==j)
            {
                flag = false;
                break;
            }

        }
        if(flag)
        {
            cout << s << endl;
            return 0;
        }else
        {
            flag = true;
            for (auto &&j : p)
            {
                if (l == j)
                {
                    flag = false;
                    break;
                }
                
            }
            if(flag)
            {
                cout << l << endl;
                return 0;
            }
        }
        
        
    }
}