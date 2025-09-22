#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[10];
    fill_n(arr,10,5);

    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }

}