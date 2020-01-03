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
    vector<int> a(n+1);
    
    for (int i = 1; i < n+1; i++)
    {
        cin>> a[i];
    }
    
    vector<int> ans(n+1);

    for (int i = 1; i < n+1; i++)
    {
        ans[a[i]] = i; 
    }
    for (int i = 1; i < n+1; i++)
    {
        cout << ans[i] << " ";
    }
    cout  << endl;
    
    

}