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
    vector<int> vc;
    vector<int> vc2;
    int num;
    for (int i = 0; i < N; i++)
    {
        cin >> num;
        vc.push_back(num);
        vc2.push_back(num);
    }
    sort(vc.begin(), vc.end());
    int counter = 0;
    for (int i = 0; i < N; i++)
    {
        if(vc[i]!=vc2[i])counter++;
    }
    if (counter == 0)
    {
        cout << "YES" << endl;
    }else if (counter==2)
    {
        cout << "YES" << endl;
    }else
    {
        cout << "NO" << endl;
    }
    
    
    
    

    
}