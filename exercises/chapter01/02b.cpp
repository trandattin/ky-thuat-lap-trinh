#include <stdio.h>
#include "math.h"

float Factorial(int n){
	float result = 1;
	for (int i = 1; i<=n; i++){
		result *= i;
	}
	return result;
}

float Remainder(int n, float x){
	return abs(pow(x,n)/Factorial(n));
}

float taylorFormular(float x, float epsilon){
	int n = 0;
	float result = 0.0;
	while(Remainder(n,x) >= epsilon && n < 20){
		result += pow(x,n)/Factorial(n);
		n++;
	}
	return result;
}

int main(){
	float x, epsilon;
	printf("Enter x = ");
	scanf("%f",&x);
	printf("Enter epsilon = ");
	scanf("%f",&epsilon);
	printf("e^%.3f = %f",x,taylorFormular(x,epsilon));
}