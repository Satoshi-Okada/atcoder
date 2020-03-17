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

template <class T, class S>
T PowMod(S n, T m)
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
    return n * PowMod(n, m - 1);
}

ll my_Pow(ll a,ll b)
{
    ll r = 1;
    while(b--)
    {
        r*=(ll)a;
    }
    return r;
}

int main()
{
    ll n;
    cin >> n;
    int dev = 1;
    vector<int> s;
    if (n==0)
    {
        cout << 0 << endl;
        return 0;
    }
    

    while(n!=0 && dev < 42)
    {
       if (n%(1ull<<dev)==0)
       {
           s.push_back(0);
       }else
       {
           s.push_back(1);
           n -= my_Pow((ll)-2, dev-1);
           
       }
       //for(auto u: s)cout << u;
       //cout << endl;
       //cout << dev <<' ' << n << endl;
       dev++;
    }
    
    int len = sz(s);
    for (int i = len-1; i >=0; i--)
    {
        cout << s[i];
    }
    cout << endl;
    
}