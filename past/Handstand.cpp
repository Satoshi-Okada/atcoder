#include<iostream>
#include<string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int N;
    int K;
    cin >> N >> K;
    string S;
    cin >> S;
    vector<int> nums;
    int counter = 0;
    int now = 1;
    for(int i = 0; i < N; i++){
        if(S[i] == (char)(now + '0')) counter++;
        else{
            nums.push_back(counter);
            now = 1 - now;
            counter = 1;
        }
    } 
    if(counter != 0) nums.push_back(counter);
    if(nums.size()%2 == 0) nums.push_back(0);//最後が0カウンタならば架空の1の個数0を付け足す。1-0-1-0-1とかにしたい

    vector<int> sums(nums.size()+1);
    for (int i = 0; i < nums.size(); i++)
    {
        sums[i + 1] = sums[i]+nums[i];
    }


    int ans = 0;
    int left = 0;
    int right = 0;
    int Add = 2*K+1;
    int temp;
    for (int i = 0; i < sums.size(); i+=2)
    {
        left = i;
        right = min(i + Add, (int)nums.size());
        temp = sums[right] - sums[left];
        ans = max(ans,temp);
    }
    cout << ans << endl;
}