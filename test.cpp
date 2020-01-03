#include<iostream>
#include<string>
#include <algorithm>
#include <vector>
#include<bitset>

using namespace std;
#define REP(i, n) for(int i = 0;i < n;i++)

#define ll long long

template <typename T, typename U>
T factorial(U n)
{
  T ans;
  ans = 1;
  if (n==0)
  {
    return 1;
  }else
  {
    for (int i = 1; i < n+1; i++)
    {
      ans = ans*i;
    }
    return ans;
  }
  
};



int main()
{
  int a;
  cin >> a;
  bitset<8> array(a);
  for (int i = 0 ;i < 8 ;i++)
  {
    cout << array[i];
  }
  cout  << endl;
  
}