#include<iostream> 
using namespace std;

int binarySearch(int arr[], int size, int key){
	int start = 0 , end = size - 1;

	int mid = start + (end-start) / 2; 
	// (start+end)/2; // it may exceed the range of integer in some cases
	// so we use start + (end-start)/2

	while(start <= end){
		if(arr[mid] == key){
			return mid;
		}
		if(key > arr[mid]){
			start = mid + 1;
		}else{
			end = mid - 1;
		}
		mid = start + (end-start) / 2; 
	}
 	return -1;
}
int main(){
int even[6]={1,3,6,9,12,15};
int odd[5]={1,5,9,13,17};

int index = binarySearch(even,6,12);
cout<<"Index of 12 is:"<< index <<endl;

index = binarySearch(odd,5,9);
cout<<"Index of 9 is:"<< index <<endl;

cout<<endl;

return 0;

}