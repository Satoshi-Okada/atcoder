#include<iostream>
#include<string>
#include <algorithm>
#include <vector>
using namespace std;


int main(){
    int* array;
    array = new int[3];
    cin >> array[0] >> array[1] >> array[2];
    if(array[0] == array[1] && array[1] == array[2]){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}