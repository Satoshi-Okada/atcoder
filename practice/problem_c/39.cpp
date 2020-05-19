#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> P;
#define ll long long
#define ld long double
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define PI 3.14159265358979323846
#define sz(x) ((int)(x).size())
#define chmin(x,y) x = min(x,y)
#define chmax(x,y) x = max(x,y)

const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;
string sample = "WBWBWWBWBWBWWBWBWWBWBWBWWBWBWWBWBWBW";
int num_list[] = {0,2, 4, 5, 7, 9, 11};
string onkai[] = {"Do", "Re", "Mi", "Fa", "So", "La", "Si"};
int main()
{
    string s;cin >> s;
   
    for(int i = 0; i < 7; i++)
    {
        bool result = true;
        for (int j = 0; j < 20; j++)
        {
            if(s[j]!=sample[num_list[i]+j])
            {
                result = false;
                break;
            }
        }
        if(result) 
        {
            cout << onkai[i] << endl;
            return 0;
        }
    }
    
}