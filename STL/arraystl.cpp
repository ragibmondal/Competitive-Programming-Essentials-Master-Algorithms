
#include <iostream>
#include <array>
#include <algorithm>
//all stl containers passed by values
using namespace std;
void updateArray(array<int,6>&arr,int i,int val){//for this object we need to passed by refference
    arr[i]=val;
}
//print
void print(const array<int,6>arr){//for read only mode
    int n=arr.size();
    for(int i=0;i<n;i++){
        cout<<"\n"<<arr[i];
    }
}
int main()
{
    array<int,6>arr={1,20,17,16,8,6};
    updateArray(arr,0,100);
    //sort
    sort(arr.begin(),arr.end());
    //fill
    array<int,10>fives;
    fives.fill(5);
    for(int i=0;i<fives.size();i++){
        cout<<fives[i]<<" \n";
    }
    //for Each Loop
    for(int x:arr){
        cout<<x<<" ";

    }
    

    return 0;
}