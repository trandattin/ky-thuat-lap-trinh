#include "stdio.h"
#include "math.h"
//TODO: 
void Sum(int n){
	float sum = 0;
	for (int i = 1; i <= n; i++){
		if (i % 2 == 0){
			sum -= 1.0/i;
		} else {
			sum += 1.0/i;
		}
	}
	printf("a) Sum = %f\n",sum);
}

void Product(int n){
	float product = 1;
	for (int i = 1; i<=n;i++){
		product = (1.0+(1.0/i*i)) * product;
	}
	printf("b) Product = %f\n",product);
}

void squareRoot(int n){
	float square = 0;
	for (int i = 1; i <=n; i++){
		square = sqrt(2+square);
	}
	printf("c) SquareRoot = %f", square);
}

int main(){
	int n;
	printf("Input n: ");
	scanf("%d",&n);
	Sum(n);
	Product(n);
	squareRoot(n);
}