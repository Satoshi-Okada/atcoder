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
    ll x,k,d;
    cin >> x >> k >> d;
    x = abs(x);
    if((k-x/d)<0)
    {
        cout << x-k*d << endl;
        return 0;
    }else
    {
        if((k-(x/d))%2==0)
        {
            cout << abs(x-d*(x/d)) << endl;
            return 0;
        }else
        {
            cout << abs(x-d*((x/d)+1)) << endl;
            return 0;
        }
        
    }
    

}