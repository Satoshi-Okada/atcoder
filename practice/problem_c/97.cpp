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
    string s;
    cin >> s;
    int k;
    cin >> k;
    vector<string> vc;
    string sub;
    for (int i = 1; i < k+1; i++)
    {
        for (int j = 0; j+i-1<s.length(); j++)
        {
            sub = s.substr(j,i);
            vc.push_back(sub);
        }
    }
    sort(vc.begin(),vc.end());
    unique(vc.begin(),vc.end());
    
    cout << vc[k-1] << endl;
    
    
}