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
    ll k; cin >> k;
    if(k%2==0 || k%5==0)
    {
        cout << -1 << endl;
        return 0;
    }
    ll i = 1;
    ll tb = 10;

    while(true)
    {
        if((7*(tb-1))%(9*k)==0)
        {
            break;
        }
        tb *= 10;
        tb %= (9 * k);
        i++;
    }
    cout << i << endl;

}