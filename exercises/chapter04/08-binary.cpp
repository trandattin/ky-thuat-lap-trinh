#include "stdio.h"
#include "math.h"

int binarySearch(int arr[], int q ,int n, int x){
	if (n >= 0){
		int mid = q + (n-q)/2;
		
		if (arr[mid] == x)
			return mid;
		if (arr[mid] > x)
			return binarySearch(arr,q,mid-1,x);
		return binarySearch(arr,mid+1,n,x);
	}
	return -1;
}

int main(){
	int arr[] = {1,2,3,4,5,6,7};
	int n = sizeof(arr)/sizeof(arr[0]) - 1;
	int x = 1;
	int result = binarySearch(arr,0,n,x);
	if (result == -1){
		printf("x = %d not in the array",x);
	} else{
		printf("Position: %d",result+1);
	}
}