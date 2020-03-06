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

bool compare_by_seond(pair<int, int> a, pair<int, int> b)
{
    if (a.second != b.second)
    {
        //return a.second < b.second; //昇順
        return a.second > b.second; // 降順
    }
    else
    {
        return a.first < b.first;
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    rep(i,n)
    {
        cin >> v[i];
    }
    vector<int> gu(100005, 0);
    vector<int> ki(100005, 0);

    rep(i,n)
    {
        if (i%2==0) 
        {
            gu[v[i]]++;
        }
        if (i % 2 == 1)
        {
            ki[v[i]]++;
        }
    }
    vector<pair<int, int>> gu_vec;
    vector<pair<int, int>> ki_vec;
    rep(i,100005)
    {
        if (gu[i]!=0)
        {
            gu_vec.push_back(make_pair(i, gu[i]));
        }
        if (ki[i] != 0)
        {
            ki_vec.push_back(make_pair(i,ki[i]));
        }
    }
    sort(gu_vec.begin(), gu_vec.end(), compare_by_seond);
    sort(ki_vec.begin(), ki_vec.end(), compare_by_seond);
    int sub = 0;

    if (gu_vec[0].first==ki_vec[0].first)   
    {
        sub = max(gu_vec[0].second + ki_vec[1].second, ki_vec[0].second + gu_vec[1].second);
    }else
    {
        sub = gu_vec[0].second + ki_vec[0].second;
    }
    
    
    int ans = 0;
    ans =  n- sub;
    cout << ans << endl;

}