#include<iostream>
#include<string>

using namespace std;

int biggest_number(int* array, int num){
    int i;
    int max = 0;
    for(i = 0; i < num; i++){
        if(array[i] > max){
            max = array[i];
        }
    }
    return max;
}


int main(){
    string str;
    cin >> str;
    int num;
    num = str.length();
    int* array;
    array = new int(num);
    int i;
    int counter = 0;
    for(i = 0; i < num; i++){
        if(str[i] == 'A' || str[i] == 'T' || str[i] == 'G' || str[i] == 'C'){
            counter++;
            array[i] = counter;
        }else{
            counter = 0;
            array[i] = counter;
        }
    }
    int answer = 0;
    answer = biggest_number(array, num);
    cout << answer << endl;
}