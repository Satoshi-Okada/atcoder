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
int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    vector<int> l(n);

    rep(i, n)
    {
        cin >> l[i];
    }
    //a1,b2,c3,null0

    vector<int> flag(n);
    int mn = INF;
    rep(i, (int)pow(4, n))
    {
        int temp = i;
        int temp_a = 0;
        int temp_b = 0;
        int temp_c = 0;
        int counter = 0;
        int flag;
        for (int j = n - 1; j >= 0; j--)
        {

            flag = temp / (int)pow(4, j);
            temp -= flag * (int)pow(4, j);
            if (flag == 3)
            {
                if (temp_c != 0)
                {
                    counter++;
                }
                temp_c += l[j];
            }
            else if (flag == 2)
            {
                if (temp_b != 0)
                {
                    counter++;
                }
                temp_b += l[j];
            }
            else if (flag == 1)
            {
                if (temp_a != 0)
                {
                    counter++;
                }
                temp_a += l[j];
            }
        }
        if (temp_a == 0 || temp_b == 0 || temp_c == 0)
        {
            continue;
        }
        int hypo = counter * 10 + abs(a - temp_a) + abs(b - temp_b) + abs(c - temp_c);
        //cout << hypo << endl;
        mn = min(hypo, mn);
    }

    cout << mn << endl;
}