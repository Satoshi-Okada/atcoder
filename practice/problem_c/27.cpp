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
ll n;
void dfs(ll d)
{
    ll counter = 1;
    int flag = 0;
    if(d%2==1)
    {
        for (ll i = 0; i < d; i++)
        {
            if(flag==0)
            {
                counter *= 2;
            }else
            {
                counter=2*counter+1;
            }
            flag = (flag + 1) % 2;
        }
        if(counter>n)
        {
            cout << "Aoki" << endl;
        }else
        {
            cout << "Takahashi" << endl;
        }
    }else
    {
        for (ll i = 0; i < d; i++)
        {
            if (flag == 1)
            {
                counter *= 2;
            }
            else
            {
                counter = 2 * counter + 1;
            }
            flag = (flag + 1) % 2;
        }
        if (counter > n)
        {
            cout << "Takahashi" << endl;
        }
        else
        {
            cout << "Aoki" << endl;
        }
    }
    
    
    
}


int main()
{
    cin >> n;
    ll d = 0;
    //dは地雷が含まれてる高さ
    while(true)
    {
        if((ll)1<<d <=(n+1) && n+1 <= ((ll)1<<(d+1))-1) break;
       
        d++;
    }
    
    dfs(d);
    
    
}