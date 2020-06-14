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

ll gozyou(ll num)
{
    return num * num * num * num * num;
}
int main()
{
    int x;cin >> x;
    ll a,b;
    for (a = -120; a <=120 ; a++)
    {
        for (b = -120; b <= 120; b++)
        {
            if(gozyou(a)-gozyou(b)==x)
            {
                cout << a << " " << b << endl;
                return 0;
            }
        }
    }
    
}