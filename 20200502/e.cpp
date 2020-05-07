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
    int n,m;
    cin >> n >> m;
    vector<int> vc(n+1);
    vector<int> vc2(n+1);
    for(int i = 1; i <=n ; i++)
    {
        vc[i] = i;
        vc2[i] = n-i+1;
    }
    int counter = 1;
    int index = 1;
    while(counter < m+1)
    {
        if(n%2==0)
        {
            if(vc2[index]-vc[index] != n/2)
            {
                cout << vc[index] << " " << vc2[index] << endl;
                counter++;
            }
            index++;
        }else
        {
            cout << vc[index] << " " << vc2[index] << endl;
            index++;
            counter++;
        }
        
    }
    
}