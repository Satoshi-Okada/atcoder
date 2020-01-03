#include<iostream>
#include<string>
#include <algorithm>


using namespace std;

int main(){
    int i;
    int dish[5];
    int min=10;
    int temp;
    int sum = 0;
    for(i = 0; i < 5; i++){
        cin >> dish[i];
        temp = dish[i]%10;
        if(temp != 0){
            if(min > temp){
                min = temp;
            }
        }
        if(temp != 0){
            dish[i] = dish[i] - temp + 10;
        }
        sum = sum + dish[i];
    }
    if(min != 10){
        sum = sum + min - 10;
    }
    cout << sum << endl;
}