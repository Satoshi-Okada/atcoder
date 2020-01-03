#include<iostream>
#include<string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    vector<int> num(4);
    int N;
    cin >> N;
    for (int i = 0; i < 4; i++)
    {
        num[i]=N/pow(10,3-i);
        N=N-pow(10,3-i)*num[i];
    }
    
    

    if (0<num[0]*10+num[1]&&num[0]*10+num[1]<13)
    {
        
        if(0<num[2]*10+num[3]&&num[2]*10+num[3]<13)
        {
            cout << "AMBIGUOUS" << endl;
        }else{
            cout << "MMYY" << endl;
        }
    
    }
    else
    {
        if(0<num[2]*10+num[3]&&num[2]*10+num[3]<13)
        {
            cout << "YYMM" << endl;
        }else
        {
            cout << "NA" << endl;
        }
    }
    
}