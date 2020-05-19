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
    string s;cin >> s;
    int sl = (int)s.length();;

    int counter = 1 << (sl-1);
    ll sum = 0;
    rep(i,counter)
    {
   
        ll num = 0;
        rep(j,sl+1)
        {
            if(j==0)
            {
                continue;
            }
            num = 10 * num + (s[j-1] - '0');
            if(j==sl)
            {
                // cout << num << endl;
                sum += num;
                num = 0;
                continue;
            }
            if(!(i & 1<< (j-1)))
            {
                continue;  
            }
            // cout << num << endl;
            sum += num;
            num = 0;
        }
    }
    cout << sum << endl;

}