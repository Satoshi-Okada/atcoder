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
template <typename T>

T lcm(T x, T y)
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
  return xy/y;
};


int main()
{
    ll a,b;
    cin >> a >> b;
    ll ans;
    ans = lcm(a,b);
    cout << ans << endl;
}