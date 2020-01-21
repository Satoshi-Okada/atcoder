#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define PI 3.14159265358979323846
#define sz(x) ((int)(x).size())

const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

const int di[] = {-1,0,1,0};
const int dj[] = {0,1,0,-1};

typedef pair<int, int> P;
int main()
{
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i, h)
    {
        cin >> s[i];
    }
    int ans = 0;
    rep(si, h)
    {
        rep(sj, w)
        {
            if (s[si][sj] == '#')continue;
            
            vector<vector<int> > dist(h, vector<int>(w, INF));
            queue<P> q;
            auto update = [&](int i, int j, int x){
                if (dist[i][j] != INF) return;
                dist[i][j] = x;
                q.push(P(i,j));
            };
            update(si,sj,0);
            while(!q.empty())
            {
                int i = q.front().first;
                int j = q.front().second;
                q.pop();
                rep(dir,4)
                {
                    int ni = i+di[dir];
                    int nj = j+dj[dir];
                    if (ni<0 || ni>=h || nj < 0 || nj>=w)continue;
                    if (s[ni][nj] == '#') continue;
                    update(ni,nj,dist[i][j]+1);
                }
            }
            rep(i,h)
            {
                rep(j,w)
                {
                    if (dist[i][j]==INF)
                    {
                        continue;
                    }
                    ans = max(ans, dist[i][j]);
                }
            }
        }
    }
    cout << ans << endl;
}