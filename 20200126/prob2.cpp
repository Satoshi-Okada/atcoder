#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define PI 3.14159265358979323846
#define sz(x) ((int)(x).size())

const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;
int main()
{
    ll h,n;
    cin >> h >> n;
    vector<ll> a(n);
    ll sum = 0;

    rep(i,n)
    {
        cin >> a[i];
    }
    rep(i,n)
    {
        sum+= a[i];
    }

    if (sum>=h)
    {
        cout << "Yes" << endl;
    }else
    {
        cout << "No" << endl;
    }
    
    

}