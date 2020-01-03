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
    int* array;
    array = new int[N];
    int* answer;
    answer = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
    }
    int num = 0;
    for (int i = 1; i < N; i++)
    {
        num = num+pow(-1,i+1)*array[i];
    }
    answer[0] = (array[0]-num);
    for (int i = 0; i < N; i++)
    {
        answer[i+1] = 2*array[i]-answer[i];
    }
    for (int i = 0; i < N-1; i++)
    {
        cout << answer[i] << " ";
    }   
    cout << answer[N-1] << endl;
    
}