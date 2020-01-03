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
    int L,R;
    cin >> L >> R;
    if(R-L>=2019)
    {
    cout << 0 << endl;
    }
    else
    {
        int answer = 0;
        int l = L%2019;
        int r = R%2019;
        if(r==0 || l==0)
        {
            cout << 0 << endl;
        }
        else if(r>l)
        {
            answer = (l*(l+1))%2019;
            for (int i = l; i < r+1; i++)
            {
                for (int j = i+1; j < r+1; j++)
                {
                    int num = (i*j)%2019;
                    if(num < answer) answer = num;
                }
                
            }
            cout << answer << endl;
            
        }else{
            cout << 0 << endl;
        }
    }
    
}