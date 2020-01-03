#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <math.h>
#include <list>
#include <stack>
#include <queue>
#include <utility>

using namespace std;

#define ll long long
#define MOD 1000000007
#define rep(i, n) for(int i = 0;i < n;i++)

int main()
{
    int n;
    cin >> n;
    for (int i = 9; i > 0; i--)
    {
        if (n%i==0)
        {
            n=n/i;
            break;
        }
        
    }
    if (n<10)
    {
        cout << "Yes" << endl;
    }else
    {
        cout << "No" << endl;
    }
    
    
    
    
}