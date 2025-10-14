#include<iostream>
using namespace std;
int palindrome(int arr[],int n){
    for (int i=0;i<n/2;i++){
        if(arr[i]!=arr[n-i-1]){
            return 0;
        }
    }
    return 1;
}
int main(){
    int arr[]={1,2,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    if(palindrome(arr,n)){
        cout<<"Array is palindrome";
    }
    else{
        cout<<"Array is not palindrome";
    }
}