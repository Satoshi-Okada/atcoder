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
    vector<int> vec;
    for (int i = 0; i < N; i++)
    {
            int num;
            cin >> num;
            vec.push_back(num);
    }
    sort(vec.begin(), vec.end());
    int temp = vec[0];
    for (int i = 0; i < N-2; i++)
    {
        temp  = temp - vec[i+1];
    }
    temp = vec[N-1]-temp;
    cout << temp << endl;
    for (int i = 0; i < N-2; i++)
    {
        cout << vec[0] << ' ' << vec[i+1] << endl;
        vec[0] = vec[0]-vec[i+1];
    }
    cout << vec[N-1] << ' ' << vec[0] << endl;

    return 0;
    
    
}