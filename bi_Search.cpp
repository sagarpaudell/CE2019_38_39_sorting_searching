#include <iostream>
using namespace std;

int binarySearch(int a[], int target, int size){
	int min =0;
	int max = size-1;
	while (max>= min) {
		int mid =(min+max)/2;
		if (a[mid]==target){
			return mid;
		}
		else if (a[mid]<target)
			min = mid+1;
		else 
			max = mid-1;
		
	}
	if (max<min)
		return -1;
}

int main(){
	int n =5;
	int arr[n] = {4,2,7,5,9};
	int target_index = binarySearch(arr, 7, 5);
	cout << target_index;
}
