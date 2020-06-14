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
    int n;cin >> n;
    n %=30;
    int given[] = {1,2,3,4,5,6};
    for(int i = 0; i < n; i++)
    {
        swap(given[i % 5], given[i % 5 + 1]);
    }
    for(auto i: given)cout << i;
    cout  << endl;
}
