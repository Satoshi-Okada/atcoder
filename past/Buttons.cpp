#include<iostream>
#include<string>
#include <algorithm>

using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int sum = 2*a-1;
    if(b + b - 1 > sum){
        sum = b + b - 1;
    }
    if(a+b > sum){
        sum = a+b;
    }
    cout << sum << endl;
}