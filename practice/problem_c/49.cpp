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

string added[] = {"maerd", "remaerd", "esare", "resare"};


int main()
{
    string s;cin >> s;
    int sl = (int)s.length();
    reverse(s.begin(), s.end());
    int index = 0;
    while(index < sl)
    {
        int flag = 0;
        for(auto &&temp: added)
        {
            int len = (int)temp.length();
            if(equal(s.begin()+index, s.begin()+index+len, temp.begin(), temp.end()))
            {
                index += len;
                flag++;
                break;
            }
        }
        if(flag == 0) break;
    }
    if(index == sl)
    {
        cout << "YES" << endl;
        return 0;
    }
    cout << "NO" << endl;
}