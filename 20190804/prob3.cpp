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
    int N;
    cin >> N;
    vector<long> vc;
    long num;
    for (int i = 0; i < N; i++)
    {
        cin >> num;
        vc.push_back(num);
    }
    long max=vc[0];
    int flag = 0;
    for (int i = 0; i < N; i++)
    {
        if (max<=vc[i])
        {
            max = vc[i];
        }
        else if (vc[i]<max-1)
        {
            cout << "No"<< endl;
            flag = 1;
            break;
        }
        
    }
    if (flag == 0)
    {
        cout << "Yes" << endl;
    }
    
}