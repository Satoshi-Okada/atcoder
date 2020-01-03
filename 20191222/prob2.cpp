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
    string alice;
    string bob;
    cin >> alice >> bob;
    vector<char> ans;
    int flag = 0;
    for (int i = 0; i < 2*n; i++)
    {
        if (flag % 2== 0)
        {
            ans.push_back(alice[i/2]);
            flag++;
        }else
        {
            ans.push_back(bob[i/2]);
            flag++;
        }
    }
    for (int i = 0; i < 2*n; i++)
    {
        cout << ans[i];
    }
    cout  << endl;
    
}