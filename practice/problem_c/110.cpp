#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define PI 3.14159265358979323846
#define sz(x) ((int)(x).size())

const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;
int main()
{
    string s,t;
    cin >> s >> t;
    map<char,char> stot;
    int len = sz(s);
    for (int i = 0; i < len; i++)
    {
        if(stot.count(s[i]))
        {
            if (stot[s[i]]!=t[i])
            {
                cout << "No" << endl;
                return 0;
            }
            continue;
        }

        stot[s[i]] = t[i];
    }
    map<char, char> ttos;
    for (int i = 0; i < len; i++)
    {
        if (ttos.count(t[i]))
        {
            if (ttos[t[i]] != s[i])
            {
                cout << "No" << endl;
                return 0;
            }
            continue;
        }

        ttos[t[i]] = s[i];
    }

    cout << "Yes" << endl;
    return 0;
}