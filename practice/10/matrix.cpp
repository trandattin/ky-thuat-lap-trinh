#include "stdio.h"

struct matrix{
    int m;
    int n;
    int element[100][100];
};

void inputMatrix(matrix& A){
    printf("Input mxn of matrix: ");
    scanf("%dx%d",&A.m,&A.n);
    for (int i = 0; i < A.m; i++){
        for (int j = 0; j < A.n; j++){
            printf("%dx%d = ",i+1,j+1);
            scanf("%d",&A.element[i][j]);
        }
    }
    printf("\n");
}

void outputMatrix(matrix A){
    for (int i = 0; i<A.m; i++){
        for(int j = 0; j<A.n; j++){
            printf("%3d",A.element[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void swap(int a,int b){
    int tempt = a; a = b; b = tempt;
}

matrix transposeMatrix(matrix A){
    matrix transpose;
    transpose.m = A.n;
    transpose.n = A.m;
    for (int i = 0; i < A.m; i++){
        for (int j = 0; j < A.n; j++){
            transpose.element[j][i] = A.element[i][j];
        }
        printf("\n");
    }
    return transpose;
}

int main(){
    matrix A;
    inputMatrix(A);
    printf("Matrix A: \n");
    outputMatrix(A);

    matrix transpose = transposeMatrix(A);
    printf("Tranpose of A: \n");
    outputMatrix(transpose);

}