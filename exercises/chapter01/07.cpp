#include "stdio.h"
#include "math.h"

//a)
int sumNum(int n){
	int sum = 0;
	int tmp;
	while(n != 0){
		tmp = n % 10;
		sum += tmp;
		n = n/10;
	}
	return sum;
}

//b)
int inverseNum(int n){
	int tmp;
	int res = 0;
	while (n != 0){
		tmp = n % 10;
		res = res*10 + tmp;
		n = n/10;
	}
	return res;
}

//c)
long int computeFibo(int n){
	return (1/sqrt(5))*pow(1+sqrt(5)/2,n) - (1/sqrt(5))*pow(1-sqrt(5)/2,n);
}

//d)
void computePrime(int n){
	int k = 2;
	while (k != 1){
		if (n % k == 0){
			n /= k;
			printf("%d ",k);
		} else {
			k++;
		}
	}
}

//e) 

void computeEqua(int n){
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n/2; j++){
			if (i + 2*j == n){
				printf("%d + 2*%d = %d\n",i,j,n);
			}
		}
	}
}

int main(){
	int n = 25;
	printf("n = %d\n",n);
	printf("a)\n");
	sumNum(n);
	printf("b)\n");
	inverseNum(n);
	printf("c)\n");
	computeFibo(n);
	computePrime(n);
	computeEqua(n);
}