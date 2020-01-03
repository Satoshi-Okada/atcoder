#include<iostream>
#include<string>

using namespace std;

int main(){
    char x;
    cin >> x;
    if(x == 'A'){
        cout << 'T' << endl;
    }else if(x == 'G'){
        cout << 'C' << endl;
    }else if(x == 'T'){
        cout << 'A' << endl;
    }else if(x == 'C'){
        cout << 'G' << endl;
    }
}