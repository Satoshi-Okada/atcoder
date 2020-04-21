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
    int n;
    ll otoshi;
    cin >> n >> otoshi;
    ll sum = 0;
    for (int x = 0; x <= n; x++)
    {
        for (int y = 0; y <= n; y++)
        {
            int z;
            z = n - x - y;
            if (z < 0)
            {
                continue;
            }
            sum = 10000 * (ll)x + 5000 * (ll)y + 1000 * (ll)z;
            if(sum == otoshi)
            {
                cout << x << " " << y << " " << z << " " << endl;
                return 0;
            }
        }
    }
    cout << -1 << " " << -1 << " " << -1 << " " << endl;
    return 0;
}