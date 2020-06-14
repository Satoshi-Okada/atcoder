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
    ll la;string b;cin >> la >> b;
    ll lb;
    reverse(b.begin(), b.end());
    ll mul = 1;
    for (auto &&i : b)
    {
        if(i=='.')continue;
        lb += mul*(i-'0');
        mul *= 10; 
    }
    
    ll res = lb*la;

    cout << res/100 << endl;
}