#include<iostream>
#include<string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <math.h>
#include<iomanip>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int len;
    len = S.size();
    int num1=0;
    num1 = 15-len;
    int counter = 0;
    for (int i = 0; i < len; i++)
    {
        if (S[i] == 'o')
        {
            counter++;
        }
        
    }
    
    if (counter+num1>=8)
    {
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    
}