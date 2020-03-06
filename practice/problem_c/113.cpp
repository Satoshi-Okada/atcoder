#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define PI 3.14159265358979323846
#define sz(x) ((int)(x).size())

const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;
int main()
{
    int n,m;
    cin >> n >> m;
    vector<tuple<int, int, int>> vc;
    rep(i,m)
    {
        int p,y;
        cin >> p >> y;
        vc.push_back(make_tuple(p, y, i));
    }
    sort(vc.begin(),vc.end());
    vector<pair<int,int>>ans(m);
    vector<int> counter(n+1,0);
    
    rep(i,m)
    {
        pair<int,int> temp_pair;
        counter[get<0>(vc[i])]++;
        temp_pair.first = get<0>(vc[i]);
        temp_pair.second = counter[get<0>(vc[i])];
        ans[get<2>(vc[i])] = temp_pair;
    }
    rep(i,m)
    {
        cout << setw(6) << setfill('0') << ans[i].first << setw(6) << setfill('0') << ans[i].second << endl;
    }
    return 0;
}