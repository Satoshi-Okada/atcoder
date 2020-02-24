#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define PI 3.14159265358979323846
#define sz(x) ((int)(x).size())

const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main()
{

    string n;
    cin >> n;
    int k;
    cin >> k;
    int num = n.length();

    ll counter = 0;
    //num-1桁まで
    for (int i = k; i < num; i++)
    {
        if (k==1)
        {
            counter += 9;
        }else if (k==2)
        {
            
            counter += (9*9)*(i-1);
        }else
        {
            counter += (9*9*9)*((i-1)*(i-2)/2);
        } 
    }
    if (num<k)
    {
        cout << 0 << endl;
        return 0;
    }
    

    if (k==1)
    {
        int temp = n[0]-'0';
        counter+=temp;
        cout << counter << endl;
        return 0;
    }else if (k==2)
    {
        int temp = n[0]-'0';
        counter += 9 * (temp-1) * (num - 1);
        int index=0;
        for (int i = 1; i < num; i++)
        {
            if (n[i]-'0'!=0)
            {
                index = i;
                break;
            }   
        }
        if (index == 0)
        {
            cout << counter << endl;
            return 0;
        }
        counter += 9 * (num - index - 1) + n[index] - '0';
        cout << counter << endl;
        return 0;
    }else
    {
        int temp = n[0] - '0';
        counter += (temp-1)*((9*9*(num-1)*(num-2))/2);
        int index = 0;
        for (int i = 1; i < num; i++)
        {
            if (n[i] - '0' != 0)
            {
                index = i;
                break;
            }
        }
        if (index == 0)
        {
            cout << counter << endl;
            return 0;
        }
        counter += (n[index] - '0'-1)*(num-index-1)*9;
        int index2 = 0;
        for (int i = index+1; i < num; i++)
        {
            if (n[i]-'0'!=0)
            {
                index2 = i;
                break;
            }
            
        }
        if (index2 == 0)
        {
            cout << counter << endl;
            return 0;
        }
        counter += 9 * (num - index2 - 1) + (n[index2] - '0');
        cout << counter << endl;
        return 0;
    }
    
    
    
    


    
    
}