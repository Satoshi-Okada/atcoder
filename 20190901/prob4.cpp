#include <iostream>
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
#define MOD 1000000007
#define rep(i, n) for(int i = 0;i < n;i++)

int main()
{
    ll n;
    cin >> n;
    ll sum = 0;
    for (int i = 1; i < n; i++)
    {
        sum += i;
    }
    cout << sum << endl;
}