//Tinh e^x bang cong thuc taylor dung khi phan du < epsilon bat ki

#include "stdio.h"
#include "math.h"

double factorial(double n){
    double result = 1.0;
    for (int i = 1; i <= n; i++){
        result *= i;
    }
    return result;
}

double expression(double x , int n){
    return pow(x,n)/factorial(n);
}

double taylorFormular(double x, double error){
    double result = 0.0;
    int n = 0;
    while (expression(x,n) > error && n < 20){
        result += expression(x,n);
        n++;
    }
    return result;
}

int main(){
    double x, error;
    printf("Enter epsilon: ");
    scanf("%lf",&error);
    printf("Enter value x in epx(x): ");
    scanf("%lf",&x);
    printf("The value of exp(%.1lf) with error = %.4lf is %lf",x,error,taylorFormular(x,error));
}