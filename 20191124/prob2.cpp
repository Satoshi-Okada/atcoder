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

using namespace std;

#define ll long long
#define ld long double
#define MOD 1000000007
#define rep(i, n) for(int i = 0;i < n;i++)
#define PI 3.14159265358979323846

int main()
{
    int key;
    cin >> key;
    string temp;
    cin >> temp;
    int num;
    num = temp.length();
    for (int i = 0; i < num; i++)
    {
        temp[i] = (temp[i] - 'A'+key)%26+'A';
    }
    cout << temp << endl;
    
}