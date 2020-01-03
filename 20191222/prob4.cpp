#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <math.h>
#include <list>
#include <stack>
#include <queue>
#include <utility>
#include<bitset>


using namespace std;

#define ll long long
#define ld long double
#define MOD 1000000007
#define rep(i, n) for(int i = 0;i < n;i++)
#define PI 3.14159265358979323846


int main()
{
    ll n;
    cin >> n;
    vector<ll> vc(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> vc[i];
    }
    ll count = 1;
    ll ans = 0;
    ll temp = -1;

    for (ll i = 0; i < n; i++)
    {
        if (vc[i]==count)
        {
            ans+= i-temp-1;
            count++;
            temp = i;
        }
    }
    ans+=n-temp-1;
    
    if (count==1)
    {
        cout << -1 << endl;
    }else
    {
        cout << ans << endl;
    }
    
    
    
}