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

template <typename T>
T gcd(T x, T y)
{
    T xy = x * y;
    if (x < y)
        swap(x, y);
    T r;
    r = x % y;
    while (r != 0)
    {
        x = y;
        y = r;
        r = x % y;
    }
    return y;
};

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n)
    {
        cin >> a[i];
    }

    vector<int> l(n);
    vector<int> r(n);

    l[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        l[i] = gcd(a[i-1],l[i-1]);
    }

    r[n-2] = a[n-1];

    for (int i = 3; i < n+1; i++)
    {
        r[n-i] = gcd(a[n-i+1],r[n-i+1]);
    }

    int ans;
    int temp;

    rep(i,n)
    {
        if (i==0)
        {
            ans = r[0];
        }else if (i==n-1)
        {
            ans = max(ans,l[n-1]);
        }else
        {
            temp = gcd(l[i],r[i]);
            ans = max(ans,temp);
        }
    }
    
    cout << ans << endl;

    
}