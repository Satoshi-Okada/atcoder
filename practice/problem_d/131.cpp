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

bool compare_by_seond(pair<ll, ll> a, pair<ll, ll> b) {
    if(a.second != b.second){
        return a.second < b.second;
    }else{
        return a.first < b.first;
    }
}


int main()
{
    int n;
    cin >> n;
    vector<pair<ll,ll> > pairs;
    ll a,b;

    rep(i,n)
    {
        pair<ll,ll> mypair;
        cin >> a >> b;
        mypair = make_pair(a,b);
        pairs.push_back(mypair);
    }
    /*rep(i,n)
    {
        cout << pairs[i].first <<pairs[i].second <<  endl;
    }*/
    sort(pairs.begin(),pairs.end(),compare_by_seond);

    
    int index = 0;
    int work = 0;
    int time = 0;
    int dl;
    int flag = 0;

    queue<ll> q;

    for (int i = 0; i < n; i++)
    {

        if (time+pairs[i].first <= pairs[i].second)
        {
            time+= pairs[i].first;
        }else
        {
            flag = 1;
            break;
        }
        
    }
    
    if (flag == 1)
    {
        cout << "No" << endl;
    }else
    {
        cout << "Yes" << endl;
    }
    
    
}