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
    int length;
    length = S.length();
    vector<int> ans;
    int num;
    num = 0;
    for (int i = 0; i < length; i++)
    {
        ans.push_back(num);
    }
    vector<int> change;
    for (int i = 0; i < length-1; i++)
    {
        if(S[i]!=S[i+1])change.push_back(i);
    }
    int counter = 0;
    int diff;
    int flag = 0;
    for (int i = 0; i < length; i++)
    {
        
        if (S[i]=='R')
        {
            if (flag == 2)   
            {
                counter = counter+2;
                flag = 0;
            }
            diff = change[counter]-i;
            if(diff%2 ==1)ans[change[counter]+1] = ans[change[counter]+1]+1;
            else ans[change[counter]]=ans[change[counter]]+1;
            flag = 1;
        }else{
            diff = i - change[counter];
            if(diff%2 ==1)ans[change[counter]+1] = ans[change[counter]+1]+1;
            else ans[change[counter]]=ans[change[counter]]+1;
            flag = 2;
        }
        
    }

    for (int i = 0; i < length; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    
    
    
}