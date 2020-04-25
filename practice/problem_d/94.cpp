#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> P;
#define ll long long
#define ld long double
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define PI 3.14159265358979323846
#define sz(x) ((int)(x).size())
#define chmin(x,y) x = min(x,y)
#define chmax(x,y) x = max(x,y)

const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

template <class T>
T PowMod(T n, T m)
{
    if (m == 0)
    {
        return 1;
    }
    if (m % 2 == 0)
    {
        T temp = PowMod(n, m / 2);
        return temp * temp;
    }
    return n * PowMod(n, m - 1) % MOD;
}

template <class T>
T inv_num(T num)
{
    return PowMod(num, MOD - 2);
}
template <class T>
T COM(T n, T a)
{
    T X, Y;
    X = 1;
    Y = 1;
    rep(i, a)
    {
        X *= (n - i) % MOD;
        Y *= (a - i) % MOD;
    }
    return X * (inv_num(Y)) % MOD;
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    sort(a.begin(),a.end());
    int x,y;
    x = a[n-1];
    int mn = INF;
    rep(i,n-1)
    {
        if(mn > abs(2*a[i]-x))
        {
            mn = abs(2 * a[i] - x);
            y = a[i];
        }
    }
    cout << x << " " << y<< endl;

}