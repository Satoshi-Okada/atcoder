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
    ll n; cin >> n;
    vector<char> vc;
    ll div = 26;
    while(n>0)
    {
        char temp;
        if (n % 26==0)
        {
            temp = 'z';
            vc.push_back(temp);
            n /= 26;
            n--;
        }else
        {
            temp = (int)('a' + n % 26-1);
            vc.push_back(temp);
            n /= 26;
        }
       
    }
    reverse(vc.begin(), vc.end());
    for (auto &&i : vc)
    {
        cout << i;
    }
    cout  << endl;
    
}