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
    ll k;cin >> n >> k;
    vector<ll> s(n); rep(i,n) cin >> s[i];
    rep(i,n)
    {
        if(s[i]==0)
        {
            cout << n << endl;
            return 0;
        }
    }
    int left = 0; int right = 0;
    ll temp = 1;
    int mx = -1;
    for (left = 0; left < n; left++)
    {
        if(right<left)
        {
            right = left;
            temp = 1;
        }
        while(right < n)
        {
            if (temp * s[right]> k)
            {
                break;
            }
            temp *= s[right];
            right++;
        }
        // cout << left << " " << right << endl;
        mx = max(mx, right-left);
        temp /=s[left];
    }
    cout << mx << endl;
    
    

}