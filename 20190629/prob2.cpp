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
    int* num;
    num = new int[N];
    for (int  i = 0; i < N; i++)
    {
        cin >> num[i];
    }
    int counter =0;
    for (int i = 1; i < N-1; i++)
    {
        if(num[i-1]<num[i]&&num[i]<num[i+1])counter++;
        else if(num[i+1]<num[i]&&num[i]<num[i-1])counter++;
    }
    cout << counter << endl;
    

    
}