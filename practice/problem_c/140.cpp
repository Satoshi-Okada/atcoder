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
    vector<int> b(n-1);

    for (int i = 0; i < n-1; i++)
    {
        cin >> b[i];
    }

    vector<int> a(n);
    for (int i = 0; i < n-1; i++)
    {
        a[i] = 0;
    }
    a[0] = b[0];
    a[1] = b[0];

    for (int i = 1; i < n-1; i++)
    {
        if (b[i]<a[i])
        {
            a[i] = b[i];
            a[i+1] = b[i];
        }else
        {
            a[i+1] = b[i];

        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum+=a[i];
    }

    cout << sum << endl;
    
    
    
}