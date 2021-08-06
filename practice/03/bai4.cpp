//Bài 4: Viết thuật toán nhập số thực x, và số thực nguyên dương n, tính giá trị A = x^n / n! (Dùng vòng lặp FOR).

#include "stdio.h"

double exP(double x, double n);
int facT(int n);

int main() {
    int n;
    float x;
    printf("Input real value x: ");
    scanf("%f",&x);
    printf("Input positive value n: ");
    scanf("%d",&n);
    printf("The result is: %f",exP(x,n)/facT(n));
}

double exP(double x, double n){
    double result = 1;
    for (int i=1; i<=n; i++) {
        result *= x;
    }
    return result;
}

int facT(int n) {
    int result = 1;
    for (int i=1; i<=n; i++) {
        result *= i;
    }
    return result;
}
