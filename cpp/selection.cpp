#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void swap(int *a, int *b);
void selection(int *a, int n);
int main(int argc, char *argv[]) {
	int a[] = {3,2,4,1,6,8,9,10};
	int n = 8;
	selection(a, n);
	for (int i = 0; i<n; i++)
		cout<<a[i]<<" ";
	return 0;
}
void swap(int *a, int *b){
	int tmp = *a; 
	*a = *b;
	*b = tmp;
}
void selection(int *a, int n){
	int min_idx;
	for (int i = 0 ; i <n-1; i++){
		min_idx = i;
		for (int j= i +1; j<n; j++)
			if (a[i]>=a[j]) min_idx = j;
			
		swap(&a[i],&a[min_idx]);
	}
}
