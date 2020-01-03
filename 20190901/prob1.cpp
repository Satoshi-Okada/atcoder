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
    string s;
    string t;
    cin >> s>> t;
    int ans = 0;
    rep(i,3)
    {
        if (s[i] == t[i])
        {
            ans++;
        }
        
    }
    cout << ans << endl;
}