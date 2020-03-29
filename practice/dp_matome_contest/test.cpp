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

int dp[100][2][2];
int main()
{
    string n;
    cin >> n;
    vector<int> number;
    for (auto i : n)
    {
        number.push_back(i-'0');
    }
    dp[0][0][0] = 1;
    for (int i = 0; i < sz(number); i++)
    {
        for (int smaller = 0; smaller < 2; smaller++)
        {
            for (int j = 0; j < 2; j++)
            {
                for (int x = 0; x <=(smaller ? 9 : number[i]); x++)
                {
                    dp[i+1][smaller || x < number[i]][j || x==3]+=dp[i][smaller][j];
                }
            }
        }
    }
    cout << dp[sz(number)][0][1] + dp[sz(number)][1][1] << endl;
}