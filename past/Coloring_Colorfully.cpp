#include<iostream>
#include<string>
#include <algorithm>

using namespace std;

int main(){
    string S;
    cin >> S;
    long counter;
    counter = S.length();

    long i;
    char* array_dash;
    array_dash = new char[counter];
    for(i = 0;i < counter; i ++){
        if(i%2 == 0){
            array_dash[i] = '0';
        }else{
            array_dash[i] = '1';
        }
    }



    char* array_dash_dash;
    array_dash_dash = new char[counter];
    for(i = 0;i < counter; i ++){
        if(i%2 == 0){
            array_dash_dash[i] = '1';
        }else{
            array_dash_dash[i] = '0';
        }
    }

   
    long answer = 0;
    long temp1 = 0;
    for(i = 0;i < counter; i ++){
        if(S[i] != array_dash[i]){
            temp1++;
        }
    }
    long temp2 = 0;
    for(i = 0;i < counter; i ++){
        if(S[i] != array_dash_dash[i]){
            temp2++;
        }
    }
    if(temp1 > temp2){
        answer = temp2;
    }else{
        answer = temp1;
    }
    cout << answer << endl;

    
}