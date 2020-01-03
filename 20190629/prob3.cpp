#include<iostream>
#include<string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <math.h>
#include<iomanip>
#include <random>
using namespace std;

/*int median_search(vector<int> num, int start, int end,int pivot,int size)
{
    int k = start;
    int l = end;
    while(k<=l){
        if(num[k]>pivot&&num[l]<pivot){
            swap(num[k],num[l]);
        }
        k++;
        l--;
    }
    if(k < n/2)

}
*/
int compare_int(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}


int main()
{
    int n;
    cin >> n;
    int* num;
    num = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];

    }
    //std::mt19937_64 get_rand_mt; // 64bit版メルセンヌ・ツイスタ
    //std::shuffle( num.begin(), num.end(), get_rand_mt );
    qsort(num, n, sizeof(int),compare_int);
    /*for (int i = 0; i < n; i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;
    */
    int half = n/2-1;
    if(num[half]==num[half+1]) cout << 0 << endl;
    else{
        int diff = num[half+1]-num[half];
        cout << diff << endl;
        
    }


}