#include "stdio.h"
#include "math.h"

typedef int array[100];

void inputArray(array& a, int& n){
	printf("n = ");
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
}

void outputArray(array a, int n){
	for(int i=0; i<n; i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}

void check(array a, int n, int x){
	int c1 = 0;
	int c2 = 0;
	int c3 = 0;
	for(int i=0; i<n; i++){
		if(a[i] > x) c1++;
		if(a[i] < x) c2++;
		if(a[i] == x) c3++;
	}
	printf("c1 = %d\n",c1);
	printf("c2 = %d\n",c2);
	printf("c3 = %d",c3);
}

int main(){
	array a;
	int n, x;
	inputArray(a,n);
	outputArray(a,n);
	printf("x = ");
	scanf("%d",&x);
	check(a,n,x);
}