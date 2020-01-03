#include<iostream>
#include<string>
#include <algorithm>

using namespace std;

int main(){
    long long N;
    cin >> N;
    int i;
    long long v[5];
    for(i = 0; i < 5; i++){
        cin >> v[i];
    }
    long long minu[5];
    for(i = 0; i < 5; i++){
        if(N%v[i] == 0){
            minu[i] = N/v[i];
        }else{
            minu[i] = N/v[i]+1;
        }
    }
    long long max= 0;
    max = *max_element(minu, minu+5);
    cout << max + 4 << endl;
}