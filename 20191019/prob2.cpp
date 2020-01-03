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
    vector<int> d(n);
    rep(i,n)
    {
        cin >> d[i];
    }
    int N;
    N = (n*(n-1))/2;
    ll ans = 0;

    rep(i,n)
    {
        for (int j = i+1; j < n; j++)
        {
            ans+=d[i]*d[j];
        }
    }

    cout <<  ans<< endl;
}