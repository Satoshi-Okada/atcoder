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

using namespace std;

#define ll long long
#define ld long double
#define MOD 1000000007
#define rep(i, n) for(int i = 0;i < n;i++)
#define PI 3.14159265358979323846


int facctorialMethod(int k){
    int sum = 1;
    for (int i = 1; i <= k; ++i)
    {
        sum *= i;
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    vector<pair<int,int> > pairs(n);
    int a,b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        pair<int,int> mypair;
        mypair.first = a;
        mypair.second = b;
        pairs[i] = mypair;
    }

    double temp;
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            temp = (double)sqrt((double)pow(pairs[i].first-pairs[j].first,2)+(double)pow(pairs[i].second-pairs[j].second,2));
            sum += (double)((facctorialMethod(n)*(n-1))/((n*(n-1))/2)*temp);
        }
        
    }
    cout << setprecision(13)<< sum/facctorialMethod(n) << endl;
    
}
