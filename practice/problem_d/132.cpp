#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <math.h>
#include <list>
#include <stack>
#include <queue>
#include <utility>

using namespace std;

#define ll long long
#define MOD 1000000007
#define rep(i, n) for(int i = 0;i < n;i++)



int main()
{
    int n,k;
    cin >> n>> k;

    int i_range;
    i_range = min(k,n-k+1);
    //cout << i_range << endl;
    int num;
    num = max(k-1,n-k+1);

    ll** comb;
    comb = new ll*[num+1];
    for (int i = 0; i < num+1; i++)
    {
        comb[i] = new ll[num+1];
        for (int j = 0; j < num+1; j++)
        {
            comb[i][j] = 0;
        }
        
    }
    comb[0][0] = 1;

    
    for (int i = 1; i < num+1; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            if (j==0||j==i)
            {
                comb[i][j] = 1;
            }else
            {
                comb[i][j] = comb[i-1][j-1]+comb[i-1][j];
            }
            
            comb[i][j]%=MOD;
            
        }
        
    }

    //cout << "check" << comb[10][3]<< endl;

    ll* ans;
    ans = new ll[i_range];
    for (int i = 1; i < i_range+1; i++)
    {
        ans[i] = (comb[k-1][i-1]*comb[n-k+1][i])%MOD;
    }
    for (int i = i_range+1; i < k+1; i++)
    {
        ans[i] = 0;
    }
    

    for (int i = 1; i < k+1; i++)
    {
        cout << ans[i] << endl;
    }
    
}