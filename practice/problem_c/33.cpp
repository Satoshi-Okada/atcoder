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
    string s;cin >> s;
    // s = '+'+s+'+';
    int sl = (int)s.length();
    int index = 0;
    int start = 0;
    vector<string> vc;
    while(true)
    {
        if(s[index]=='+')
        {
            vc.push_back(s.substr(start, index - start));
            start = index+1;
        }
        if(index == sl)
        {
            vc.push_back(s.substr(start, index-start));
            break;
        }
        index++;
    }
    int counter = sz(vc);
    for(auto i: vc)
    {
        for(auto j:i)
        {
            if(j=='0')
            {
                counter--;
                break;
            }
        }
    }
    cout << counter << endl;
    
}