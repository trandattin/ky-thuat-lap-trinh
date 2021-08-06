#include "stdio.h"
typedef int ma_tran[50][50];
void inputMatrix(ma_tran, int&, int&);
void outputMatrix(ma_tran, int, int);
void productMatrix(ma_tran, int, int, ma_tran, int, int, ma_tran, int&, int&);

int main(){
    ma_tran matrix1, matrix2, matrix3;
    int r1,c1;
    int r2,c2;
    int r3,c3;
    inputMatrix(matrix1, r1, c1);
    outputMatrix(matrix1, r1, c1);
    inputMatrix(matrix2, r2, c2);
    outputMatrix(matrix2, r2, c2);   

    productMatrix(matrix1, r1, c1, matrix2 ,r2, c2, matrix3, r3, c3);
    outputMatrix(matrix3, r3, c3);
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

void productMatrix(ma_tran a, int r_a, int c_a, ma_tran b, int r_b, int c_b, ma_tran z, int& r_z, int& c_z){
    if (c_a != r_b) {
        printf("Khong nhan duoc.");
        return;
    }
    r_z = r_a;
    c_z = c_b;

    for (int i=0; i< r_z; i++){
        for (int j=0; j < c_z; j++){
            z[i][j] = 0;
            for (int k=0; k< c_a; k++){
                z[i][j]  +=  a[i][k]*b[k][j];
            }
        }
    }
}