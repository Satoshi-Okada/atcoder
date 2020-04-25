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
    string s,t;
    cin >> s >> t;
    int s_len = s.length();
    int t_len = t.length();
    vector<string> ans_cand;
    for (int i = 0; i+t_len<=s_len; i++)
    {
        int remain = s_len-t_len-i;
        string cand  = "";
        cand.append(i,'?');
        cand.append(t);
        cand.append(remain, '?');
        int flag = 0;
        for (int i = 0; i < s_len; i++)
        {
            if (cand[i]!='?' && s[i]!='?' && cand[i]!=s[i])
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            for (int i = 0; i < s_len; i++)
            {
                if (cand[i]=='?')
                {
                    if(s[i]!='?')cand[i]=s[i];
                    else cand[i] = 'a';
                }
            }
            ans_cand.push_back(cand);
        }
    }
    if (sz(ans_cand)==0)
    {
        cout << "UNRESTORABLE" << endl;
        return 0;
    }
    sort(ans_cand.begin(),ans_cand.end());
    cout << ans_cand[0] << endl;

    
}