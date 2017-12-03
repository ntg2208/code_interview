#include <iostream>
using namespace std;

void swap(int *a, int *b);
int partition(int *a,int start, int end);
void quicksort(int *a,int start, int end);
int main(int argc, char *argv[]) {
	int a[]={7,2,1,6,8,5,3,4};
	quicksort(a,0,7);
	for (int i = 0;i <8;i++)
		cout<<a[i]<<" ";
	return 0;
}
void quicksort(int *a,int start, int end){
	if (start < end){
		int pi = partition(a,start,end);
		quicksort(a,start,pi-1);
		quicksort(a,pi+1,end);	
	}	
	
}
int partition(int *a,int start, int end){
	int pivot = a[end];
	int pi = start;
	for (int i = start; i<end; i++){
		if (a[i]<=pivot){
			swap(&a[i],&a[pi]);
			pi++;
		}
	}
	swap(&a[pi],&a[end]);
	return pi;
}
void swap(int *c, int *d){
	int temp = *c;
	*c = *d;
	*d = temp;
}
