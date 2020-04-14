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
    cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    rep(i,n)
    {
        cin >> x[i];
        y[i] = x[i];
    }
    sort(y.begin(),y.end());
    int med = (y[n/2]+y[n/2-1])/2;
    rep(i,n)
    {
        if (x[i]<=med)
        {
            cout << y[n/2] << endl;
            continue;
        }
        if(x[i]>=med)
        {
            cout << y[n/2-1] << endl;
        }
    }

}