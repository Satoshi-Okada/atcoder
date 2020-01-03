#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <math.h>
#include <list>
#include <stack>
using namespace std;

#define ll long long
#define MOD 1000000007
#define rep(i, n) for(int i = 0;i < n;i++)



int main()
{
    int n,q;
    cin >> n >> q;

    vector<ll> counter;

    ll temp = 0;

    rep(i,n+1)
    {
        counter.push_back(temp);
    }

    vector<vector<int> > vc;
    rep(i,n+1)
    {
        vc.push_back(vector<int>());
    }
    
    int a;
    int b;
    for (int i = 1; i < n; i++)
    {
        cin >> a >> b;
        vc[a].push_back(b);
    }

    int p;
    int x;
    rep(i,q)
    {
        cin >> p >> x;
        counter[p] = counter[p]+x;
    }

    int num;
    num = 1;

    int target;

    stack<int> stack;
    stack.push(num);
    int range;
    
    while(stack.empty() == false)
    {
        num = stack.top();
        stack.pop();
        range = vc[num].size();   
        rep(i,range)
        {
            stack.push(vc[num][i]);
            counter[vc[num][i]] += counter[num];
        }
        
          
    }

    for (int i = 1; i < n+1; i++)
    {
        cout << counter[i] << " ";
    }
    cout << endl;
}


