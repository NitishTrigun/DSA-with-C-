#include<iostream>
using namespace std;

void rearrangeAlternate(int arr[],int n){
    int temp[n];
    int start=0,end=n-1;
    bool flag=true;

    for(int i=0; i<n; i++){
        if(flag)
            temp[i]=arr[end--];
        else
            temp[i]=arr[start++];
        flag=!flag;
    }
    for(int i=0; i<n; i++)
        arr[i]=temp[i];
    
}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"Rearrange Alternate Array:"<<endl;
    rearrangeAlternate(arr,n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
