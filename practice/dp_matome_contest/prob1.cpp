#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <math.h>
using namespace std;
vector<long> memo;

int dp(vector<int>& vc,int num)
{
    if(memo[num] != -1) return memo[num];
    else{
        memo[num] =  min(dp(vc,num-1)+abs(vc[num]-vc[num-1]),dp(vc,num-2)+abs(vc[num]-vc[num-2]));
        return memo[num];
    }
}


int main()
{
    int N;
    cin >> N;
   
    int temp;
    vector<int> vc;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        vc.push_back(temp);
        memo.push_back(-1);
    }
    
    memo[0]=0;
    memo[1] = abs(vc[0]-vc[1]);

    cout << dp(vc,N-1) << endl;
    
}