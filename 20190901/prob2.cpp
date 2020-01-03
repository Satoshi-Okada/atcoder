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
    int a,b;
    cin >> a>> b;
    int ans;
    ans = (b-1)/(a-1);
    if ((b-1)%(a-1) == 0)
    {
        cout << ans << endl;
    }else
    {
        cout << ans+1 << endl;
    }
    
    
}