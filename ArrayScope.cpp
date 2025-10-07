#include<iostream>
using namespace std;
int update(int arr[],int n){
    cout<<"Inside the function before updating: "<<endl;
    arr[0]=1;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Going back to the main function: "<<endl;
}

int main(){
    int arr[5]={1,2,3,4,5};
    update(arr,1);
    cout<<"Printing the main function"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}