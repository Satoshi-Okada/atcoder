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
    int a,b;cin >> a >> b;
    a = abs(a - 0);
    b = abs(b - 0);
    if(a<b)
    {
        cout << "Ant" << endl;
        return 0;
    }else if (b < a)
    {
        cout << "Bug" << endl;
        return 0;
    }else
    {
        cout << "Draw" <<endl;
        return 0;
    }
    
    
}