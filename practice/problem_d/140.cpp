#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <math.h>
#include <list>
#include <stack>
#include <queue>
#include <utility>

using namespace std;

#define ll long long
#define MOD 1000000007
#define rep(i, n) for(int i = 0;i < n;i++)


int main()
{
    int n,k;
    cin >> n>> k;
    string s;
    cin >> s;
    int counter = 0;
    int edge = 0;

    if (s[0]== 'L')
    {
        counter++;
        edge++;
    }else
    {
        if (s[1] =='L')
        {
            counter++;
        }
        
    }
    
    
    for (int i = 1; i < n-1; i++)
    {
        if (s[i] == 'R')
        {
            if (s[i+1] == 'L')
            {
                counter++;
                i++;
            }
            
        }/*else
        {
            if (s[i+1] == 'L')
            {
                counter++;
            }  
        }*/
    }
    if (s[n-1] == 'R')
    {
        counter++;
        edge++;
    }
    
    

    //cout << counter << endl;
    int sum = 0;

    if (counter-k<=0)
    {
        cout << n-1 << endl;
    }else
    {
        int* temp;
        temp = new int[counter];
        for (int i = 0; i < counter-edge; i++)
        {
            temp[i] = 2;
        }
        for (int i = counter-edge; i < counter; i++)
        {
            temp[i]=1;
        }
        for (int i = 0; i < k; i++)
        {
            temp[i] = 0;
        }
        for (int i = 0; i < counter; i++)
        {
            sum += temp[i];
        }
        
        cout << n-sum << endl;
    }
    
    
    
    
}