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

bool compare_by_second(pair<ll, ll> a, pair<ll, ll> b) {
    if(a.second != b.second){
        return a.second > b.second;
    }else{
        return a.first < b.first;
    }
}



int main()
{
    int n,m;
    cin >> n >> m;
    vector<ll> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll b;
    ll c;
    sort(a.begin(),a.end());
    vector<pair<ll,ll> > pairs;

    for (int i = 0; i < m; i++)
    {
        pair<ll,ll> mypair;
        cin >> b;
        cin >> c;
        mypair = make_pair(b,c);
        pairs.push_back(mypair);
    }
    sort(pairs.begin(),pairs.end(),compare_by_second);
    /*for (int i = 0; i < m; i++)
    {
        cout << pairs[i].first << " " <<  pairs[i].second << endl;
    }*/

    vector<ll> changer(n);
    for (int i = 0; i < n; i++)
    {
        changer[i] = 0;
    }
    
    
    int index = 0;
    int pair_index = 0;
    while (index < n && pair_index < m)
    {
        while (pairs[pair_index].first > 0 && index < n)
        {
            changer[index] = pairs[pair_index].second;
            pairs[pair_index].first--;
            index++;
        }
        pair_index++;
    }

    index = 0;
    int index_changer = 0;


    while(index < n && index_changer < n)
    {
        if(a[index]<changer[index_changer])
        { 
            a[index] = changer[index_changer];
            index++;
            index_changer++;
        }else{
            index++;
        }
    }

    
    
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    cout << sum << endl;
}