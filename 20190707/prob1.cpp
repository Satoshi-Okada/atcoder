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
    int N,A,B;
    cin >> N >> A >> B;
    if(N*A>B)cout<< B << endl;
    else cout << N*A << endl;
}