#include<iostream>
#include<string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <math.h>
#include<iomanip>
using namespace std;


int main()
{
    long S;
    cin >> S;
    long X1,X2,X3,Y1,Y2,Y3;
    X3 = 0;
    Y3 = 0;
    X2 = 0;
    Y2 = 0;
    X1 = 0;
    Y1 = 0;
    long num = ceil(pow(S,0.5));
    X1 = num;
    Y2 = X1;
    long S_dash;
    S_dash = X1*Y2 -S;
    long route = pow(S_dash,0.5);
    //cout << S_dash << endl;
    //cout << route << endl;
    if(S_dash < pow(10,9))
    {
        X2 = S_dash;
        Y1 = 1;
        cout << X1 <<' '<< Y1 <<' '<< X2 <<' '<< Y2 <<' '<< X3 <<' '<< Y3 << endl; 
    }else{
        for (long i = route+1; i > 0; i--)
        {
            if(S_dash%i==0){
                X2 = i;
                Y1 = S_dash/i;
                cout << X1 <<' '<< Y1 <<' '<< X2 <<' '<< Y2 <<' '<< X3 <<' '<< Y3 << endl; 
                break;
            }
        }
        
    }
}