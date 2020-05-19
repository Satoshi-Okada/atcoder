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

bool sort_first(P a, P b)
{
    return a.first > b.first;
}
int main()
{
    int n;cin >> n;
    vector<P> vc(n);
    rep(i,n)
    {
        int height;cin >> height;
        int num;num = i+1;
        vc[i] = P(height, num);
    }
    sort(vc.begin(),vc.end(), sort_first;
    for(auto i: vc)
    {
        cout << i.second << endl;
    }  

}