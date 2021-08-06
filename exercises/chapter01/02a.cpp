#include "stdio.h"
#include "math.h"

double factorial(int n){
	double result = 1;
	for (int i = 1; i <= n; i++){
		result *= i;
	}
	return result;
}

float remainder(float x, int n){
	return abs(pow(x,2*n+1)/factorial(2*n+1));
}

float element(float x, int n){
	return pow((-1),n)*(pow(x,2*n+1)/factorial(2*n+1));
}

double taylorFormular(float x, float epsilon){
	float result = 0.0;
	int n = 0;
	while (remainder(x,n)>=epsilon && n < 20){
		result += element(x,n);
		n++;
	}
	return result;
}

int main(){
	float x, epsilon;
	printf("Input x = ");
	scanf("%f",&x);
	printf("Input epsilon ");	
	scanf("%f",&epsilon);
	printf("The value of sin(%f) = %lf",x,taylorFormular(x,epsilon));
}