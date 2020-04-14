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
    int n;
    cin >> n;
    vector<vector<int> > a(n, vector<int>(n-1));
    rep(i,n)
    {
        rep(j,n-1)
        {
            cin >> a[i][j];
            a[i][j]--;
        }
        reverse(a[i].begin(),a[i].end());//本当は先頭削除にしたいけど、末尾削除が早い
    }


    vector<P<int, int>> q;
    auto check = [&](int i){
        if(sz(a[i])==0) return;
        int j = a[i].back();//末尾要素はback()
        if(a[j].back()==i){
            P p(i,j);  
            if(p.second < p.first)swap(p.first, p.second);
            q.push_back(p);
        }
    };
    rep(i,n)
    {
        check(i);
    }
    int day = 0;
    while(!q.empty())
    {
        day++;
        vector<P> q;
        
        sort(q.begin(), q.end());
        q.erase(unique(q.begin(), q.end()));
        swap(q, q);
        for(P p : )
    }
}