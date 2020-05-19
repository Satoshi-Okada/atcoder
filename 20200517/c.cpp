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
    double a,b,h,m; cin >> a >> b >> h >> m;
    double hoge,fuga;
    hoge = ((double)(1) / (double)(6)) * (double)PI * (double)h + ((double)(1) / (double)(360))*(double)PI * (double)m;
    fuga = ((double)(2) / (double)(60))*(double)PI*(double)m;
    double ans;
    // cout << hoge-fuga << endl;
    ans = a*a+b*b-(double)2*a*b*cos(hoge-fuga);
    cout << setprecision(15) << sqrt(ans) << endl;
}