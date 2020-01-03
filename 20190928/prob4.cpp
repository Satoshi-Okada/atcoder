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
template <typename T>
T gcd(T x, T y)
{
    T xy = x*y;
    if(x<y)swap(x,y);
    T r;
    r = x%y;
    while(r!=0){
    x = y;
    y = r;
    r = x % y;
  }
  return y;
};

int main()
{
    ll a,b;
    cin >> a >> b;

    ll g;

    g = gcd(a,b);
    //cout << g << endl;
    ll g_dash;
    g_dash = g;

    ll counter = 1;
    ll index;
    index = ceil(sqrt(g));
    //cout << index << endl;
    int flag;
    for (int i = 2; i < index+1; i++)
    {
        flag = 0;
        while (g%i==0)
        {
            if (flag == 0)
            {
                counter++;
                flag = 1;
                g/=i;
            }else
            {
               g/=i;
            }
        }
        
    }
    //cout << counter << endl;
    if (g_dash == 1)
    {
        cout << 1 << endl;
    }else if(counter==1)
    {
        cout << 2 << endl;
    }else
    {
        if (g==1)
        {
            cout << counter << endl;
        }else
        {
            cout << counter+1 << endl;
        }
        
        
    }

}