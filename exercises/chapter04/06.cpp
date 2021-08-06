#include "stdio.h"
#include "math.h"

int insertIndex(int a[], int n, int x){
	for (int i = 0; i < n; i++){
		if(a[i] > x) return i;
	}
	return n+1;
}

void insertEle(int a[], int& n, int x){
	int index = insertIndex(a,n,x);
	int b[n+1];
	for (int i = 0; i<index;i++){
		b[i] = a[i];
	}
	b[index] = x;
	for(int i = index+1; i<n+1;i++){
		b[i] = a[i-1];
	}
	n++;
	for (int i = 0; i<n; i++){
		a[i] = b[i];
	}
}


void outputArray(int a[], int n){
	for(int i=0; i<n; i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}

int main(){
	int a[] = {1,2,3,4,5,6,8};
	int n = 7;
	int x = 0;
	insertEle(a,n,x);
	outputArray(a,n);
}