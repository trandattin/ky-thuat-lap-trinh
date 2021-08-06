//Bai 5
#include "stdio.h"

double cal(double n);

int main() {
    int n;
    printf("Nhap vao so nguyen duong n: ");
    scanf("%d",&n);
    printf("Ket qua la: %f",cal(n));
}

double cal(double n) {
    double result = 1.0;
    for (int i = 1; i<=n; i++) {
        result *= 1 + 1.0/(i*i);
    }
    return result;
}