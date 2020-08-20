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
    int n;cin>> n;
    vector<int> l(n);
    rep(i,n)cin >> l[i];
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                vector<int> hen;
                hen.push_back(l[i]);
                hen.push_back(l[j]);
                hen.push_back(l[k]);
                if(*max_element(all(hen))<((l[i]+l[j]+l[k])-*max_element(all(hen))))
                {
                    if(l[i]!=l[j]&&l[j]!=l[k]&&l[k]!=l[i])
                    {
                        ans++;
                    }
                }
            }
        }
    }
    cout << ans << endl;
}