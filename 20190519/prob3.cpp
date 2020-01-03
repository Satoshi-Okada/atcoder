#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <math.h>
#include <list>
#include <stack>
#include <queue>
#include <utility>
#include <bitset>

using namespace std;

#define ll long long
#define ld long double
#define MOD 1000000007
#define rep(i, n) for (int i = 0; i < n; i++)
#define PI 3.14159265358979323846
int N, K;
int main()
{
    cin >> N >> K;
    double sum = 0;
    for (int i = 1; i < N + 1; i++)
    {
        double tmp = (double)1 / (double)N;
        int point = i;
        while (point < K)
        {
            point *= 2;
            tmp /= (double)2;
        }
        sum += tmp;
    }

    cout << setprecision(15) << sum << endl;
}
