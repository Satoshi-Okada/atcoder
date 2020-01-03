#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <math.h>
using namespace std;

#define ll long long

#define MOD 1000000007
#define REP(i, n) for(int i = 0;i < n;i++)

int beki(int n,int m)
{
    int temp = 1;
    for (int i = 0; i < m; i++)
    {
        temp = temp*n;
    }
    return temp;
}


int main()
{
    int n,m;
    cin >> n >> m;
    int* k;
    k = new int[n];
    int** s;
    s = new int*[m];
    for (int i = 0; i < m; i++)
    {
        s[i] = new int[n];
    }
    
    REP(i,m)
    {
        REP(j,n)
        {
            s[i][j] = -10;
        }
    }

    int number = 0;

    REP(i,m)
    {
        cin >>k[i];
        REP(j,k[i])
        {
            cin >> number;
            number--;
            s[i][j] = number;
        }
    }

    int* p;
    p = new int[m];
    REP(i,m)
    {
       cin >> p[i];
    }

    int* real_s;
    real_s = new int[n];
    int counter = 0;//行ごとのスイッチonの数

    int flag = 0;//on_offのジャッジ。nなら全点灯

    int ans = 0;
    int temp = 1;

    for (int i = 0; i < n; i++)
    {
        temp = 2*temp;
    }
    

    int num;
    for (int i = 0; i < temp; i++)//場合
    {

        num = i;
        for (int j = n-1; j >= 0; j--)//実際のonoffを確保
        {
            real_s[j] = num/beki(2,j);
            if (real_s[j]==1)
            {
                num = num-beki(2,j);
            }
            
        }


        for (int o = 0; o < m; o++)
        {
            for (int q = 0; q < n; q++)
            {
                if (real_s[s[o][q]]==1)
                {
                    counter++;
                }
                
            }
            if (counter%2==p[o])
            {
                flag++;
            }
            counter = 0;
            
        }
        //cout << i << "の時" ;
        /*for (int j = 0; j < n; j++)
        {
            cout << real_s[j];
        }
        
       cout << " " << "flagは"<< flag << endl;*/
        if (flag == m)
        {
            ans++;
        }
        flag = 0;
        
    }

    cout << ans << endl;
}
