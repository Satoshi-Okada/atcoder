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
int main()
{
    int n;
    cin >> n;
    vector<tuple<int, int, int>> vc;
    tuple<int, int, int> G;

    rep(i, n)
    {
        int x, y, h;
        cin >> x >> y >> h;
        vc.push_back(make_tuple(x, y, h));
        if (h > 0)
        {
            G = make_tuple(x, y, h);
        }
    }

    for (int cx = 0; cx < 101; cx++)
    {
        for (int cy = 0; cy < 101; cy++)
        {
            int H = get<2>(G) + abs(cx - get<0>(G)) + abs(cy - get<1>(G));
            bool ok = true;
            rep(i, n)
            {
                int h_temp = max(H - abs(cx - get<0>(vc[i])) - abs(cy - get<1>(vc[i])),0);
                if (h_temp != get<2>(vc[i]))
                {
                    ok = false;
                    break;
                }
            }
            if(ok)
            {
                cout << cx << ' '<< cy << ' '<< H << endl;
                return 0;
            }
        }
    }
}