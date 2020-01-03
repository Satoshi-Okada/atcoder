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
    vector<int> l(n);
    rep(i,n)
    {
        cin >> l[i];
    }
    sort(l.begin(),l.end(),greater<int>());
    ll counter = 0;
    
    for (int i = 0; i < n-1; i++)
    {
        int j,k;
        j = i+1;
        k = n-1;
        while(j<k)
        {
            if (l[i]<l[j]+l[k])
            {
                counter+=k-j;
                j++;
            }else
            {
                k--;
            }
            //cout << counter << endl;
        }
    }
    cout << counter << endl;
}