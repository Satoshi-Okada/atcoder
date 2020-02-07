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

int n;
vector<int> vc;
string reject[] = {"AGC", "ACG", "AGAC", "AGCC", "AGGC", "AGTC","AAGC","ACGC","AGGC","ATGC","AGC"};
ll ans = 0;
template <class T>
bool contain(const std::string &s, const T &v)
{
    return s.find(v) != std::string::npos;
}
bool check(string temp)
{
    int num = sizeof(reject);
    rep(i,num)
    {
        if(contain(temp, reject[i]))
        {
            return false;
        }
    }
    return true;
}

int dfs(string s)
{
    if (s.length()<4)
    {
        if (check(s))
        {
            ans++;
        }
        dfs(s + "A");
        dfs(s + "G");
        dfs(s + "C");
        dfs(s + "T");
    }else
    {
        if (check(s))
        {
            ans++;
            if (s.length() < n)
            {
                dfs(s + "A");
                dfs(s + "G");
                dfs(s + "C");
                dfs(s + "T");
            }
        }
    }
    
    
}

int main()
{
    cin >> n;
    vc.resize(n+1);
    dfs("");
    cout << ans << endl;

}