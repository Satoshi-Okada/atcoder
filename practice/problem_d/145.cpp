#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define PI 3.14159265358979323846
#define sz(x) ((int)(x).size())

const int MAX = 3 * (1e6 + 5) + 5;
const int MOD = 1000000007;

long long fac[MAX], finv[MAX], inv[MAX];

// テーブルを作る前処理
void COMinit()
{
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++)
    {
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD % i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}

// 二項係数計算
ll COM(int n, int k)
{
    if (n < k)
        return 0;
    if (n < 0 || k < 0)
        return 0;
    return (fac[n] * (finv[k] * finv[n - k] % MOD)) % MOD;
}

int main()
{
    int x, y;
    cin >> x >> y;

    if ((x + y) % 3 != 0)
    {
        cout << "0" << endl;
        return 0;
    }

    int k = x - (x + y) / 3;
    int l = y - (x + y) / 3;

    COMinit();
    //combination(n, r);
    //cout << f[n] << " " << f[r] << " " << f[n - r] << endl;
    cout << COM(k + l, k) << endl;
    return 0;
}