#include "stdio.h"
#include "math.h"

int main(){
	int n;
	printf("n = ");
	scanf("%d",&n);
	printf("%fUSD",pow(1.012,n)*60000);
}