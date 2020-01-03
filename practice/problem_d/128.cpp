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
    int n,k;
    cin >> n>> k;
    vector<ll> v(n);
    rep(i,n)
    {
        cin >> v[i];
    }
    
    int r;
    r = min(n,k);
    int a,b,cd;

    priority_queue<int, std::vector<int>, std::greater<int> > que;
    int temp = 0;
    int ans = 0;

    rep(i,r+1)
    {
        cd = k-i;//cdの操作を行う回数
        rep(j,i+1)
        {
            a = j;
            b = i-j;
            temp = 0;
            priority_queue<int, std::vector<int>, std::greater<int> > que;
            rep(k,a)
            {
                //aの操作で得たダイヤをキューに挿入
                que.push(v[0+k]);
            }

            rep(l,b)
            {
                //bの操作で得たダイヤをキューに挿入
                que.push(v[n-1-l]);
            }

            int counter = 0;

            while(!que.empty() && que.top()<0 && counter < cd)
            {
                que.pop();
                counter++;
            }

            while(!que.empty())
            {
                temp += que.top();
                //cout << que.top() << ",";
                que.pop();
            }
            if(temp>ans)
            {
                ans = temp;
            }
            //cout << a <<" " <<  b << " "  << " " << cd << " "<<  temp  << endl;
            
        }
    }
    cout << ans << endl;
}