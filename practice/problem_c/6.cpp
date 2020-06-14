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
int main()
{
    int n,m;cin >> n >> m;
    int x,y,z;
    bool flag = false;
    for(x = 0; x <= n; x++)
    {
        z = (m-2*x)-3*(n-x);
        y = n-x-z;
        if(y>=0 && z>=0)
        {
            flag = true;
            break;
        }
    }
    if(flag)
    {
        cout << x << " " << y << " " << z << endl;
        return 0;
    }
    cout << -1 << " " << -1 << " " << -1 << endl;
}