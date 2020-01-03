#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
    int k,x;
    cin >> k >> x;
    int ans;
    int scope;
    scope = (k-1)*2+1;
    ans = x-k+1;
    for (int i = 0; i < scope; i++)
    {
        cout << ans+i << " ";
    }
    cout << endl;
    
}