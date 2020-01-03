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
    int N;
    cin >> N;
    vector<int> a;
    int temp;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        a.push_back(temp);
    }
    int count_1=0;
    int count_2=0;
    int count_3=0;
    int flag = 0;
    if(N%3!=0){
        for (int i = 0; i < N; i++)
        {
            if(a[i]!=0)flag = 1;
        }
        if(flag ==1)cout << "No" << endl;
        else cout << "Yes" << endl;
        return 0;
    }
    else
    {
        sort(a.begin(),a.end());
    }
    /*for (int i = 0; i < N; i++)
    {
        cout << a[i] ;
    }
    cout<<endl;*/
    int num[3];
    if(a[0]!=0)
    {
        for (int i = 0; i < N; i++)
        {
            
            if(i>0){
                if(a[i]!=a[i-1])flag = flag+1;
            }

            if (flag==0)
            {
                num[0] = a[i];
                count_1 = count_1 + 1;
            }else if(flag==1){
                num[1] = a[i];
                count_2 = count_2 + 1;
            }else{
                num[2] = a[i];
                count_3 = count_3 + 1;
            }
            

        }

        if(count_1==count_2 && count_2 == count_3){
            if(num[0]==(num[1] ^ num[2]) && num[1] == (num[0] ^ num[2]) && num[2] == (num[0] ^ num[1])){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
        }
        else cout << "No" << endl;
        
    }else
    {
        for (int i = 0; i < N; i++)
        {
            if(i>0){
                if(a[i]!=a[i-1]) flag = flag+1;
            }

            if (flag==0)
            {
                count_1 = count_1 + 1;
            }else if(flag==1)
            {
                count_2 = count_2 + 1;
            }
        }
        //cout << count_1 << count_2 <<flag << endl;
        if(count_2==2*count_1){
            cout <<"Yes" << endl;
            
        }else if(count_1 == N){
            cout <<"Yes" << endl;
        }
        else cout << "No" << endl; 
    }
    return 0;

    //cout << count_1 << cou
    
}