/////////
#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <math.h>
#include <list>
#include <stack>
#include <queue>
#include <utility>
#include <bitset>

using namespace std;

#define ll long long
#define ld long double
#define MOD 1000000007
#define rep(i, n) for (int i = 0; i < n; i++)
#define PI 3.14159265358979323846
//////////

/////////
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define PI 3.14159265358979323846
#define sz(x) ((int)(x).size())

const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;
////////

//最小公倍数を求める
template <typename T>
T lcm(T x, T y)
{
  T xy = x * y;
  if (x < y)
  {
    swap(x, y);
  }
  T r;
  r = x % y;
  while (r != 0)
  {
    x = y;
    y = r;
    r = x % y;
  }
  return xy / y;
};

//最大公約数を求める
template <typename T>
T gcd(T x, T y)
{
  T xy = x * y;
  if (x < y)
    swap(x, y);
  T r;
  r = x % y;
  while (r != 0)
  {
    x = y;
    y = r;
    r = x % y;
  }
  return y;
};
//

//combination 計算(dpバージョン)
ll n = ;
ll r = ;
ll **comb; //二次元配列　nCrはcomb[n][r]に相当　求められる範囲は0C0〜nCnまで
comb = new ll *[n + 1];
for (int i = 0; i < n + 1; i++)
{
  comb[i] = new ll[n + 1];
  for (int j = 0; j < n + 1; j++)
  {
    comb[i][j] = 0; //初期化
  }
}

comb[0][0] = 1; //0C0だけ先に処理

for (int i = 1; i < n + 1; i++)
{
  for (int j = 0; j < i + 1; j++)
  {
    if (j == 0 || j == i)
    {
      comb[i][j] = 1;
    }
    else
    {
      comb[i][j] = comb[i - 1][j - 1] + comb[i - 1][j];
    }
    comb[i][j] %= MOD; //数がデカすぎるときはMODで割ってるよ！
  }
}
//

//早いコンビネーション
const int MAX = 3 * (1e6 + 5) + 5;
const int MOD = 1000000007;

long long fac[MAX], finv[MAX], inv[MAX];

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

long long COM(int n, int k)
{
  if (n < k)
    return 0;
  if (n < 0 || k < 0)
    return 0;
  return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}
//

//2進数表示した時の１が立つ数
int counter(int x)
{
  if (x == 0)
    return 0;
  return counter(x >> 1) + (x & 1);
}
//

//vector pair sort これは小さいもの順//
bool compare_by_second(pair<int, int> a, pair<int, int> b)
{
  return a.second < b.second;
}

//

//文字列がある部分文字列を含むか判定するやつ
template <class T>
bool contain(const std::string &s, const T &v)
{
  return s.find(v) != std::string::npos;
}
//



