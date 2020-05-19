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
    int k;
    string s;
    cin >> k;
    cin >> s;
    vector<char> ans;
    int sl = (int)s.length();
    if(sl > k)
    {
        for (int i = 0; i < k; i++)
        {
            ans.push_back(s[i]);
        }
        for (int i = 0; i < 3; i++)
        {
            ans.push_back('.');
        }
    }else
    {
        cout << s << endl;
        return 0;
    }
    for (int i = 0; i <sz(ans); i++)
    {
        cout << ans[i];

    }
    cout << endl;
}