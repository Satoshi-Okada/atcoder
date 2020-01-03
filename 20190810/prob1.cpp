#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    int sum, multi, diff;
    sum = a+b;
    multi = a*b;
    diff = a-b;
    int max = 0;

    max = sum;
    if (max<multi)
    {
        max = multi;
    }
    if (max < diff)
    {
        max = diff;
    }
    
    cout << max << endl;

}