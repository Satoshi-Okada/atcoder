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
    int n;
    cin >> n;
    int** vc;
    vc = new int*[n];
    for (int i = 0; i < n+1; i++)
    {
        vc[i] = new int[n];
    }

    int temp;

    for (int i = 1; i < n+1; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            cin >> temp;
            vc[i][j]=temp;
        }
        vc[i][n-1] = -1;
    }

    /*for (int i = 1; i < n+1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << vc[i][j] << " ";
        }
        cout <<  endl;
        
    }*/
    

    int* array;
    array  = new int[n+1];//格配列の先頭ポインタを保持 vc[i][array[i]]で先頭にアクセス

    int* ban;
    ban = new int[n+1];
    rep(i,n+1)
    {
        array[i] = 0;
        ban[i] = 0;
    }
    int flag = 1;
    int days = 0;
    int pair = 0;
    int num;
    int array_i;
    int array_temp;

    while(flag == 1)
    {
        for (int i = 1; i < n+1; i++)
        {
            num = i;
            array_i = array[i];
            if(array_i!=n-1&&ban[i]!=1)
            {
                temp = vc[i][array_i];
                array_temp = array[temp];
                if(array_temp!=n-1&&ban[temp]!=1)
                {
                    if (i == vc[temp][array_temp])
                    {
                        array[i] = array_i+1;
                        array[temp] = array_temp+1;
                        ban[i] = 1;
                        ban[temp] = 1;
                        pair++;
                    }
                }
            }
        }
        //cout << pair << endl;
        if (pair == 0)
        {
            flag = 0;
        }else
        {
            pair = 0;
            days++;
        }
        if(num == n)
        {
            for (int i = 1 ; i < n+1; i++)
            {
                ban[i] = 0;
            }
        }
        
    }

    int judge = 0;
    for (int i = 1; i < n+1; i++)
    {
        if (array[i]!=n-1)
        {
            cout << -1 << endl;
            break;
        }
        judge = i;
    }
    if (judge==n)
    {
        cout << days << endl;
    }
    
    


}