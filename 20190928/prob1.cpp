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
    int n;

    cin >> n;
    double ans;
    double counter;
    counter = floor((n+1)/2);
    //cout << counter << endl;
    ans = counter/n;
    cout << counter/n << endl;
}