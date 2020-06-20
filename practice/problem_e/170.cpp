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
multiset<int> s[200006];
multiset<int> maxs;
int main()
{
    int n,q;cin >> n >> q;
    
    auto getMax = [&](int i) {
        if(s[i].size()==0) return -1;
        return *s[i].rbegin();
    };
    auto addYochien = [&](int i) {
        int x = getMax(i);
        if(x==-1)return;
        maxs.insert(x);
    };
    auto delYochien = [&](int i) {
        int x = getMax(i);
        if(x == -1) return;
        maxs.erase(maxs.find(x));
    };
    auto addEnji = [&](int i, int x) {
        delYochien(i);
        s[i].insert(x);
        addYochien(i);
    };
    auto delEnji = [&](int i, int x) {
        delYochien(i);
        s[i].erase(s[i].find(x));
        addYochien(i);
    };
    vector<int> a(n);
    vector<int> b(n);

    rep(i, n)
    {
        cin >> a[i] >> b[i];
        addEnji(b[i],a[i]);
    }
    vector<int> vc(q);
    vector<int> vd(q);
    rep(i, q)
    {
        cin >> vc[i] >> vd[i];
    }
    vector<int> ans(q);
    rep(i, q)
    {
        int c,d;
        c = vc[i];d = vd[i];
        c--;
        delEnji(b[c], a[c]);
        b[c] = d;
        addEnji(b[c], a[c]);
        ans[i] = *maxs.begin();
    }
    rep(i,q)cout << ans[i] << endl;
}