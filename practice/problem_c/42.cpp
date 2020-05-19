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
    int n,k;cin >> n >> k;
    vector<int> vc(k);rep(i,k) cin >> vc[i];
    int ans = n;
    while(true)
    {
        int temp = ans;
        int flag = 0;
        while(temp!= 0)
        { 
            int target = temp%10;
            for(auto i: vc)
            {
                if(target == i)
                {
                    flag = 1;
                    break;
                }
            }
            if(flag == 1)
            {
                break;
            }
            temp /=10;
        }
        if(flag == 1)
        {
            ans++;
        }else
        {
            break;
        }
        
        
    }

    cout << ans << endl;
}