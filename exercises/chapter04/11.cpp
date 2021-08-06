#include "stdio.h"
#include "math.h"

void outputArray(int a[], int n){
	for (int i = 0; i<n; i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}

void countRepeat(int a[], int b[], int n){
	for (int i = 0; i<n; i++){
		for (int j = i; j < n; j++){
			if (a[j] == a[i]) b[i]++;
		}
	}
}

void noRepeat(int a[], int b[], int n){
	printf("Cac phan tu khong lap la: ");
	for (int i = 0; i<n; i++){
		if (b[i] == 1) {
			printf("%d ",a[i]);
		}
	}
}

int main(){
	int a[] = {1,2,3,4,4,5};
	int n = sizeof(a)/sizeof(a[0]);
	int b[n] = {0};
	outputArray(a,n);
	countRepeat(a,b,n);
	noRepeat(a,b,n);
}