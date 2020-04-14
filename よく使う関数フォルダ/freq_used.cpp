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



//gcdとlcm
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
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
//mainでCOMinitをrunしてから、COM計算

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

//素数判定
template<class T>
bool isPrime(T x)
{
  T i;
  if (x < 2)
    return false;
  else if (x == 2)
    return true;
  if (x % 2 == 0)
    return false;
  for (i = 3; i * i <= x; i += 2)
    if (x % i == 0)
      return false;
  return true;
};


//繰り返し二乗法。雰囲気だけ
template <class T, class S>

T PowMod(S n, T m)
{
  if (m==0)
  {
    return 1;
  }
  if (m%2 == 0)
  {
    T temp = PowMod(n, m/2);
    return temp*temp;
  }
  return n*PowMod(n, m-1)%MOD;
}

//


//MODの逆元を用いたコンビネーション
template<class T>
T inv_num(T num)
{
  return PowMod(num, MOD-2);
};

T COM(T n, T a)
{
  T X,Y;
  X = 1;
  Y = 1;
  rep(i,a)
  {
    X *= (n-i)%MOD;
    Y *= (a-i)%MOD;
  }
  return X*(inv_num(Y))%MOD;
};
//

//UnionFind
struct UnionFind
{
  vector<int> d;
  UnionFind(int n = 0) : d(n, -1) {}
  int root(int x)
  {
    if (d[x] < 0)
      return x;
    return d[x] = root(d[x]);
  }
  bool unite(int x, int y)
  {
    x = root(x);
    y = root(y);
    if (x == y)
    {
      return false;
    }
    if (-d[x] < -d[y])
      swap(x, y); //y.size()が小でx.size()が大にしておきたい
    d[x] += d[y];
    d[y] = x;
    return true;
  }
  bool same(int x, int y) { return root(x) == root(y); }
  int size(int x) { return -d[root(x)]; }
};
//