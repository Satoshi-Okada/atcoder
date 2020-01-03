#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <math.h>
#include <list>
#include <stack>
#include <queue>
#include <utility>
#include<bitset>


using namespace std;

#define ll long long
#define ld long double
#define MOD 1000000007
#define rep(i, n) for(int i = 0;i < n;i++)
#define PI 3.14159265358979323846

int main()
{
    int n;
    cin >> n;
    vector<vector<int> > vc(n);

    ll num = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        bitset<63> temp(num);
        vector<int> array(63);
        for (int j = 0; j < 63; j++)
        {
            array[j] = int(temp[j]);
        }
        vc[i] = array;
    }

    ll ans = 0;
    for (int i = 0; i < 63; i++)
    {
        ll count = 0;
        for (ll j = 0; j < n; j++)
        {
            if (vc[j][i] == 1)
            {
                count++;
            }       
        }
        //cout << count << endl;
        //num = 1 << i;
        num = pow(2,i);
        num =num%MOD;
        ll num2;
        num2 = count*(n-count)%MOD;
        ans+=(num2*num)%MOD;
        ans = ans%MOD;
    }
    ans = ans%MOD;
    cout << ans << endl;
    
}