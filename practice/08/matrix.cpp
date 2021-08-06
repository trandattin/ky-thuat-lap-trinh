#include "stdio.h"
typedef int matrix[100][100];
typedef int array[100];

void inputMatrix(matrix matrix1, int& m1, int& n1){
    printf("Nhap so dong va so cot cua ma tran: \n");
    scanf("%d%d",&m1,&n1);
    for (int i = 0 ; i < m1; i++){
        for (int k = 0; k < n1; k++){
            printf("matrix1[%d][%d]: ",i,k);
            scanf("%d",&matrix1[i][k]);
            printf("\n");
        }
    }
}

void outputMatrix(matrix matrix1, int m1, int n1){
    printf("Output matrix: \n");
    for (int i = 0; i < m1; i++){
        for(int k = 0; k < n1; k++){
            printf("%5d", matrix1[i][k]);
        }
        printf("\n");
    }
}

void findValue(matrix matrix1, int m1, int n1, int z){
    array result;
    int o = 0;
    for (int i = 0; i < m1; i++){
        for(int k = 0; k < n1; k++){
            if (matrix1[i][k] > z) {
                result[o] = matrix1[i][k];
                o++;
            }
        }
    }
    printf("Cac phan tu la: ");
    for (int i = 0; i<o; i++){
        printf("%d\t",result[i]);
    }
}

int main(){
    matrix matrix1, matrix2;
    int m1,n1,m2,n2;
    inputMatrix(matrix1, m1, n1);
    outputMatrix(matrix1,m1,n1);
    findValue(matrix1, m1, n1, 5);
}