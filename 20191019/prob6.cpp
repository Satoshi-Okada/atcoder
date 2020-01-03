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
    vector<int> a(n);
    rep(i,n)
    {
        cin >> a[i];
    }

    sort(a.begin(),a.end());

    int uniq = 1;
    vector<int> uniq_v;

    for (int i = 1; i < n; i++)
    {
        if (a[i]==a[i-1])
        {
            uniq++;
        }else
        {
            uniq_v.push_back(uniq);
            uniq = 1;
        }
    }
    if (uniq!=0)
    {
        uniq_v.push_back(uniq);
    }

    vector<ll> ans(n+1);
    for (int i = 0; i < n+1; i++)
    {
        ans[i] = 0;
    }
    
    int size = uniq_v.size();
    int flag =0;
    int counter = 0;
    while(flag!=size)
    {
        counter = 0;
        for (int i = 0; i < size; i++)
        {
            if (uniq_v[i]>0)
            {
                uniq_v[i]-=1;
                counter++;
                if (uniq_v[i]==0)
                {
                    flag++;
                }
            }
        }

        for (int i = 1; i <= counter; i++)
        {
            ans[i]+=(counter/i);
        }
    }

    for (int i = 1; i < n+1; i++)
    {
        cout << ans[i] << endl;
    }
    
}