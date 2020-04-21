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
    vector<int> c(n-1);
    vector<int> s(n-1);
    vector<int> f(n-1);
    rep(i,n-1)
    {
        cin >> c[i] >> s[i] >> f[i];
    }
    vector<int> ans(n);
    rep(i,n)ans[i] = 0;
    
    for (int i = 0; i <= n-2; i++)
    {
        int temp = 0;
        for (int j = i; j <= n-2; j++)
        {
            if (temp < s[j]) temp = s[j];

            if (temp % f[j] != 0) temp += (f[j] - temp % f[j]);
            temp += c[j];
        }
        ans[i] = temp;
    }
    rep(i,n)
    {
        cout << ans[i] << endl;
    }
    
}