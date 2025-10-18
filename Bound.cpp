#include<iostream>
using namespace std;

int firstOccurence(int arr[], int n, int key){
    int start = 0, end = n - 1;
    int ans=-1;
    int mid = start + (end - start) / 2;

    while(start <= end){
        if(arr[mid]==key){
            ans = mid;
            end = mid - 1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main(){
    int even[6] = {1, 3, 6, 6, 6, 15};
    int odd[5] = {1, 5, 9, 9, 17};

    int index = firstOccurence(even, 6, 1);
    cout << "First Occurrence of 1 is: " << index << endl;

    index = firstOccurence(odd, 5, 17);
    cout << "First Occurrence of 17 is: " << index << endl;

    cout << endl;

    return 0;
}