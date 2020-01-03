#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <math.h>
using namespace std;

#define ll long long

#define MOD 1000000007

int main()
{
    int m;
    int d;
    cin >> m >> d;
    int d1;
    int d10;
    int counter = 0;
    for (int i = 1; i < m+1; i++)
    {
        for (int j = 1; j < d+1; j++)
        {
            d10 = j/10;
            d1 = j%10;
            if (d1>=2 && d10>=2 && d1*d10==i)
            {
                counter++;
            }
            
        }
        
    }
    cout << counter << endl;
}