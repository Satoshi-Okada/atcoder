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


set<int> aset[26];
int main()
{
    int n;cin >> n;
    string s;cin >> s;
    int q;cin >> q;
    rep(i,n)
    {
        aset[s[i]-'a'].insert(i);
    }
    
    vector<int> ans;
    rep(i,q)
    {
        int type;cin >> type;
        if(type == 1)
        {
            int index;cin >> index;
            index--;
            char c;cin >> c;
            aset[s[index]-'a'].erase(index);
            s[index] = c;
            aset[s[index]-'a'].insert(index);
        }
        if(type == 2)
        {
            int l,r;cin >> l >> r;
            l--;r--;
            int tans = 0;
            rep(j,26)
            {
                if(aset[j].size()==0)continue;
                auto itr = aset[j].lower_bound(l);
                if(itr != aset[j].end())
                {
                    int temp = *itr;
                    if (temp <= r)
                    {
                        tans++;
                    }
                }
                
            }
            ans.push_back(tans);
        }
    }
    for (auto &&i : ans)
    {
        cout << i << endl;
    }
    
}