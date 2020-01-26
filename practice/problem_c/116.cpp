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

vector<int> h;
int water(int head, int tail)
{
    int mn = INF;
    for (int i = head; i < tail+1; i++)
    {
        mn = min(h[i], mn);
    }
    for (int j = head; j < tail + 1; j++)
    {
       h[j] -= mn;
    }

    return mn;
} 
int main()
{
    int n;
    cin >> n;

    h.resize(n);

    rep(i,n)
    {
        cin >> h[i];
    }
    int ans = 0;
    int flag = 0;
    while (flag == 0)
    {
        int head ,tail;
        int temp = 0;
        rep(i,n)
        {
            if (h[i]!= 0 && temp ==0)
            {
                head = i;
                temp++;
            }
            
            if (h[i] == 0&& temp == 1)
            {
                tail = i-1;
                temp++;
            }
        }
        if (temp == 0)
        {
            flag = 1;
        }else if (temp == 1)
        {
            
            ans+=water(head,n-1);

        }else
        {
            ans+=water(head,tail);
        }
    }

    cout << ans << endl;  
}