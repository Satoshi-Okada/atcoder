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
    ll n;
    cin >> n;
    int num;
    num = sqrt(n);
    int ans = 0;
    

    for (int i = num+1; i > 0; i--)
    {
        if (n%i == 0)
        {
            n = n/i;
            ans = i;
            break;
        }else if(i == 1)
        {
            ans = i;
        }
    }
    
    cout << n+ans-2<< endl;
}