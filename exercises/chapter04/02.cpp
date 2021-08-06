#include "stdio.h"
#include "math.h"

void dotProduct(int arr1[], int arr2[], int n1, int n2){
	if (n1 != n2){
		printf("Size of two vector different\n");
		return;
	}
	float res = 0;
	for (int i = 0; i< n1; i++){
		res += arr1[i]*arr2[i]; 
	}
	printf("Scalar product of two vectors = %.3f\n", res);
}

void computeSum(int arr1[], int arr2[], int n1, int n2){
	if (n1 != n2){
		printf("Size of two vector different\n");
		return;
	}
	printf("Sum of two vector is (");
	for (int i=0; i<n1 ;i++){
		if (i != n1 - 1){
			printf("%d,",arr1[i]+arr2[i]);
		}else{
			printf("%d)\n",arr1[i]+arr2[i]);
		}
	}
}

void normVector(int arr[], int n){
	float res = 0;
	for (int i = 0; i < n; i++){
		res += arr[i]*arr[i];
	}
	printf("The norm of vector is: %.3f\n",sqrt(res));
}

int main(){
	int arr1[] = {1,2,3,4};
	int n1 = 4;
	int arr2[] = {4,3,-5,1};
	int n2 = 4;
	dotProduct(arr1,arr2,n1,n2);
	computeSum(arr1,arr2,n1,n2);
	normVector(arr2,n2);
}