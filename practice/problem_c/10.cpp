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
    P start, end;cin >> start.first >> start.second >> end.first >> end.second;
    int t,v;cin >> t >> v;
    int n; cin >> n;
    vector<P> house(n);

    rep(i,n)
    {
        cin >> house[i].first >> house[i].second;
    }

    int sum = t*v;
    bool result = false;
    rep(i,n)
    {
        double temp = 0;
        temp += sqrt((double)((start.first - house[i].first) * (start.first - house[i].first) + (start.second - house[i].second) * (start.second - house[i].second)));
        temp += sqrt((double)((end.first - house[i].first) * (end.first - house[i].first) + (end.second - house[i].second) * (end.second - house[i].second)));
        if((double)sum >= temp)
        {
            result = true;
            break;
        }
    }

    if(result)
    {
        cout << "YES" << endl;
        return 0;
    }
    cout << "NO" << endl;
}
