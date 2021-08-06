#include "stdio.h"
#include "math.h"

typedef int array[100];

void inputArr(array arr, int& n){
	printf("size of array: ");
	scanf("%d",&n);
	for (int i = 0; i < n; i++){
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
}

void check(array arr, int n, int x){
	int count = 0;
	array arr_index;
	for (int i=0; i < n; i++){
		if (arr[i] == x) {
			arr_index[count] = i+1;
			count ++;
		}
	}
	if (count > 0){
		printf("There is exist %d in array\n",x);
		printf("There are %d\nIndex: ",count);
		for(int i = 0; i < count; i++){
			printf("%d ",arr_index[i]);
		}
	}
}

int main(){
	int n,x;
	array arr;
	inputArr(arr,n);
	printf("input x: ");
	scanf("%d",&x);
	check(arr,n,x);

}