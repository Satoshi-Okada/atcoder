#include<iostream>
#include<string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <math.h>
#include<iomanip>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a>>b>>c;

    if(c-(a-b)<0)cout << "0" << endl;
    else cout << c-(a-b) << endl;
}