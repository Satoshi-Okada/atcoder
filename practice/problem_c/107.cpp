#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define PI 3.14159265358979323846
#define sz(x) ((int)(x).size())

const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;
int main()
{
    int n,k;
    cin >> n >> k;
    vector<int> x(n);
    rep(i,n)
    {
        cin >> x[i];
    }
    int dist = INF;

    for (int i = 0; i+k-1<n ; i++)
    {
        int dist_temp;
        dist_temp = min(abs(x[i])+abs(x[i+k-1]-x[i]), abs(x[i+k-1])+abs(x[i+k-1]-x[i]));
        dist = min(dist, dist_temp);
    }
    
    cout << dist << endl;
}