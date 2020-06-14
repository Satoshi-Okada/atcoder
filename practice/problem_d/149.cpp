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
int n,k,r,s,p;
int tokuten(char te)
{
    if(te == 'r') return p;
    if(te == 's') return r;
    if(te == 'p') return s;
}

int main()
{
    cin >> n >> k >> r >> s >> p;
    string t;cin >> t;
    int len = (int)t.length();
    vector<char> choku(len);
    int ans = 0;
    for (int i = 0; i < len; i++)
    {
        if(i>=k)
        {
            if(t[i]==t[i-k])
            {
                if(choku[i-k]=='w')
                {
                    choku[i] = 'l';
                    continue;
                }else
                {
                    choku[i] = 'w';
                    ans += tokuten(t[i]);
                    continue;
                }
            }
        }
        choku[i] = 'w';
        ans += tokuten(t[i]);
    }
    cout << ans << endl;
}