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

vector<long> ans;
long n;

int check(long x)
{
    if (x>n)
    {
        return 0;
    }
    
    int flag[] = {0,0,0};
    int temp;
    while(x!=0)
    {
        temp = x%10;
        if (temp==3)
        {
            flag[0] = 1;
        }else if (temp==5)
        {
            flag[1] = 1;
        }else if (temp==7)
        {
            flag[2] =1;
        }
        x = x/10;
    }
    int sum = 0;
    rep(i,3)
    {
        sum +=flag[i];
    }

    if (sum==3)
    {
        return 1;
    }else
    {
        return 0;
    }
    
    
}
void dfs(long x)
{
    if (check(x))
    {
        ans.push_back(x);
    }
    if (x<n)
    {
        dfs(x * 10 + 3);
        dfs(x * 10 + 5);
        dfs(x * 10 + 7);
    }
}
 
int main()
{
    cin >> n;
    dfs(0);
    cout << sz(ans)<< endl;
}