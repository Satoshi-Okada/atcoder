#include<iostream>
#include<string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <math.h>
#include<iomanip>

using namespace std;

typedef struct matrix_{
    int x;
    int y;
} matrix;


int main()
{
    int N;
    cin >> N;
    vector<matrix> vec;
    for (int i = 0; i < N; i++)
    {
        matrix obj;
        cin >> obj.x >> obj.y;
        vec.push_back(obj);

    }
    sort(vec.begin(), vec.end(),[](const matrix& a, const matrix& b) { return a.x < b.x;});
    for (int i = 1; i < N; i++)
    {
        if()
    }
    


    
    
}