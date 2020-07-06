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
int counter[4];
int main()
{
    int n;cin >> n;
    rep(i,n)
    {
        string s;
        cin >> s;
        if(s=="AC")
        {
            counter[0]++;
            continue;
        }
        if (s == "WA")
        {
            counter[1]++;
            continue;
        }
        if (s == "TLE")
        {
            counter[2]++;
            continue;
        }
        if (s == "RE")
        {
            counter[3]++;
            continue;
        }
    }
    cout << "AC x " << counter[0] << endl;
    cout << "WA x " << counter[1] << endl;
    cout << "TLE x " << counter[2] << endl;
    cout << "RE x " << counter[3] << endl;
}