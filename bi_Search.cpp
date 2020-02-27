#include <iostream>
#include "sorting.cpp"
#include <math.h>
using namespace std;

int binarySearch(int a[], int target, int size){
	int min =0;
	int max = size-1;
	while (max>= min) {
		int mid =floor((min+max)/2);
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
	Quicksort(arr,0,4);
	
	for (int i=0;i<5;i++){
		cout << arr[i]<<endl;
	}
	int target_index = binarySearch(arr, 5, 5);
	cout << endl<<target_index;
}
