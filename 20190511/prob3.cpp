#include<iostream>
#include<string>
#include <algorithm>
#include <vector>

using namespace std;

int N;
int main()
{
    int BA=0;
    int AA = 0;
    int AB = 0;
    int BB = 0;
    cin >> N;
    int counter = 0;
    for (int i = 0; i < N+1; i++)
    {
        string s;
        getline(cin,s);
        int len = s.length();
        if(s[0]== 'A'&&s[len-1]=='A') AA++;
        if(s[0]== 'A'&&s[len-1]=='B') AB++;
        if(s[0]== 'B'&&s[len-1]=='A') BA++;
        if(s[0]== 'B'&&s[len-1]=='B') BB++;
        for (int i = 0; i < len-1; i++)
        {
            if(s[i]=='A'&& s[i+1]=='B') counter++;
        }
        
    }
    int sum = 0;
    if(BA>0){
        if(BB>0){
            sum++;
            BB= BB-1;
        }
        if(AA>0){
            sum++;
            AA = AA-1;
        }
        sum = sum + BA-1;
    }
    if(AB>0)sum = sum + AB -1;
    sum = sum + max(AA,BB);
    cout << sum << endl;
}