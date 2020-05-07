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
    map<char, int> smp;
    int sl = (int)s.length();
    for (int i = 0; i < sl; i++)
    {
        if (!smp.count(s[i]))
        {
            smp[s[i]] = 1;
            continue;
        }
        smp[s[i]]++;
    }
    int tl = (int)t.length();
    map<char, int> tmp;
    for (int i = 0; i < tl; i++)
    {
        if (!tmp.count(t[i]))
        {
            tmp[t[i]] = 1;
            continue;
        }
        tmp[t[i]]++;
    }
    bool result = true;
    int sms = (int)smp.size();
    int tms = (int)tmp.size();
    if (sms != tms)
    {
        result = false;
    }
    else
    {
        for(int i = 0; i < sms; i++)
        {
            if(smp[i].second!=tmp[i].second)
            {
                result = false;
                break;
            }
        }
    }
    
    cout << result << endl;
}