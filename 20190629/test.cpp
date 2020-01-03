#include<iostream>
#include<string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <math.h>
#include<iomanip>
#include <random>
using namespace std;

int irekae(int* num){
    swap(num[1],num[2]);
    return num[0];
}

int main(){
    int num[]={0,1,2,3,4};
    irekae(num);
    for (int i = 0; i < 5; i++)
    {
        cout << num[i];
    }


    
}