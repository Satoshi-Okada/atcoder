#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define PI 3.14159265358979323846
#define sz(x) ((int)(x).size())

const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int count0 = 0;
    int count1 = 0;

    rep(i, n)
    {
        if (s[i] == '0')
        {
            count0++;
        }
    }

    count1 = n - count0;
    cout << min(count0, count1) << endl;
}