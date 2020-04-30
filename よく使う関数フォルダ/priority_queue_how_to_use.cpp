#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    //計算量はNlogN
    priority_queue<int> que;//通常のpriority_que
    priority_queue<int, std::vector<int>, std::greater<int> > que;//小さいものから順に取り出すpriority_queue
    priority_queue<P, vector<P>, greater<P>> q; //pair使う時
    while(!que.empty())//queueaが空になるまでループを回す時
}