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
    int n,k;
    cin >> n >> k;
    vector<int> h(n);
    rep(i,n)
    {
        cin >> h[i];
    }
    int counter = 0;
    rep(i,n)
    {
        if (h[i]>=k)
        {
            counter++;
        }
        
    }

    cout << counter << endl;
}