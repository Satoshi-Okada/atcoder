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

bool compare(pair<int, string> a, pair<int, string> b)
{
    if (a.first != b.first)
    {
        return a.first > b.first; //昇順
        //return a.second > b.second; // 降順
    }
    else
    {
        return a.second < b.second;
    }
    
    
}

int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i,n)
    {
        cin >> s[i];
    }
    sort(s.begin(),s.end());
    int counter = 1;
    vector<pair<int, string>> ans;
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            pair<int, string> temp_pair;
            temp_pair.first = counter;
            temp_pair.second = s[i];
            ans.push_back(temp_pair);
            continue;
        }
        if (s[i].compare(s[i+1])==0)
        {
            counter++;
            continue;
        }
        pair<int, string> temp_pair;
        temp_pair.first = counter;
        temp_pair.second = s[i];
        ans.push_back(temp_pair);
        counter = 1;
    }
    sort(ans.begin(),ans.end(), compare);
    //for(auto&u: ans) cout << u.first << u.second << endl; 
    bool ok = true;
    int index = 0;
    while(ok)
    {
        if (ans[index].first != ans[index+1].first)
        {
            ok = false;
        }
        cout << ans[index].second << endl;
        index++;
    }
}
    