#include "stdio.h"
#include "math.h"

int indexMax(int arr[], int n){
	int max = 0;
	for (int i=1; i<n; i++){
		if(arr[i]>arr[max]){
			max = i;
		}
	}
	return max;
}

void countRepeat(int a[], int b[], int n){
	for (int i = 0; i <n; i++){
		for (int j = i; j < n; j++){
			if (a[j] == a[i]) b[i]++;
		}
	}
}

void outputArray(int a[], int n){
	for(int i=0; i<n; i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}

int main(){
	int arr1[] = {1,2,3,4,5,6,6,6,6,6,7,8,9};
	int n1 = sizeof(arr1)/sizeof(arr1[0]);
	int arr2[n1] = {0};
	countRepeat(arr1,arr2,n1);
	printf("Phan tu co so lan lap nhieu nhat la: %d voi so lan lap la %d",arr1[indexMax(arr2,n1)],arr2[indexMax(arr2,n1)]);
}