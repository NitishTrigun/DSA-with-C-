#include<iostream>
using namespace std;

int swapArray(int arr[],int n){
    for(int i=0;i<n-1;i+=2){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Wave Array:"<<endl;
    swapArray(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}