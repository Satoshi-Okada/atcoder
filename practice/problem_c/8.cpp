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
    int n;cin >> n;
    vector<int> c(n);rep(i,n)cin >> c[i];
    double kitai = 0;
    rep(i,n)
    {
        int target = c[i];
        int counter = 0;
        rep(j,n)
        {
            if(i==j)continue;
            if(target%c[j]==0)counter++;
        }
        if(counter%2==0)
        {
            kitai += (double)(counter+2)/(double)(2*counter+2);
        }else
        {
            kitai+= (double)(1)/(double)2;
        }
        
    }
    cout << setprecision(11) << kitai << endl;
}