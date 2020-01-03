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
    int* a;
    a = new int[n+1];
    for (int i = 1; i < n+1; i++)
    {
        cin >>a[i];
    }
    /*for (int i = 1; i < n+1; i++)
    {
        cout << a[i] << endl;
    }*/
    int* b;
    b = new int[n+1];
    for (int i = 1; i < n+1; i++)
    {
        b[i] = 0;
    }
    int temp;
    int index;
    int sum = 0;


    for (int i = n; i > 0 ; i--)
    {
        temp = n/i;
        for (int j = 1; j < temp+1; j++)
        {
            index = i*j;
            sum += b[index];
        }

        if (sum%2==a[i])
        {
            b[i] = 0;
        }else
        {
            b[i] = 1;
        }
        sum = 0;

    }
    int flag = 0;
    int counter = 0;
    
    for (int i = 1; i < n+1; i++)
    {
        if (b[i] == 1)
        {
            counter++;
        }
        
    }

    if (counter != 0)
    {
        cout << counter << endl;
    }
    
    for (int i = 1; i < n+1; i++)
    {
        if (b[i] == 1)
        {
            cout << i << " ";
            flag = 1;
        }
    }
    
    if (flag == 0)
    {
        cout << 0 << endl;
    }else
    {
        cout  << endl;
    }
    
}