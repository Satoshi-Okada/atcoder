#include<iostream>
#include<string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    string S;
    cin >> S;
    int i;
    int counter = 0;
    for(i = 0; i < N; i++){
        if(S[i] == 'R'){
            counter++;
        }
    }
    if(2*counter > N){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}