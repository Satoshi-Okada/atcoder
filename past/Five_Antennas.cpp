#include<iostream>
#include<string>
#include <algorithm>

using namespace std;


int main(){
    int i;
    int antenna[5];
    for(i = 0; i < 5; i++){
        cin >> antenna[i];
    }
    int k;
    cin >> k;
    int max;
    max = *max_element(antenna, antenna+5);
    int min;
    min = *min_element(antenna, antenna+5);
    if(max <= min+k){
        cout << "Yay!" << endl;
    }else{
        cout << ":(" << endl;
    }

}