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

bool compare_by_seond(pair<int, int> a, pair<int, int> b) {
    if(a.second != b.second){
        return a.second < b.second;
    }else{
        return a.first < b.first;
    }
}

int main()
{
    int n,m;
    cin >> n >> m;

    vector<pair<int,int> > pairs;
    int a,b;
    rep(i,n)
    {
        pair<int,int> mypair;
        cin >> a >> b;
        mypair = make_pair(a,b);
        pairs.push_back(mypair);
    }

    priority_queue<int> q;

    sort(pairs.begin(),pairs.end());


    ll sum = 0;
    int index = 0;
    for (int i = 1; i < m+1; i++)
    {
        
        
        for (int j = index; j < n; j++)
        {
            if (pairs[j].first == i)
            {
                q.push(pairs[j].second);
            }else
            {
                index = j;
                break;
            }
            
        }
        
        if(q.empty()==false)
        {
            sum+=q.top();
            q.pop();
        }
        
    }

    cout << sum << endl;
}