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
    int a,b,c;
    cin >> a >> b >> c;
    int sum = 0;
    sum = a+b+c;
    if (sum<22)
    {
        cout << "win" << endl;
    }else
    {
        cout << "bust" << endl;
    }
    
    
}