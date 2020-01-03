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
    vector<int> vc;
    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        vc.push_back(num);
    }
    sort(vc.begin(),vc.end(),greater<int>()); 
    float sum=0;
    for (int i = 0; i < n; i++)
    {
        if (i==n-1)
        {
            sum = sum+(vc[i]/pow(2,i));
            break;
        }
        sum = sum+(vc[i]/pow(2,i+1));
    }
    cout << sum << endl;
    
}