#include<iostream>
#include<string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <math.h>
#include<iomanip>
using namespace std;

struct _list{
    int num;
    int p;
    string s;
    _list* next;
    _list* prev;
};

typedef struct _list list;


int main()
{
    int N;
    cin >> N;
    string S;
    int P;
    list* head;
    list* tail;
    list* L;
    for (int i = 0; i < N; i++)
    {
           cin >> S;
           cin >> P;
           L = new list();
           L->num = i+1;
           L->p = P;
           L->s = S;
           if(head == NULL){
               head = L;
               tail = L;
           }else{
               L->prev = tail;
               tail->next = L;
           }
    }
    
    L = head;
}