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
    cin >> a>> b;
    c = (a+b)/2;
    if (2*c == a+b)
    {
        cout << c << endl;
    }else
    {
        cout << "IMPOSSIBLE" << endl;
    }
    


}