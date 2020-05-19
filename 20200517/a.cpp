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
int hoge[] = {2,4,5,7,9};
int fuga[] = {0,1,6,8};

int main()
{
    int n;cin >> n;
    n = n%10;
    for(auto i : hoge)
    {
        if(n==i)
        {
            cout << "hon" << endl;
            return 0;
        }
    }
    for (auto i : fuga)
    {
        if(n==i)
        {
            cout << "pon" << endl;
            return 0;
        }
    }
    if(n==3)
    {
        cout << "bon" << endl;
        return 0;
    }
}