#include "stdio.h"
#include "math.h"

long int Factorial(int n){
	long int result = 1;
	for (int i = 1; i<=n; i++){
		result *= i;
	}
	return result;
}

long int Combination(int n, int k){
	return Factorial(n)/(Factorial(k)*Factorial(n-k));
}

int main(){
	printf("%ld",Combination(6,3));
}