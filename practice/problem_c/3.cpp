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
    int n,k; cin >> n >> k;
    vector<double> r(n);rep(i,n)cin >> r[i];
    sort(r.begin(),r.end());

    double c = 0;
    for (int i = n-k; i < n; i++)
    {
        if(c <= r[i])
        {
            c = (c+r[i])/2;
        }
    }
    cout << setprecision(11)  << c << endl;
}