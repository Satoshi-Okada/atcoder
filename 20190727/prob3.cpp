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
    vector<long long> a;
    vector<long long> b;
    long long x;
    for (int i = 0; i < N+1; i++)
    {
        cin >> x;
        a.push_back(x);
    }
    long long y;
    for (int i = 0; i < N; i++)
    {
        cin >> y;
        b.push_back(y);
    }
    
    long long counter = 0;
    for (int i = 0; i < N; i++)
    {
        if (a[i]>b[i])
        {
            a[i] = a[i]-b[i];
            counter = counter + b[i];
            b[i] = 0;
        }
        else
        {
            b[i]= b[i]-a[i];
            counter = counter+a[i];
            a[i] = 0;
            if (a[i+1]>b[i])
            {
                a[i+1] = a[i+1]-b[i];
                counter = counter + b[i];
                b[i] = 0;
            }else
            {
                counter = counter + a[i+1];
                b[i] = b[i] - a[i+1];
                a[i+1] = 0;
            }
        }
    }
    cout << counter << endl;
}