#include<iostream>
#include<string>
#include <algorithm>
#include <vector>

using namespace std;

int R,G,B,N;

int main()
{
    vector<int> vc(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> vc[i];
    }
    cin >> N;
    sort(vc.begin(), vc.end());
    int sum = 0;
    int sum2 = 0;
    int sum3 = 0;
    int counter =0;
    for (int i = 0; i <=(N/vc[2]); i++)
    {
        sum2 = N-i*vc[2];
        for (int j = 0; j <= (sum2/vc[1]); j++)
        {
            sum3 = sum2 - j*vc[1];
            for (int k = 0; k <=(sum3/vc[0]); k++)
            {
                sum = vc[2]*i+vc[1]*j+vc[0]*k;
                if(sum == N){
                    counter++;
                }
                if(sum > N) break;
            }
            
        }
        
    }
    std::cout << counter << endl;
}