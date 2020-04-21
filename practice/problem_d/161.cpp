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

ll dp[100005][10];

int main()
{
    int k;
    cin >> k;
    queue<ll> q;
    for (ll i = 1; i < 10; i++)
    {
        q.push(i);
    }
    
    ll num;
    rep(i,k)
    {
        num = q.front();
        if (num%10!=0)
        {
            q.push(num * 10 + (num % 10 - 1));
        }
        q.push(num * 10 + (num % 10));
        if (num%10 != 9)
        {
            q.push(num * 10 + (num % 10 + 1));
        }
        q.pop();
        //cout << numきかい << endl;
    }
    cout << num << endl;
}