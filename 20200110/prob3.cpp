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

vector<int> vc;
int main()
{
    int n;
    cin >> n;
    vc.resize(n);

    vector<int> p(n);
    vector<int> q(n);
    rep(i, n)
    {
        cin >> p[i];
    }

    rep(i, n)
    {
        cin >> q[i];
    }

    rep(i, n)
    {
        if (i == 0)
        {
            vc[i] = 0;
        }
        else if (i == 1)
        {
            vc[i] = 1;
        }
        else
        {
            vc[i] = vc[i - 1] * i;
        }
    }

    int a, b;
    a = 0;
    b = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < i; j++)
        {
            if (p[j] < p[i])
            {
                count++;
            }
        }
        int temp;
        temp = p[i] - 1 - count;
        a += temp * vc[n - i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < i; j++)
        {
            if (q[j] < q[i])
            {
                count++;
            }
        }
        int temp;
        temp = q[i] - 1 - count;
        b += temp * vc[n - i - 1];
    }

    //cout << a << " " << b << endl;

    cout << abs(a - b) << endl;
}