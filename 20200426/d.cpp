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
int amari[200005][10]
ll dp
int main()
{
    string s;
    cin >> s;
    rep(i,10)
    {
        amari[0][i] = i; 
    }
    for (int i = 1; i < 2000005; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            amari[i][j] = (amari[i-1][j]*10)%2019;
        }
    }
    int len = s.length();

    
    
    

}