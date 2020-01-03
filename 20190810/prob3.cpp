#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> vc;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        vc.push_back(s);
    }
    for (int i = 0; i < n; i++)
    {
        sort(vc[i].begin(), vc[i].end());
    }
    sort(vc.begin(),vc.end());
    long counter = 0;
    long ans=0;
    long temp=0;
    for (int i = 0; i < n-1; i++)
    {
        if (vc[i]==vc[i+1])
        {
            counter++;
        }else
        {
            temp = (counter*(counter+1))/2;
            ans = ans + temp;
            counter = 0;
        }
    }
    if (counter !=0)
    {
        temp = (counter*(counter+1))/2;
        ans = ans + temp;
    }
    
    cout << ans << endl;
    
    
}