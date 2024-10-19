#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
   vector <int>v;//or u can use fill constractor v(1000,0)
   v.reserve(100);
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
    int no;
    cin>>no;
    v.push_back(no);
    cout<<"Capacity "<<v.capacity()<<" Size: "<<v.size()<<endl;

   } 
   //sorting 
   sort(v.begin(),v.end());
   for(int x:v){
    cout<<x<<endl;
   }

return 0;
}

