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
void print()
{
    cout << endl;
}

template <class Head, class... Tail>
void print(Head &&head, Tail &&... tail)
{
    cout << head;
    if (sizeof...(tail) != 0)
        cout << " ";
    print(forward<Tail>(tail)...);
}

template <class T>
void print(vector<T> &vec)
{
    for (auto &a : vec)
    {
        cout << a;
        if (&a != &vec.back())
            cout << " ";
    }
    cout << endl;
}

template <class T>
void print(vector<vector<T>> &df)
{
    for (auto &vec : df)
    {
        print(vec);
    }
}


int main()
{
    int n,m;cin >> n >> m;
    vector<int> imosu(m);
    int sum = 0;
    rep(i,n)
    {
        int l,r, s;cin >> l >> r>> s;
        l--;
        imosu[l] += s;
        imosu[r] -= s;
        sum += s;
    }
    int temp = 0;
    rep(i,m)
    {
        temp += imosu[i];
        imosu[i] = temp;
    }
    int mn = *min_element(imosu.begin(), imosu.end());

    //print(imosu);
    cout << sum-mn << endl;
}