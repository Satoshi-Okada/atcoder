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


struct sort_obj
{
    int tsum;
    int asum; 
    int index;
};
bool hikaku(sort_obj a, sort_obj b)
{
    if(a.asum!=b.asum)
    {
        return a.asum > b.asum;
    }else
    {
        if(a.index != b.index)
        {
            return a.index < b.index;
        }
        else
        {
            return a.tsum > b.tsum;
        }
        

    }

}
int main()
{
    int n;cin >> n;
    vector<int> a(n);rep(i,n) cin >> a[i];
    int tmx = (-1)*INF;
    for (int t = 0; t < n; t++)
    {
        vector<sort_obj> sum_pair;
        for(int ao = 0; ao < n ; ao++)
        {
            if(ao==t)continue;
            int flag = 0;
            int tsum, asum;tsum = 0; asum = 0;
            for (int i = 0; i < n; i++)
            {
                if(i==t || i==ao)continue;
                if(flag == 0)
                {
                    tsum += a[i];
                    flag=(flag+1)%2;
                }else
                {
                    asum += a[i];
                    flag = (flag + 1) % 2;
                }
            }
            sort_obj temp;temp.asum = asum;temp.index = ao;temp.tsum = tsum;
            sum_pair.push_back(temp);
        }
        sort(sum_pair.begin(), sum_pair.end(), hikaku);
        cout << sum_pair[0].tsum << endl;
        tmx = max(tmx, sum_pair[0].tsum);
    }
    cout << tmx << endl;
}