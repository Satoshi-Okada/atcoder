#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <math.h>
using namespace std;

#define ll long long

ll lcm(ll x, ll y)
{
    ll xy = x*y;
    if(x<y)swap(x,y);
    ll r;
    r = x%y;
    while(r!=0){
    x = y;
    y = r;
    r = x % y;
  }
  return xy/y;
}

int main()
{
    ll a,b,c,d;
    cin >> a >> b>> c >> d;
    ll div_c;
    ll head;
    ll tail;
    if(a%c!=0) head = a/c+1;
    else head = a/c;
    tail = b/c;
    div_c = tail - head +1;


    ll div_d;
    if(a%d!=0) head = a/d+1;
    else head = a/d;
    tail = b/d;
    div_d = tail - head+1;


    ll div_cd;
    ll cd;
    cd  = lcm(c,d);
    if(a%cd!=0) head = a/cd+1;
    else head = a/cd;
    tail = b/cd;
    div_cd = tail - head +1;
    


    ll answer;
    answer = b-a+1-div_c-div_d+div_cd;
    cout << answer << endl;

}