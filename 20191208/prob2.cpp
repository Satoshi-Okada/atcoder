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
    string s;
    cin >> s;

    int len = s.length();
    int count = 0;
    for (int i = 0; i < len/2; i++)
    {
        if (s[i]!=s[len-i-1])
        {
            count++;
        }
    }
    cout << count << endl;
}