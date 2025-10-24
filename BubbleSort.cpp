#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int bubbleSort(vector<int> &arr, int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    return 0;
}
int main(){
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    int n = arr.size();
    bubbleSort(arr, n);
    cout << "Sorted array: ";
    for(int i = 0; i<n; i++){
        cout << arr[i]<<" ";
    }
    cout << endl;
    return 0;
}