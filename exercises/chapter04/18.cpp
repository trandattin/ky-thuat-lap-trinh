#include "stdio.h"
#include "math.h"

struct matrix{
	int n;
	int m;
	int element[100][100];
};

void inputMatrix(matrix& A){
	printf("Input mxn of matrix: ");
	scanf("%dx%d",&A.m,&A.n);
	for(int i=0; i<A.m; i++){
		for(int j=0; j<A.n; j++){
			printf("A[%d][%d] = ",i+1,j+1);
			scanf("%d",&A.element[i][j]);
		}
	}
}

void outputMatrix(matrix A){
	for (int i=0; i<A.m; i++){
		for (int j=0; j<A.n; j++){
			printf("%3d",A.element[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void sumMatrix(matrix A, matrix B, matrix& C, int& check){	
	C.n = A.n; C.m = A.m;
	if (A.m != B.m || A.n != B.n){
		printf("Two matrix not equal!");
		check = -1;
	}else{
		check = 0;
		for(int i =0; i<C.n; i++){
			for(int j=0; j<C.m; j++){
				C.element[i][j] = A.element[i][j] + B.element[i][j];
			}
		}
	}
}

void productMatrix(matrix A, matrix B, matrix& C, int& check){
	if(A.n != B.m){
		printf("Error!");
		check = -1;
	} else {
		check = 0;
		C.m = A.m;
		C.n = B.n;
		for(int i=0; i<C.m; i++){
			for(int j=0; j<C.n; j++){
				C.element[i][j] = 0;
				for(int k=0; k <A.n; k++){
					C.element[i][j] += A.element[i][k] * B.element[k][j];
				}
			}
		}
	}
}

int main(){
	matrix A,B,C;
	int check = 0;
	inputMatrix(A);
	outputMatrix(A);
	inputMatrix(B);
	outputMatrix(B);
	sumMatrix(A,B,C,check);
	if (check != -1){
		printf("Sum of two matrix: \n");
		outputMatrix(C);
	}
	productMatrix(A,B,C,check);
	if (check != -1){
		printf("Product of two matrix: \n");
		outputMatrix(C);
	}
}