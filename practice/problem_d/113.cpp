#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define PI 3.14159265358979323846
#define sz(x) ((int)(x).size())

const int INF = 1e9;
const ll MOD = 1e9 + 7;
const ll LINF = 1e18;

ll dp[110][10];

int main()
{
    int h,w,k;
    cin >> h >> w >> k;
    dp[0][0]=(ll)1;
    for (int  i = 0; i < h; i++)
    {
        //高さiの横棒について考えるi->i+1の流れ
        rep(j, 1 << (w-1))
        {
            bool flag = true;
            rep(l, w-1)
            {
                if(l==0)continue;
                if (j & (1 << l))
                {
                    if (j & (1 << (l-1)))
                    {
                        flag = false;
                    }
                }
            }
            if(flag)
            {
                rep(l,w)
                {
                    if(l-1>=0)
                    {
                        if (j & (1 << (l-1)))
                        {
                            dp[i+1][l-1]+= dp[i][l];
                            continue;
                        }
                    }
                    if(l<=w-2)
                    {
                        if (j & (1 << l))
                        {
                            dp[i+1][l+1] += dp[i][l];
                            continue;
                        }
                    }
                    dp[i+1][l]+= dp[i][l];
                }
                
            }

        }
        for (int index = 0; index < w; index++)
        {
            dp[i + 1][index] %= MOD;
        }
    }
    cout << dp[h][k-1] << endl;
    
}