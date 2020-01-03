#include<iostream>



using namespace std;


int main(){
  int N,T;
  int i;
  cin >> N;
  cin >> T;
  int* c;
  int* t;
  c = (int *)malloc(N * sizeof(int));
  t = (int *)malloc(N * sizeof(int));


  for (i = 1;i <=  N; i = i + 1){
    cin >> c[i];
    cin >> t[i];
  }

  int cost;
  cost = 1500;
  for (i = 1;i <= N; i = i + 1){

    if (t[i] <= T){
      if(c[i] < cost){
        cost = c[i];
      }
    }
  }

  if (cost == 1500){
    cout << "TLE" << "\n";
  }else{
    cout << cost << "\n";
  }
}
