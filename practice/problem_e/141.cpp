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
    int n;
    string s;
    cin >> n >> s;

    int smaller, larger;
    larger = n;
    smaller = -1;
    int len;
    
    while(larger-smaller>1)
    {
        len =smaller + (larger-smaller)/2;
        int flag = 0;
        for (int i = 0; i + len -1<= n-1; i++)
        {
            for (int j = i+len; j+len-1 <= n-1 ; j++)
            {
                string str1 = s.substr(i,len);
                string str2 = s.substr(j, len);
                if(str1 == str2)
                {
                    flag = 1;
                    break;
                }
            }
            if(flag) break;
        }
        if (flag)
        {
            smaller = len;
        }else
        {
            larger = len;
        }
        //cout << len << endl;
    }
    cout << smaller << endl;
    return 0;
}