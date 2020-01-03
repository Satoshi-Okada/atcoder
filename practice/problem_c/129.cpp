#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <math.h>
using namespace std;

#define ll long long

#define MOD 1000000007

int main()
{
    ll n,m;
    vector<ll> a;
    cin >> n >> m;
    ll temp;
    if(m != 0){
        for (int i = 0; i < m; i++)
        {
            cin >> temp;
            a.push_back(temp);
        }
    }
    

    ll* dp;
    dp = new ll[n+1];
    ll k = 0;
    for (int i = 0; i < n+1; i++)
    {
        if(m!=0)
        {
            if(i == a[k])
            {
                dp[i] = 0;
                k++;
            }else if (i>1)
            {
                dp[i] = dp[i-1]+dp[i-2];
            }else{
                dp[i] = 1;
            }
        }else{
            if (i>1)
            {
                dp[i] = dp[i-1]+dp[i-2];
            }else{
                dp[i] = 1;
            }
        }
        
        dp[i] = dp[i]%MOD;
    }
    cout << dp[n]%MOD << endl;
    
}