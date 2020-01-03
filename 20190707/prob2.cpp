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
    int N, D;
    cin >> N >> D;
    int** matrix;
    matrix = new int*[N];
    for (int i = 0; i < N; i++)
    {
        matrix[i] = new int[D];
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < D; j++)
        {
            cin >> matrix[i][j];
        }
        
    }
    int* array;
    array = new int[D];
    int counter = 0;


    for (int i = 0; i < N; i++)
    {
        for (int j = i+1; j < N; j++)
        {
            for (int k = 0; k < D; k++)
            {
                array[k] = matrix[i][k]-matrix[j][k];
            }
            int sum= 0;
            for (int k = 0; k < D; k++)
            {
                sum = sum+ array[k]*array[k];
                
            }
            int num = sqrt(sum);
            if(sum == num*num) counter++;
            
        }
        
    }
    cout << counter << endl;

    /*for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < D; j++)
        {
            cout << matrix[i][j];
        }
        cout << endl;
    }*/
}