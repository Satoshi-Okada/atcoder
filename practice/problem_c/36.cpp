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

struct hito
{
    int a;
    int index;
    int b;
};

bool compare_a(hito x, hito y)
{
    return x.a < y.a;
}
bool compare_index(hito x, hito y)
{
    return x.index < y.index;
}
int main()
{
    int n;cin >> n;
    vector<hito> people(n);
    rep(i,n)
    {
        hito x;
        cin >> x.a;
        x.index = i;
        people[i] = x;
    }
    sort(people.begin(),people.end(), compare_a);
    int counter = -1;
    int comp = -1;
    rep(i,n)
    {
        if(people[i].a > comp)
        {
            counter++;
            comp = people[i].a;
        }
        people[i].b = counter;
    }
    sort(people.begin(),people.end(), compare_index);
    rep(i,n)
    {
        cout << people[i].b << endl;
    }
    

}