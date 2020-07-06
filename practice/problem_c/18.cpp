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
    int r,c,k;cin >> r >> c >> k;
    vector<string> s(r);rep(i,r)cin >> s[i];
    vector<vector<P>> zyouge(r, vector<P> (c));
    // 上から下
    rep(i,c)
    {
        int counter = 0;
        rep(j,r)
        {
            if (s[j][i] == 'x')
            {
                counter = 0;
            }else
            {
                counter++;
            }
            zyouge[j][i].first = counter;
        }
    }
    rep(i, c)
    {
        int counter = 0;
        for (int j = r-1; j >= 0; j--)
        {
            if (s[j][i] == 'x')
            {
                counter = 0;
            }else
            {
                counter++;
            }
            zyouge[j][i].second = counter;
        }
    }
    int ans = 0;
    rep(tr,r)
    {
        rep(tc,c)
        {
            bool flag = true;
            rep(tk,2*k-1)
            {
                int temp;
                if(tk>=k)
                {
                    temp = 2 * k - 1 - tk;
                }else
                {
                    temp = tk+1;
                }
                if(tc+tk<c)
                {
                    if (zyouge[tr][tc + tk].first >= temp && zyouge[tr][tc + tk].second >= temp)
                    {
                        flag = true;
                    }
                    else
                    {
                        flag = false;
                        break;
                    }
                }else
                {
                    flag = false;
                    break;
                }
                
            }
            if(flag)ans++;
        }
    }
    cout << ans << endl;
}