#include<iostream>
using namespace std;
int findUnique(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main() {
    int arr[] = {1, 2, 3, 2, 1, 4,6,4,6,8,11,13,8,13,11};
    int size = 5;

    cout << "Unique element is: " << findUnique(arr, size) << endl;

    return 0;
}
