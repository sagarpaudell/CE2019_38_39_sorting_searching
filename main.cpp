#include <sorting.h>

int main(){
int lb=0;
int ub=9;
	cout << "Unsorted array"<<endl;
	for (int i=0;i<10;i++){
		cout << a[i]<<endl;
	}
	cout << endl;
	cout << "Sorted array"<<endl;
	Quicksort(a,lb,ub);
	
	for (int i=0;i<10;i++){
		cout << a[i]<<endl;
	}
	
	

}
