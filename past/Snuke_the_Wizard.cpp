#include<iostream>
#include<string>
#include <algorithm>

using namespace std;


int main(){
    int N,Q;
    cin >> N >> Q;
    string s;
    cin >> s;
    //動かすマスを指定された時に、O(1)で配列の場所を見つける二次元配列array
    int* array[128];
    int i;
    for(i = 0; i < 128; i++){
        array[i] = new int[N];
    }
    int j;
    for(i = 0; i < 128; i++){
        for(j = 0; j < N; j++){
            array[i][j] = -1;//初期化
        }
    }
    int* golem;//各マスのgolemの数を表す
    golem = new int[N];
    for(i = 0; i < N; i++){
        golem[i] = 1;
    }
    int ascii;
    for(i = 0; i < N; i++){
        ascii = s[i];
        j = 0;
        while(array[ascii][j] != -1){
            j++;
        }
        array[ascii][j] = i;
    }
    char G,D;
    for(i = 0; i < Q; i++){
        cin >> G >> D;
        ascii = G;
        j = 0;
        int num;
        while(array[ascii][j] != -1){
            num = array[ascii][j];
            if(D == 'R'){
                if(num != N-1){
                    golem[num+1] = golem[num+1] + golem[num];
                    golem[num] = 0;
                }else{
                    golem[num] = 0;
                }
            }else if(D == 'L'){
                if(num != 0){
                    golem[num-1] = golem[num-1] + golem[num];
                    golem[num] = 0;
                }else{
                    golem[num] = 0;
                }  
            }
            j++;
        }
    }
    int counter = 0;
    for(i = 0; i < N; i++){
        if(golem[i] > 0){
            counter = counter + golem[i];
        }
    }
    cout << counter << endl;
}