#include "stdio.h"
typedef int ma_tran[50][50];
void inputMatrix(ma_tran, int&, int&);
void outputMatrix(ma_tran, int, int);
void sumMatrix(ma_tran, int, int, ma_tran, ma_tran);

int main(){
    ma_tran matrix1, matrix2, matrix3;
    int r1,c1;
    int r2,c2;
    inputMatrix(matrix1, r1, c1);
    outputMatrix(matrix1, r1, c1);
    inputMatrix(matrix2, r2, c2);
    outputMatrix(matrix2, r2, c2);   

    sumMatrix(matrix1, r1, c1, matrix2, matrix3);
    outputMatrix(matrix3, r1, c1);
}

void inputMatrix(ma_tran a, int& r, int& c){
    printf("Nhap so dong va so cot: ");
    scanf("%d%d", &r,&c);
    for (int i=0; i<r; i++)
        for (int j=0; j<c; j++){
            printf("Phan tu [%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
}

void outputMatrix(ma_tran a, int r, int c){
    printf("Cac phan tu cua matran la: \n");
    for (int i=0; i< r; i++){
        for(int j=0; j<c; j++){
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }    
}

void sumMatrix(ma_tran a, int r, int c, ma_tran b, ma_tran z){
    for (int i=0; i< r; i++)
        for (int j=0; j<r; j++){
            z[i][j] = a[i][j] + b[i][j];
        }
}
