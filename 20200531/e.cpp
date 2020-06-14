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
    int n;cin >> n;
    vector<P> vc(n);
    vector<int> a(n);
    vector<int> b(n);
    rep(i,n)
    {
        int hoge, fuga; cin >> hoge >> fuga;
        vc[i] = P(hoge,fuga);
        a[i] = hoge;
        b[i] = fuga;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>());
    if(n%2==0)
    {
        int left = a[n / 2 - 1];
        int right = b[n / 2 - 1];
        int nleft, nright;nleft = left;nright = right;
        rep(i,n)
        {
            if (vc[i].first <= nleft && nleft <= vc[i].second)
            {
                nleft = vc[i].second;
            }
            if (vc[i].first <= nright && nright <= vc[i].second)
            {
                nright = vc[i].first;
            }
        }

        cout << (nleft-left)+(right-nright)+1 << endl;
    }
    if(n%2==1)
    {
        int left = a[n / 2];
        int right = b[n / 2];
        int nleft, nright;
        nleft = left;
        nright = right;
        rep(i, n)
        {
            if (nleft <= vc[i].first)
            {
                nleft = vc[i].second;
            }
            if (vc[i].second <= nright)
            {
                nright = vc[i].second;
            }
        }
        if(nleft<nright)
        {
            cout << (nleft - left+1) + (right - nright+1) << endl;
        }else
        {
            cout << (right-left+1) << endl;
        }
    }
    


}