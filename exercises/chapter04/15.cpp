//Debug het 3 tieng
#include "stdio.h"
#include "math.h"

typedef int array[100];
typedef char matrix[100][100];

void inputArray(array a, int& size){
	printf("Size of array = ");
	scanf("%d",&size);
	for (int i = 0; i<size; i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
}

void outputArray(array a, int n){
	printf("Element of array: ");
	for (int i = 0; i<n; i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}

void outputGraph(matrix b, int n, int m){
	for (int i = 0; i < n; i++){
		printf("\n");
		for (int j =0; j < m; j++){
			if (b[i][j] == '*')
				printf("%c",b[i][j]);
			else 
				printf(" ");
		}
	}
}

int getMax(array a, int n){
	int max = a[0];
	for (int i = 1; i<n; i++){
		if(a[i]>max) max = a[i];
	}
	return max;
}

void horizonGraph(array a, int size, matrix b, int n, int m){
	for (int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if (a[i] > 0)
				b[i][j] = '*';
			else b[i][j] = '&';
			a[i]--;
		}
	}
}

void verticalGraph(array a, int size, matrix b, int n, int m, matrix b2){
	for(int j = 0; j < n; j++){
		for (int i = m-1; i > -1; i--){
			b2[m-i-1][j] = b[j][i];
		}
	}
}

int main(){
	array a;
	int size;
	inputArray(a,size);
	matrix b,b2;
	int n = size;
	int m = getMax(a,size);
	outputArray(a,size);
	printf("Horizontal Graph: \n");
	horizonGraph(a,size,b,n,m);
	outputGraph(b,n,m);
	printf("\nVertical Graph: \n");
	verticalGraph(a,size,b,n,m,b2);
	outputGraph(b2,m,n);
}