#include<iostream>
using namespace std;

int findPeak(int arr[], int n){
    for (int i=0; i<n; i++){
        if((i==0 || arr[i]>=arr[i-1]) && (i==n-1 || arr[i]>=arr[i+1]))
            return arr[i];
    }
    return -1;
}
int main(){
    int arr[]={1,2,5,20,7,18};
    int n= sizeof(arr)/sizeof(arr[0]);
    int peak = findPeak(arr,n);
    if(peak != -1)
        cout<<"Peak Element is: "<<peak<<endl;
    else
        cout<<"No Peak Element Found"<<endl;

    return 0;
}