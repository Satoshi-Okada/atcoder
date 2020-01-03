#include <iostream>
#include <iomanip>
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
#define ld long double
#define MOD 1000000007
#define rep(i, n) for(int i = 0;i < n;i++)
#define PI 3.14159265358979323846

ll binary(ll bina){
    ll ans = 0;
    for (int i = 0; bina>0 ; i++)
    {
        ans = ans+(bina%2)*pow(10,i);
        bina = bina/2;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<char> > list;
    ll temp;
    for (int i = 0; i < n; i++)
    {
        int test;
        cin >> test;
        vector<char> vc(n,2);//2は不明。1が正直、0が不親切
        for (int j = 0; j < test; j++)
        {
            int x,y;
            cin >> x >> y;
            if (y==1)
            {
                vc[x-1] = '1';
            }else
            {
                vc[x-1] = '0';
            }
        }
        list.push_back(vc);
    }
    //cout << list[0][1] << endl;
    int ans = 0;
    for (int i = 0; i < pow(2,n); i++)
    {
        temp = binary(i);
        string str;
        str = to_string(temp);
        if (str.length()<n)
        {
            int limit = n-str.length();
            for (int j = 0; j < limit; j++)
            {
                str ="0"+str;
            }
        }
        //cout << str << endl;
        //vector<int> honest_unkind(n,2);
        int flag = 0;
        for (int k = 0; k < n; k++)
        {
            if (flag == 1)
            {
                break;
            }
            
            if (str[k]=='1')
            {
                for (int l = 0; l < n; l++)
                {
                    if (list[k][l]!=2)
                    {
                        if (str[l]!=list[k][l])
                        {
                            flag = 1;
                            break;
                        } 
                    }
                }
            }
        }
        //cout << flag << endl;
        if (flag==0)
        {
            int ans_temp = 0;
            for (int i = 0; i < n; i++)
            {
                if (str[i]=='1')
                {
                    ans_temp++;
                }
            }
            ans = max(ans, ans_temp);
        }
        
    }
    cout << ans << endl;

}