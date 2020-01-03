#include <iostream>
#include <cstdlib>


using namespace std;

int max(int a, int b){
  int max;
  max = a;
  if(max < b){
    max = b;
  }
  return max;
}

int calc_H(int x, int y, int h, int Cx, int Cy){
  int num, x_dash, y_dash;
  x_dash = abs(x-Cx);
  y_dash = abs(y-Cy);
  int H;
  H = h+x_dash+y_dash;
  return H;
}


int main(){
  int N;
  cin >> N;
  int* x;
  int* y;
  int* h;
  int* H;
  x = new int[N];
  y = new int[N];
  h = new int[N];
  H = new int[N];
  int i;
  for (i = 1; i <= N; i = i+1){
    cin >> x[i];
    cin >> y[i];
    cin >> h[i];
  }
  int k;
  int Cx;
  int Cy;
  int flag;
  int height;
for (Cx = 0; Cx <= 100; Cx = Cx+1){
    for(Cy = 0; Cy <= 100; Cy = Cy+1){
        for (k = 1; k <=N; k = k+1){
          height = calc_H(x[k], y[k], h[k], Cx, Cy);
          H[k] = height;
          if(k >= 2){
            if(H[k] != H[k-1]){
              flag = 0;
              break;
          }
        }
        flag = 1;
      }
      if(flag == 1) break;
    }
    if(flag == 1) break;
  }
  cout << Cx << " " << Cy << " " << height << endl;
  return 0;
}
