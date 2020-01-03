#include<iostream>
#include<string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <math.h>
#include<iomanip>
using namespace std;

long memo[1000000000] = {};
long calc(int x, int d, int n)
{
    if(n==1)return x%1000003;
    return memo[n] = (calc(x,d,n-1)*((x+(n-1)*d)%1000003))%1000003;
}

int main()
{
    int Q;
    long answer[100000];
    cin >> Q;
    for (int i = 0; i < Q; i++)
    {
        int  x,d,n;
        cin >> x >> d >> n;
        cout << calc(x,d,n) << endl;
    }


}