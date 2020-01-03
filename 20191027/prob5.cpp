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
    ll n;
    ll k;
    cin >> n >> k;
    vector<ll> a(n);
    vector<ll> f(n);

    rep(i,n)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    rep(i,n)
    {
        cin >> f[i];
    }
    sort(f.begin(),f.end(),greater<ll>());

    vector<int> vc(n);
    
    rep(i,n)
    {
        vc[i] = a[i]*f[i];
        priority_queue<int> que;
        que.push(vc[i]);
    }
    ll x = 0;

    x = que.top()

    while(x>0&&)

    

}