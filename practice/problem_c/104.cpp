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
    int d;
    ll g;
    cin >> d >> g;
    int counter = (1<<d);
    vector<int> p(d+1);
    vector<int> c(d+1);
    for (int i = 1; i < d+1; i++)
    {
        cin >> p[i] >> c[i];
    }
    vector<int> bit(d);
    int ans = INF;
    rep(i, counter+1)
    {
        ll score = 0;//tempがgより大かどうか
        int temp_ans = 0;
        int prob = INF;
        int rest_max = -1;
        rep(j,d)
        {
            if((i >> j)&1)
            {
                score += 100*(j+1)*p[j+1]+c[j+1];
                temp_ans += p[j+1];
                continue;
            }
            rest_max = j;
        }
        if(score < g)
        {
            int s1 = 100*(rest_max+1);
            int need = ((g-score-1)/s1)+1;
            if(need>=p[rest_max+1])continue;
            temp_ans += need;
        }
        ans=min(ans, temp_ans);
    }
    cout << ans << endl;
}