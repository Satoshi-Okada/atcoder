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
    int n,d,k;cin >> n >> d >> k;
    vector<int> l(d);
    vector<int> r(d);
    rep(i,d)
    {
        cin >> l[i] >> r[i];
    }
    vector<int> s(k);
    vector<int> t(k);
    rep(i, k)
    {
        cin >> s[i] >> t[i];
    }
    rep(i,k)
    {
        int start = s[i];
        int goal = t[i];
        if(s[i]<t[i])
        {
            for (int j = 0; j < d; j++)
            {
                if(l[j]<=start && start <=r[j])
                {
                    start = r[j];
                    // cout << start << endl;
                }
                if(start>=goal)
                {
                    cout << ++j << endl;
                    break;
                }
            }
            
        }else
        {
            for (int j = 0; j < d; j++)
            {
                if (l[j] <= start && start <= r[j])
                {
                    start = l[j];
                }
                if (start <= goal)
                {
                    cout << ++j << endl;
                    break;
                }
            }
        }
    }
    // cout << "Yes" << endl;
}