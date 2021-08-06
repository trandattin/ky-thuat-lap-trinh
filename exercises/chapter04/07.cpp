#include "stdio.h"
#include "math.h"

void maxMin(int a[], int n){
	int max = a[0];
	int min = a[0];
	int index_max = 1;
	int index_min = 1;
	for (int i = 1; i<n; i++){
		if (a[i] > max){
			max = a[i];
			index_max = i+1;
		}
		if (a[i] < min){
			min = a[i];
			index_min = i+1;
		}
	}
	printf("Max = %d\n",max);
	printf("Min = %d\n",min);
	printf("Index min = %d\n",index_min);
	printf("Index max = %d",index_max);
}

int main(){
	int a[] = {1,2,3,4,5,6};
	int n = 6;
	maxMin(a,n);
}