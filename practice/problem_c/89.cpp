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
char head_char[] = {'M', 'A', 'R', 'C', 'H'};
int counter[5];

int main()
{
    int n;
    cin >> n;
    vector<string> name(n);
    rep(i, n) cin >> name[i];

    rep(i,n)
    {
        //cout << name[i][0] << endl;
        rep(j, 5)
        {
           if (head_char[j]==name[i][0])
           {
               counter[j]++;
           }
        }
    }
    ll ans = 0;
    int check = 0;
    rep(i,5)
    {
        if (counter[i]!=0)
        {
            check++;
        }
    }
    //cout << check << endl;

    ll add;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            for (int k = j+1; k < 5; k++)
            {
                add = (ll)counter[i] * (ll)counter[j] * (ll)counter[k];
                //cout << add << endl;
                ans += add;
            }
        }
    }
    cout << ans << endl;
    return 0;

}