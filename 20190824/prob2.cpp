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
    int n;
    ll k;

    ll* a;
    a = new ll[n];
    ll* counter;
    counter = new ll[n];
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >>a[i];
    }

    ll counter1 = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i]<a[j])
            {
                counter1++;
            }

        }
    }


    ll counter2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j= 0; j < n; j++)
        {
            if(a[i]<a[j]){
                counter2++;
            }
        }
    }

    ll answer = 0;
    counter1 %=MOD;
    counter2 %=MOD;
    ll number;
    number = ((k-1)*k/2)%MOD;

    ll temp = 0;

  
    temp = (number*counter2)%MOD;
    answer = temp+ answer + counter1*k;
    answer %=MOD;

    cout << answer << endl;
}