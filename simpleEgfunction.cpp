#include<iostream>
using namespace std;
void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int third[10]={23,43,56,78};
    int n=10;
    printArray(third,n);
    int thirdsize=sizeof(third)/sizeof(int);
    cout<<"The size of third is: "<<thirdsize<<endl;
    char ch[5]={'a','b','c','d','e'};
    cout<<ch[3]<<endl;
    cout<<"printing the array:"<<endl;
    for(int i=0;i<5;i++){
        cout<<ch[i]<<" ";
    }
    return 0;
}