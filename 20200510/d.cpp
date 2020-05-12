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
    ll n;
    ll k;
    cin >> n >> k;
    k++;
    vector<ll> a(n);
    rep(i,n)
    {
        cin >> a[i];
        a[i]--;
    }
    vector<ll> data;
    vector<ll> counter(n);rep(i,n) counter[i] = 0;
    ll from,to, start;
    from=0;
    start = 0;
    data.push_back(from);
    counter[from]++;
    rep(i,2*n)
    {
        to = a[from];
        if(counter[to]==1)
        {
            start = to;
            break;
        }else
        {
            data.push_back(to);
            counter[to]++;
            from = to;
        }
    }
    ll ldata = (ll)data.size();
    ll cycle = 0;
    ll extra = 0;
    ll flag = 0;
    rep(i,ldata)
    {
        if(data[i] == start)
        {
            break;
        }
        extra++;
    }
    cycle = ldata-extra;
    //cout << extra << " " << cycle << endl;
    if(k<=extra)
    {

        cout << data[k-1]+(ll)1<< endl;
        return 0;
    }
    ll index = extra-1;
    if ((k - extra) % cycle==0)
    {
        index += cycle;
    }else
    {
        index += (k - extra) % cycle;
    }
    
    cout << data[index] + 1 << endl;
    return 0;
}