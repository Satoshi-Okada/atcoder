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
bool sort_func(vector<int> a, vector<int> b)
{
    int al = (int)a.size();
    for(int i = 0; i < al; i++)
    {
        if(a[i]!=b[i])
        {
            return a[i] > b[i];
        }
    }
}
int main()
{
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n ; i++) cin >> a[i];
    vector<vector<int> > array;
    for(int i = 0; i <=n-k; i++)
    {
        vector<int> temp;
        for(int j = 0; j < k; j++)
        {
            temp.push_back(a[i+j]);
        }
        array.push_back(temp);
    }
    sort(array.begin(), array.end(), sort_func);
    for(int i = 0; i < k; i++)
    {
        cout << array[0][i];
    }
    cout  << endl;

}