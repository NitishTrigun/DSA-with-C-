#include<iostream>
using namespace std;
int main(){
    int arr[15];
    cout<<"The initial garbage values are: "<< arr[14]<<endl;

    int variable[5]={1,2,3,4,5};
    cout<<"The initial value is:"<<variable[3]<<endl;

    int third[10]={23,43,56,78};
    int n=10;
    cout<<"The size of third is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<third[i]<<" ";
    }
    
    cout<<"Every thing is fine"<<endl;
    return 0;
}