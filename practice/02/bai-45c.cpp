//Tinh tong luy Thua 1^2 + 2^2 + ... + n^2
#include "stdio.h"

int tongBinhPhuong(int n);

int main () {
    int n, result;
    printf("Nhap vao n: ");
    scanf("%d", &n);
    
    printf("%d", tongBinhPhuong(n));
}

int tongBinhPhuong(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i*i;
    }
    return sum;
}

