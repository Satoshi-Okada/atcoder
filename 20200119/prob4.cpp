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
    int n;
    cin >> n;
    vector<ll> dp(n + 1);
    dp[1] = 1;
    for (int i = 2; i < n + 1; i++)
    {
        dp[i] = dp[i - 1];
        int head = 1;
        int tail;
        tail = i % 10;
        int counter = 0;
        while (head != 0)
        {
            counter++;
            head = i / (int)pow(10, counter);
        }
        counter--; //桁数
        head = i / (int)pow(10, counter);
        //cout << head << " " << tail << endl;
        ll add = 0;
        if (tail == 0)
        {
            continue;
        }

        if (head > tail)
        {
            rep(j, counter)
            {
                add += 2 * (ll)pow(10, j);
            }
        }
        else if (head < tail)
        {
            if (counter == 1)
            {
                continue;
            }

            rep(j, counter - 1)
            {
                add += 2 * (ll)pow(10, j);
            }
        }
        else
        {
            if (counter == 0)
            {
                add++;
            }
            else if (counter == 1)
            {
                add += 3; //22とか33
            }
            else if (counter > 1)
            {
                add += 2; //1桁
                int temp;
                temp = i;
                temp -= head * (ll)pow(10, counter);
                temp -= tail;
                rep(j, counter - 1)
                {
                    add += 2 * (ll)pow(10, j);
                }
                add += (temp / 10) * 2;
                add++; //自分
            }
        }

        dp[i] += add;
    }
    /*rep(i, n)
    {
        cout << dp[i] << endl;
    }*/
    //cout << dp[n - 1] << endl;
    cout << dp[n] << endl;
}