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
#define all(x) (x).begin(),(x).end()

const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;
int main()
{
    ll k;cin >> k;
    vector<ll> a;
    ll ans;
     for (ll i = 2; i < 51; i++)
    {
        if ((i - 1) + k / i +  i - ((k % i)-1) > 1e16 + 1000)continue;
        a.resize(i);
        rep(j, k % i)
        {
            a[j] = (i - 1) + k / i + i - ((k % i) - 1);
        }
        for (int j = k%i; j < i; j++)
        {
            a[j] = (i - 1) + k / i+1-(k % i);
        }
        ans = i;
        break;
    }
    cout << ans<< endl;
    for (auto &&i : a)
    {
        cout <<i  << " ";
    }
    cout << endl;
}