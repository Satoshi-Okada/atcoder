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
    string s;cin >> s;
    int counter = 0;
    for (auto &&i : s)
    {
        if(counter == 0)
        {
            if(i=='i' || i=='I')
            {
                counter++;
            }
        }
        if (counter == 1)
        {
            if (i == 'c' || i == 'C')
            {
                counter++;
            }
        }

        if (counter == 2)
        {
            if (i == 't' || i == 'T')
            {
                counter++;
            }
        }
    }
    if(counter==3)
    {
        cout << "YES" << endl;
    }else
    {
        cout << "NO" << endl;
    }
    
}