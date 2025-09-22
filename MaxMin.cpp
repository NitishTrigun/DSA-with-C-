#include<iostream>
using namespace std;
int getMax(int num[], int n){
    int maxi=INT8_MIN;
    for(int i=0;i<n;i++){
        if(num[i]>maxi){
            maxi=num[i];
        }
    }
    return maxi;
}
int getMin(int num[], int n){
    int mini=INT8_MAX;
    for(int i=0;i<n;i++){
        if(num[i]<mini){
            mini=num[i];
        }
    }
    return mini;
}
int main(){
    int size;
    cin>>size;
    int num[100];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"The maximum value is: "<<getMax(num,size)<<endl;
    cout<<"The minimum value is: "<<getMin(num,size)<<endl;

}