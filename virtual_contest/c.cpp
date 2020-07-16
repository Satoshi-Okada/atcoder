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
    int n;cin >> n;
    vector<int> a(n);
    int ttl = 0;
    rep(i,n)
    {
        cin >> a[i];
        ttl += a[i];
    }
    if(ttl%n!=0)
    {
        cout << -1 << endl;
        return 0;
    }
    int temp = 0;
    int hashi = 0;
    for (int i = 0; i <= n-1; i++)
    {
        temp += (a[i]-ttl/n);
        if(temp==0)
        {
            continue;
        }
        hashi++;
    }
    cout << hashi << endl;

}