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
    double num;
    int a;
    int counter=0;
    for (int i = 1; i < N+1; i++)
    {
        num = log10(i);
        a = num;
        if(a%2==0)counter++;
    }
    cout << counter << endl;
}