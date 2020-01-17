#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define PI 3.14159265358979323846
#define sz(x) ((int)(x).size())

const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;
int main()
{
    int n, k, m;
    cin >> n >> k >> m;

    vector<int> score(n);
    int total = 0;
    rep(i, n - 1)
    {
        cin >> score[i];
        total += score[i];
    }

    int diff = m * n - total;
    if (diff >= 0 && diff <= k)
    {
        cout << diff << endl;
    }
    else if (diff > k)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}