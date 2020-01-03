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
    ll* h;
    h = new ll[n];
    rep(i,n)
    {
        cin>>h[i];
    }
    int* j;
    j = new int[n];

    

    for (int i = 0; i < n-1; i++)
    {
        if (h[i]>=h[i+1])
        {
            j[i] = 1;
        }else{
            j[i] = 0;
        }
        
    }

    int counter = 0;
    int ans = 0;
    

    for (int i = 0; i < n-1; i++)
    {
        if (j[i] == 1)
        {
            counter++;
        }else
        {
            if (ans<counter)
            {
                ans = counter;
                counter = 0;
            }else
            {
                counter = 0;
            }
        }
       //cout << counter << endl;
    }

    if (ans<counter)
    {
        cout << counter << endl;
    }else
    {
        cout << ans << endl;
    }
    
    
}