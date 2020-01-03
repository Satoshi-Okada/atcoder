#include<iostream>
#include<string>
#include <algorithm>
#include <vector>

using namespace std;
int N,K;
int main()
{
    cin >> N >> K;
    string s;
    cin >> s;
    s[K-1] = s[K-1]+0x20;
    cout << s << endl;
}