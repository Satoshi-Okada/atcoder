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


int main()
{

    ld a,b;
    ld x;
    cin >> a >> b >> x;
    ld v;//体積
    v = a*a*b;
    ld margin;
    ld height;
    ld rad;
    ld ans;
    if (x>=v/2)
    {
        margin = v-x;
        height = (margin/(a*a))*2;
        rad = atan(height/a);
        ans = 180.000000000*rad/PI;
    }else
    {
        height = (x/(a*b))*2;
        rad = atan(height/b);
        ans = 180*rad/PI;
        ans = 90-ans;
        //ans = ((0.5000000000-rad)/PI)*180.000000000;
    }
    //cout << height/a << endl;
    //cout << rad << endl;
    cout << setprecision(11)<< ans << endl;
}