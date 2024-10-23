#include <deque>
using namespace std;
deque<int>first;
deque<int>scond(4,100);
deque<int>third(second.begin(),second.end());
deque<int>fourth(third);
int myints[]={16,2,77,29};
int n=sizeof(myints)/sizeof(int);
deque<int>fifth(myints,myints+n);
deque<int> dq;
dq.push_back(someint);
dq.pop_back();
dq.push_front(someint);
dq.pop_front();
//get reference to front or back elements

dq.front();
dq.back();
