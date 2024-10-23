#include <iostream>
#include <deque>
#include<vector>
using namespace std;
int main(){
    deque<int> dq(10);
    for(int i=0;i<10;i++){
        dq[i]=i*i;
    }
    dq.push_front(23);
    cout<<"\nDeque Size: ";
    cout<<dq.size()<<endl;
    for(int i=0;i<10;i++){
        cout<<dq.at(i)<<" ";
    }
    for(auto x:dq){
        cout<<x<<",";
    }
    return 0;
}