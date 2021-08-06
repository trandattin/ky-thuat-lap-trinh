//Tinh tong dan dau -1-2+4+5 ... n
#include "stdio.h"

int tinhTongDanDau(int n);

int main () {
    int n;
    printf("Nhap vao mot so n > 0 : ");
    scanf("%d", &n);
    
    printf("%d", tinhTongDanDau(n));
}

int tinhTongDanDau(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        switch (i % 4) {
            case 1: case 2: 
                sum -= i; 
                break;
            default: 
                sum += i; 
                break;
        }
    }
    return sum;
}
