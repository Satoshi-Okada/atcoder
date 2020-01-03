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
    int N,K;
    cin >> N >> K;
    if(K==1)cout << 0 << endl;
    else{
        cout << N-K << endl;
    }
}