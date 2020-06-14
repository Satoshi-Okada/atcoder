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
int ng[3];
bool checker(int num)
{
    bool ret = true;
    rep(i,3)
    {
        if(num==ng[i])
        {
            ret = false;
        }
    }
    return ret;
}
int main()
{
    int n;cin >> n;
    rep(i,3) cin >> ng[i];
    int counter = 0;
    rep(i,3)
    {
        if(ng[i]==n)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    while(n>0 && counter < 100)
    {
        int flag = 0;
        for(int i = 3; i >=1; i--)
        {
            if(checker(n-i))
            {
                n=n-i;
                counter++;
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            cout << "NO" << endl;
            return 0;
        }
        
        
    }
    // cout << n << endl;
    // cout << counter << endl;
    if(n>0)
    {
        cout << "NO" << endl;
        
        return 0;
    }else
    {
        cout << "YES" << endl;
        return 0;
    }
    

}