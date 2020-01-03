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
    string s;
    cin >> s;
    ll** dp;
    int row;
    row = s.length();
    dp = new ll* [row+1];//indexは1
    for (int i = 0; i < row+1; i++)
    {
        dp[i] = new ll [13];
    }

    rep(i,row+1)
    {
       rep(j,13)
       {
           dp[i][j] = 0;
       } 
    }
     
    ll temp;
    int rest;
    int int_s;

    if (s[row-1] != '?')
    {
        int_s = s[row-1] - '0';
        dp[1][int_s] = 1;
    }else
    {
        for (int i = 0; i < 13; i++)
        {
            if (i<10)
            {
                dp[1][i] = 1;
            }else
            {
                dp[1][i] = 0;
            }
            
        }
        
    }
    
    int num;
    

    for (int i = 2; i < row+1; i++)
    {
        if (s[row-i]!= '?')
        {
            int_s = s[row-i] - '0';
            for (int j = 0; j < 13; j++)
            {
                num = (i-1)%6;
                temp = int_s*(((int) pow(10,num))%13)+j;
                rest = temp%13;
                dp[i][rest] += dp[i-1][j];
            }
        }else
        {
            for (int j = 0; j < 10; j++)
            {
                for (int k = 0; k < 13; k++)
                {
                    num = (i-1)%6;
                    temp = j*(((int) pow(10,num))%13)+k;
                    rest = temp%13;
                    dp[i][rest]+= dp[i-1][k];
                }
                
            }
            
        }

        for (int j = 0; j < 13; j++)
        {
            dp[i][j] = dp[i][j]%MOD;
        }
        
    }

    cout << dp[row][5] << endl;

}