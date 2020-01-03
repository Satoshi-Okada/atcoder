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

using namespace std;

#define ll long long
#define ld long double
#define MOD 1000000007
#define rep(i, n) for(int i = 0;i < n;i++)
#define PI 3.14159265358979323846

ll GetDigit(ll num){
    ll digit=0;
    if(num == 0)return 0;
    while(num!=0){
        num /= 10;
        digit++;
    }
    return digit;
}


int main()
{
    int flag = 0;
    ll a, b, x;
    ll n;
    cin >> a >> b >> x;
    ll remain;
    //cout << pow(10,2) << endl;
    if (x >= a*1000000000+b*10)
    {
        cout << 1000000000 << endl;
        flag = 1;
    }else if(x < a+b)
    {
        cout << 0 << endl;
        flag = 1;
    }else if(flag == 0)
    {
        ll ub = 1000000000;
        ll lb = 1;
        ll mid = 500000000;
        

        while(ub-lb>1)
        {
            n = mid;
            if(x<a*n+b*GetDigit(n))
            {
                ub = mid;
                mid = (mid+lb)/2;
            }else{
                lb = mid;
                mid = (ub+mid)/2;
            }
        }
        cout << lb << endl;
    }
}