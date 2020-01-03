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

int main()
{
    int n;
    ll k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    ll sum = 0;
    int bound = 0;
    ll ans=0;
    for (int i = 0; i < n; i++)
    {
        while (sum<k)
        {
            if (bound==n)
            {
                break;
            }
            sum+=a[bound];
            bound++; 
        }
        
        if (sum<k)
        {
            break;   
        }
        ans+=(n-bound+1);
        sum-=a[i];
    }
    cout << ans << endl;
    
    
}