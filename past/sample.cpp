#include<iostream>
#include<string>

using namespace std;


void hello_world(){
  cout << "Hello World" << endl;
}


void add(int a, int b){
  int c;
  c = a + b;
  cout << c << endl;
}

int main(){
  int n;
  cin >> n;
  if (n==1){
    hello_world();
  }
  else {
    int a,b;
    cin >> a;
    cin >> b;
    add(a,b);
  }
  return 0;
}
