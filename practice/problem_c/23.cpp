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
    int r,c,k;cin >> r >> c >> k;
    int n;cin >> n;
    vector<P> ame(n);
    vector<int> rcounter(r, 0);
    vector<int> ccounter(c, 0);

    rep(i,n)
    {
        int tempr, tempc;cin >> tempr >> tempc;
        tempr--;tempc--;
        ame[i].first = tempr;ame[i].second = tempc;
        rcounter[tempr]++;
        ccounter[tempc]++;
    }
    vector<int> rkosu_gyou(100005, 0);
    vector<int> ckosu_gyou(100005, 0);

    for (auto &&i : rcounter)
    {
        rkosu_gyou[i]++;
    }
    for (auto &&i : ccounter)
    {
        ckosu_gyou[i]++;
    }
    ll ans = 0;
    for (int i = 0; i <=k; i++)
    {
        ans += (ll)rkosu_gyou[i]*(ll)ckosu_gyou[k-i];
    }
    
    for (auto &&i : ame)
    {
        if(rcounter[i.first]+ccounter[i.second]==k)
        {
            ans--;
        }
        if (rcounter[i.first] + ccounter[i.second] == k+1)
        {
            ans++;
        }
    }
    cout << ans << endl;
    
    
}