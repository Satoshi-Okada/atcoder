#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define PI 3.14159265358979323846
#define sz(x) ((int)(x).size())

const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

struct status
{
    int num;
    string result;
};

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> vc(n + 1, -1);
    vector<int> ac(n + 1, 0);
    vector<int> penalty(n + 1, 0);

    rep(i, m)
    {
        int number;
        string temp;
        cin >> number >> temp;
        if (temp == "AC")
        {
            if (vc[number] == -1)
            {
                ac[number] = 1;
                vc[number] = 1;
            }
        }
        else
        {
            if (vc[number] == -1)
            {
                penalty[number]++;
            }
        }
    }
    int ans_ac = 0;
    int ans_pnealty = 0;
    for (int i = 1; i < n + 1; i++)
    {
        if (ac[i] == 1)
        {
            ans_ac += ac[i];
            ans_pnealty += penalty[i];
        }
    }

    cout << ans_ac << " " << ans_pnealty << endl;
}