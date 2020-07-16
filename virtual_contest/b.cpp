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
    int n,k,m;cin >> n >> k >> m;
    vector<int> a(n-1);rep(i,n-1)cin >> a[i];
    int sum = 0;

    rep(i,n-1)
    {
        sum += a[i];
    }
    int risou = m*n-sum;
    if(risou > k)
    {
        cout << -1 << endl;
        return 0;
    }
    if(risou < 0)
    {
        cout << 0 << endl;
        return 0;
    }
    cout << risou << endl;
}