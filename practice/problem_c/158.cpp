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
    int a,b;cin >> a >> b;
    int ans = 0;
    rep(i,100000)
    {
        if(i==0)continue;
        if((int)((double)i*(double)0.08)==a && (int)((double)i*(double)0.1)==b)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}