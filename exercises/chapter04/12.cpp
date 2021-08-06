#include "stdio.h"
#include "math.h"

void outputArray(float a[], int n){
	for (int i = 0; i<n; i++){
		printf("%.3f ",a[i]);
	}
	printf("\n");
}

void countRepeat(float a[], float b[], int n){
	for (int i = 0; i<n; i++){
		for (int j = i; j < n; j++){
			if (a[j] == a[i]) b[i]++;
		}
	}
}

void noRepeat(float a[], float b[], int n){
	printf("Cac phan tu khong lap la: ");
	for (int i = 0; i<n; i++){
		if (b[i] == 1) {
			printf("%.3f ",a[i]);
		}
	}
	printf("\n");
}

void swap(float& a, float& b){
	a = a+b;
	b = a-b;
	a = a-b;
}

int indexMin(float a[], int begin, int n){
	int index_min = begin;
	for (int i = begin+1; i<n; i++){
		if (a[i]<a[index_min]){
			index_min = i;
		}
	}
	return index_min;
}

void selectSoft(float a[], int n){
	for (int k = 0; k<n-1; k++){
		int index_min = indexMin(a,k,n);
		if(index_min>k)
			swap(a[index_min],a[k]);
	}
}

int main(){
	float a[] = {1,2,0,5,3,4,4,5};
	int n = sizeof(a)/sizeof(a[0]);
	float b[n] = {0};
	outputArray(a,n);
	countRepeat(a,b,n);
	noRepeat(a,b,n);
	selectSoft(a,n);
	outputArray(a,n);
}