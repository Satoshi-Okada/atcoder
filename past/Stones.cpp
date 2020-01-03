#include<iostream>
#include<string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int N;
    string S;
    cin >> N>> S;
    string stones = ".";
    string sharps = "##";
    stones.append(S);
    stones.append(sharps);
    cout << stones << endl;
    int counter = 0;
    for (int i = 1; i < N+1; i++)
    {
        if(stones[i] == '#' && stones[i+1] == '.')
        {
            if(stones[i-1] =='#'&& stones[i+2] == '.')
            {
                counter+=2;
                stones[i] = '.'
            }
        }
    }
    
}