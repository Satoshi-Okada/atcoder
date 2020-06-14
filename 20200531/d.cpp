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

int num[1000004];
vector<int> sum = {0,1,3,6,10,15,21,28,36,45,55};
int main()
{
    ll n;cin >> n;
    if(n==1)
    {
        cout << 0 << endl;
        return 0;
    }
    for (int i = 2; i<1000004; i++)
    {
        // cout << i << endl;
        while(n%i==0)
        {
            num[i]++;
            n=n/(ll)i;
        }
    }
    int ans = 0;

    if (n != 1)
    {
        ans++;
    }
    for (int i = 2; i<1000004; i++)
    {
        int add = upper_bound(sum.begin(), sum.end(), num[i])-sum.begin()-1;
        ans+=add;
    }
    
    cout << ans << endl;
}