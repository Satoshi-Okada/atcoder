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
#define all(x) (x).begin(),(x).end()

const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;
int main()
{
    int n;cin >> n;
    int sum = 0;
    int k = 0;
    for (int i = 1; i < 1000; i++)
    {
        sum += i;
        if(sum!=n)
        {
            continue;
        }
        k = i;
        cout << "Yes" << endl;
        int size = n*2/k;
        vector<int> vc[size];
        int num = 1;
        for (int i = 0; i < size; i++)
        {
            for (int j = i+1; j < size; j++)
            {
                vc[i].push_back(num);
                vc[j].push_back(num);
                num++;
            }
        }
        cout << size << endl;
        rep(i,size)
        {
            cout << sz(vc[i]) << " ";
            for (auto &&j : vc[i])
            {
                cout << j << " ";
            }
            cout  << endl;
        }
        return 0;
    }
    cout << "No" << endl;
    

}