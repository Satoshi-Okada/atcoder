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
    vector<string> vc;

    vc.push_back("SUN");
    vc.push_back("MON");
    vc.push_back("TUE");
    vc.push_back("WED");
    vc.push_back("THU");
    vc.push_back("FRI");
    vc.push_back("SAT");

    string temp;
    cin >> temp;
    int i = 0;
    while(vc[i] != temp)
    {
        i++;
    }
    cout << 7-i << endl;

}