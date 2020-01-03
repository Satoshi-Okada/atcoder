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
    int n,m;
    cin >> n >> m;
    vector<ll> a(n);
    rep(i,n)
    {
        cin >> a[i];
    }
    priority_queue<int> queue;
    rep(i,n)
    {
        queue.push(a[i]);
    }
    ll ans = 0;
    ll temp;
    rep(i,m)
    {
        temp = queue.top();
        queue.pop();
        temp/=2;
        queue.push(temp);
    }

    rep(i,n)
    {
        ans += queue.top();
        queue.pop();
    }
     cout << ans << endl;

}