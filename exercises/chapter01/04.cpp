#include "stdio.h"
#include "math.h"

int main(){
	int k,p;
	int n = 0;
	printf("input k ");
	scanf("%d",&k);
	printf("input p ");
	scanf("%d",&p);
	while (pow(p,k)>= n){
		n++;
	}
	printf("%d",n);
}