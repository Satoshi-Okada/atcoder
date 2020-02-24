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


int check(int input)
{
    int temp = sqrt(input) + 1;
    if (input==2)
    {
        return 1;
    }
    
    for (int i = 2; i < temp+1; i++)
    {
        if (input%i==0)
        {
            return 0;
        }
    }
    return 1;
}


int main()
{
    int x;
    cin >> x;
    int flag = 0;
    x--;
    while (flag == 0)
    {
        x++;
        flag=check(x);
    }
    cout << x << endl;
}