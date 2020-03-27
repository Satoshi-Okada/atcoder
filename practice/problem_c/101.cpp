#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> P;
#define ll long long
#define ld long double
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define PI 3.14159265358979323846
#define sz(x) ((int)(x).size())
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)

const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int counter(int left, int right, int k)
{
    int right_side;
    if (right <= 0)
    {
        right_side = 0;
    }
    else
    {
        right_side = (right - 1) / (k-1) + 1;
    }
    int left_side;
    if (left <= 0)
    {
        left_side = 0;
    }
    else
    {
        left_side = (left - 1) / (k-1) + 1;
    }

    return right_side + left_side;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    int one_index;
    rep(i, n)
    {
        cin >> a[i];
        if (a[i] == 1)
        {
            one_index = i;
        }
    }

    int left, right;
    left = one_index - 0;
    right = (n - 1) - one_index;

    int ans = INF;
    int temp;

    for (int i = 0; i <= k-1; i++)
    {
        temp = counter(left-i, right-(k-1-i),k)+1;
        ans = min(ans, temp);
    }
    cout << ans << endl;
}