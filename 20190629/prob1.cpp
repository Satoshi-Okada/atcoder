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
    string S;
    cin >> S;
    if (S[0]==S[1]&&S[1]==S[2]&&S[2]==S[3])
    {
        cout << "No" <<endl;
    }else{
        if(S[0]==S[1]&&S[2]==S[3])cout << "Yes" << endl;
        else if(S[0]==S[2]&&S[1]==S[3])cout << "Yes"<< endl;
        else if(S[0]==S[3]&&S[1]==S[2]) cout << "Yes"<< endl;
        else cout << "No" << endl;

    }
    
}