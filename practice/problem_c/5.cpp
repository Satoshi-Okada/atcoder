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
    int t;cin >> t;
    int n;cin >> n;
    vector<int> yaki(n);rep(i,n) cin >> yaki[i];
    int m; cin >> m;
    vector<int> kyaku(m);rep(i,m) cin >> kyaku[i];
    if(m>n)
    {
        cout << "no" << endl;
        return 0;
    }

    int index = 0;
    int i;
    for (i = 0; i < m; i++)
    {
        bool result = false;
        while(yaki[index]<=kyaku[i] && index <=n-1)
        {
            if (yaki[index] >= kyaku[i] - t)
            {
                result = true;
                index++;
                break;
            }
            index++;
        }
        if(!result) break;

    }
    if(i==m)
    {
        cout << "yes" << endl;
        return 0;
    }else
    {
        cout << "no" << endl;
        return 0;
    }
    
}