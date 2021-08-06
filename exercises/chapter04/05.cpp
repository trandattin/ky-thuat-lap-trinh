#include "stdio.h"

void checkSort(int a[], int n){
	int count = 0;
	for (int i = 0; i<n; i++){
		if (a[i] > a[i+1]) count ++;
	}
	if (count > 0) printf("The sequence is non-increasing");
	else printf("The sequence is increasing");
}

int main(){
	int a[] = {1,2,3,4,6,5,6,7,8};
	int n = 8;
	checkSort(a,n);
}