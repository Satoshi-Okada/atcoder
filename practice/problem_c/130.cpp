#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <math.h>
using namespace std;

#define ll long long



int main()
{
    double w,h,x,y;
    cin >> w>>h>>x>>y;

    double h_dash = h/2;
    double w_dash = w/2;

    int flag=0;//複数あるかどうかのflag
    double S;//面積S

    if(h_dash == y && w_dash == x) flag = 1;

    S = (h*w)/2;
    cout << S << " " << flag << endl;

}