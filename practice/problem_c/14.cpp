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

int counter[1000006];
int main()
{
    int n;cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    rep(i,n)
    {
        cin >> a[i] >> b[i];
        counter[a[i]]++;
        counter[b[i]+1]--;
    }
    int temp = 0;
    rep(i, 1000006)
    {
        temp += counter[i];
        counter[i] = temp;
    }
    int mx = -1;
    rep(i, 1000006)
    {
        mx = max(mx,counter[i]);
    }
    cout << mx << endl;

}