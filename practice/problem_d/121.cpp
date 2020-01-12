#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define PI 3.14159265358979323846
#define sz(x) ((int)(x).size())

const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;
ll n, m;

int return_zero_one_n(int i)
{
    ll d;
    ll temp;
    ll r;
    ll devider = (ll)pow(2, i);

    d = n / devider;
    r = n % devider;
    if (d % 2 == 1)
    {
        temp = devider - r;
        if (temp % 2 == 0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    else
    {
        return 0;
    }
}

int return_zero_one_m(int i)
{
    ll d;
    ll temp;
    ll r;

    ll devider = (ll)pow(2, i);

    d = m / devider;
    r = m % devider;
    if (d % 2 == 1)
    {
        temp = r + 1;
        if (temp % 2 == 0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    else
    {
        return 0;
    }
}

ll odd_counter(ll num)
{
    if (num % 2 == 0)
    {
        return num / 2;
    }
    else
    {
        return (num + 1) / 2;
    }
}

int main()
{
    cin >> n >> m;

    ll ans = 0;

    ll temp = odd_counter(m) - odd_counter(n);

    ans += (n % 2) ^ (temp % 2);

    for (int i = 1; i < 41; i++)
    {
        //cout << return_zero_one_n(i) << " " << return_zero_one_m(i) << endl;
        ll multi = (ll)pow(2, i);
        ans += (return_zero_one_n(i) ^ return_zero_one_m(i)) * multi;
    }
    cout << ans << endl;
}