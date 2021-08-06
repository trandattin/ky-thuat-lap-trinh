#include "stdio.h"
#include "math.h"

int countNum(int a[], int n, int C){
	int res = 0;
	for (int i = 0; i<n; i++){
		if(a[i] == C)
			res++;
	}
	return res;
}

int sumNum(int a[], int n, int C){
	int res = 0;
	for (int i = 0; i<n; i++){
		if (a[i] % C == 0) res += a[i];
	}
	return res;
}

int countRoad(int a[], int n){
	int res = 0;
	for (int i = 0; i<n; i++){
		if (a[i] > a[i+1]) res++;
	}
	return res;
}

bool checkSym(int a[], int n){
	int count = 0;
	for (int i = 0; i<n; i++){
		if(a[i] != a[n-1-i])
			count ++;
	}
	if (count == 0) return true;
	else return false;
}

int maxValue(int a[], int n){
	int max = a[0];
	for (int i = 1; i<n; i++){
		if (a[i]>max) max = a[i];
	}
	return max;
}

int findEven(int a[], int n){
	int res = maxValue(a,n);
	for (int i = 0; i<n; i++){
		if(a[i] % 4 ==0 && a[i] < res){
			res = a[i];
		}
	}
	return res;
}

int computeSum(int a[], int n){
	int res = 0;
	for (int i = 0; i<n; i++){
		res += a[i];
	}
	return res;
}

void meanAndSum(int a[], int n){
	float mean = 0;
	int count = 0;
	int sum = 0;
	for (int i = 0; i<n; i++){
		if (a[i] % 2 == 0 && a[i] > 0){
			mean += a[i];
			count ++;
		} 
			
		if (a[i] % 2 == 1 && a[i] < 0) sum += a[i]; 
	}
	printf("mean = %.3f\n",mean/(count));
	printf("sum = %d",sum);
}

int main(){
	int a[] = {1,2,3,8,16,3,2,1};
	int n = sizeof(a)/sizeof(a[0]);
	int C = 4;
	printf("So lan xuat hien cua %d la: %d\n",C,countNum(a,n,C));
	printf("Tong cac so chia het cho %d la: %d\n",C,sumNum(a,n,C));
	printf("Tong cac so duong chay trong X la: %d\n",countRoad(a,n));
	if (checkSym(a,n) == true)
		printf("Mang doi xung\n");
	else printf("Mang khong doi xung\n");
	printf("So chan nho nhat chia het cho 4 la: %d\n",findEven(a,n));
	meanAndSum(a,n);
}