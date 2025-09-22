#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,45,6};
    int sum=0;
    for(int i=0;i<5;i++){
        sum=sum+arr[i];
    }
    cout<<"The sum of the array is: "<<sum<<endl;
    return 0;
}