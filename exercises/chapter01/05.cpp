#include "stdio.h"
#include "math.h"

float computeDelta(int a, int b, int c){
	return b*b - 4*a*c;
}

void computeSol(int a, int b, int c){
	if (a==0)
		printf("Phuong trinh da cho co nghiem duy nhat la: %d", -b/c);
	else {
		float delta = computeDelta(a,b,c);
		if (delta > 0){
			float x1 = (-b + sqrt(delta))/(2*a);
			float x2 = (-b + sqrt(delta))/(2*a);
			printf("Phuong trinh da cho co hai nghiem la x1 = %.4f va x2 = %.4f",x1,x2);
		} else if (delta == 0){
			float x = (-b/(2*a));
			printf("Phuong trinh da cho co nghiem kep la x=%f", x);
		} else if (delta < 0)
			printf("Phuong trinh da cho khong co nghiem tren R");
	}
}

int main(){
	int a,b,c;
	printf("a =");
	scanf("%d",&a);	
	printf("b =");	
	scanf("%d",&b);
	printf("c =");
	scanf("%d",&c);
	computeSol(a,b,c);
}