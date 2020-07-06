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
    int h,w,k; cin >> h >> w >> k;
    vector<string> masu(h);
    rep(i,h)
    {
        cin >> masu[i];
    }
    vector<int> gyou_kuro(h, 0);
    vector<int> retsu_kuro(w, 0);
    int goukei = 0;
    rep(i,h)
    {
        int counter = 0;
        rep(j,w)
        {
            if(masu[i][j]=='#')counter++;
        }
        goukei += counter;
        gyou_kuro[i] = counter;
    }
    rep(i, w)
    {
        int counter = 0;
        rep(j, h)
        {
            if (masu[j][i] == '#')counter++;
        }
        retsu_kuro[i] = counter;
    }
    ll ans = 0;
    rep(i,1 << h)
    {
        
        rep(j, 1 << w)
        {
            int hiku = 0;
            vector<int> r;
            vector<int> g;
            rep(l, h)
            {
                if (i & (1 << l))
                {
                    g.push_back(l);
                    hiku += gyou_kuro[l];
                }
            }
            rep(m, w)
            {
                if (j & (1 << m))
                {
                    r.push_back(m);
                    hiku += retsu_kuro[m];
                }
            }
            for (auto &&n : g)
            {
                for (auto &&o : r)
                {
                    if(masu[n][o]=='#')hiku--;
                }
                
            }
            if (goukei - hiku == k)
            {
                ans++;
            }
        }
        
        
    }
    cout << ans << endl;
}