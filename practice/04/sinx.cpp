//Tinh sinx bang cong thuc taylor

#include "stdio.h"
#include "math.h"

float fac(int n) {
    float result = 1;
    for (int i=1; i<=n; i++){
        result *= i;
    }
    return result;
}

float remainder(float x, int n) {
    return abs((pow(x,2*n+1))/fac(2*n+1));

}

float exp(float x, int n) {
    return pow(-1,n)*pow(x,2*n+1)/fac(2*n+1);
}

float taylorFomular(float x, float error){
    float result = 0.0;
    int n = 0;
    while (remainder(x,n) > error) {
        result += exp(x,n);
		printf("debug n=%d\tsin=%f\telem=%f\terr=%f\n", n, result, exp(x, n), remainder(x, n));
        n++;
    }
    return result;

}

int main (){
    float error,x;
    printf("Nhap vao gia tri x trong bieu thuc sin(x): ");
    scanf("%f",&x);
    printf("Nhap vao sai so error: ");
    scanf ("%f",&error);

    printf("The value of sin(%.3f) is: %f",x,taylorFomular(x,error));
}