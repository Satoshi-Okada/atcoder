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
    int num;
    vector<int> vc;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        vc.push_back(num);
    }
    int max = 0;
    int sec_max=0;
    int index1;
    int index2;
    for (int i = 0; i < n; i++)
    {
        if (max<vc[i])
        {
            max = vc[i];
            index2 = index1;
            index1 = i;
        }else if(sec_max<vc[i]){
            sec_max = vc[i];
            index2 = i;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (vc[i]==max)
        {
            cout << vc[index2] << endl;
        }else{
        cout << vc[index1] << endl;
        }
    }
    
    
    
    
}