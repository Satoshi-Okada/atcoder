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
int counter[200005];
int main()
{
    int n;
    cin >> n;
    int a;
    rep(i,n-1)
    {
        cin >> a;
        a--;
        counter[a]++;
    }
    rep(i,n)
    {
        cout << counter[i] << endl;
    }
}