#include <iostream>
using namespace std;
int partition(int a[],int lb,int ub);
void swap(int &a,int &b);
void Quicksort(int a[],int lb,int ub);

int a[10]={4,2,5,7,5,8,2,8,10,16};


//Quick sort
int partition(int a[],int lb,int ub){
	
	int pivot = a[lb];
	int i = lb;
	int j = ub;
	while(i<j){
			while(a[i]<=pivot){
				i++;
			}
			while(a[j]>pivot){
				j--;
			}
		if (i<j){
		swap(a[i],a[j]);
		}
	}
	swap(a[j],a[lb]);
	int end = j;
	return end;
}

void swap(int &a,int &b){

	int temp;
	temp = a;
	a=b;
	b = temp;		
}

void Quicksort(int a[],int lb,int ub){
	
	if (lb<ub){
	
	int doc = partition(a,lb,ub);
	Quicksort(a,lb,doc-1);
	Quicksort(a,doc+1,ub);
	}
}
