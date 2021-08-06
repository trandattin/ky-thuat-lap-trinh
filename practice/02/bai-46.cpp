//Tinh X^n
#include "stdio.h"

int tinhLuyThua(int X, int n);

int main () {
    int X,n;
    printf("Nhap vao X va n: ");
    scanf("%d%d", &X,&n);
    printf("Ket qua la: %d", tinhLuyThua(X,n));
}

int tinhLuyThua(int X, int n){ 
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= X; 
    }
    return result;
}

