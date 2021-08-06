#include "stdio.h"
#include "math.h"

typedef int array[100];

void inputArray(array a, int& size){
	printf("size = ");
	scanf("%d",&size);
	for(int i = 0; i < size; i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
}

void outputArray(array a, int size){
	for(int i = 0; i < size; i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}

int productArray(array a, int size){
	int res = 1;
	for (int i = 0; i < size; i++){
		res *= a[i];
	}
	return res;
}

float meanArray(array a, int size){
	float res = 0;
	for (int i = 0; i < size; i++){
		res += a[i];
	}
	return res/(size+1);
}

void outputOdd(array a, int size){
	printf("Odd Number: ");
	for (int i = 0; i < size; i++){
		if (a[i] % 2 == 1){
			printf("%d ",a[i]);
		}
	}
	printf("\n");
}

bool isPrime(int n){
	int count = 0; 
	if (n <= 1){
		return false;
	}else{
		for (int i = 2; i <= sqrt(n); i++){
			if (n % i == 0) count ++;
		}
	}
	if (count == 0) return true;
	else return false;
}

void primeNum(array a, int n){
	printf("Prime numbers are: ");
	for (int i = 0; i < n; i++){
		if (isPrime(a[i]) == true) printf("%d ",a[i]);
	}
	printf("\n");
}

int indexMin(array a, int n, int begin){
	int index_min = begin;
	for (int i = begin; i < n; i++){
		if (a[i]<a[index_min]){
			index_min = i;
		}
	}
	return index_min;
}

void swap(int& a, int& b){
	a = a + b;
	b = a - b;
	a = a - b;
}

void selectSort(array& a, int n){
	for (int k=0; k < n-2; k++){
		int index_min = indexMin(a,n,k);
		if (index_min > k)
			swap(a[k],a[index_min]);
	}
}

int main(){
	array a;
	int size;
	inputArray(a,size);
	outputArray(a,size);
	printf("Product Array = %d\n",productArray(a,size));
	printf("MeanArray = %.3f\n",meanArray(a,size));
	outputOdd(a,size);
	primeNum(a,size);
	printf("Minimum element's position: %d\n",indexMin(a,size,0));
	selectSort(a,size);
	outputArray(a,size);
}