#include<iostream>
#include<string>
#include <algorithm>

using namespace std;

int main(){
    int N, Q;
    cin >> N >> Q;
    string S;
    cin >> S;
    int* counter;
    counter = new int[N+1];
    int i;
    counter[0] = 0;
    for(i = 0; i < N; i++){
        counter[i+1] = counter[i] + ((S[i] == 'A'&& S[i+1] == 'C')? 1:0);
    }
    int head, tail;
    head = 0;
    tail = 0;
    for(i = 0; i < Q; i++){
        cin >> head >> tail;
        head = head -1;
        tail = tail - 1;
        cout << counter[tail] - counter[head] << endl;
    }
    return 0;
}