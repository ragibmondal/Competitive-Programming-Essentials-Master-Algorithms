 #include <iostream>
 using namespace std;
 void updateArray(int arr[],int i,int data){
    arr[i]=data;
 }
 void print(int arr[],int n){
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
 }
 void arraySize(int arr[]){
    cout<<"Array size in Function is: "<<sizeof(arr)<<endl;//its only store adress not int value
 }
 int main(){
    int arr[]={2,5,6,7,8};
    int n=sizeof(arr)/sizeof(int);
    updateArray(arr,1,13);
    print(arr,n);
    cout<<arr<<"\n";
    arraySize(arr);
    cout<<"Array size in main: "<<sizeof(arr);
    return 0;
 }