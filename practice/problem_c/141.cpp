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
    int n,q;
    ll k;
    cin >> n >> k >> q;
    vector<int> a(q);
    vector<int> not_sub(n+1,0);
    rep(i,q)
    {
        cin >> a[i];
        not_sub[a[i]] += 1;
    }
    for (int i = 1; i < n+1; i++)
    {
        if((k-q+not_sub[i])>0)cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}