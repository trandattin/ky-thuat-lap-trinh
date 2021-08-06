//in ra thua so nguyen to cua mot so nguyen duong cho truoc
#include "stdio.h"
void thuaSo(int n, int i){
    if (n == 1) return;
    if (n % i == 0){
        printf("%d\t",i);
        thuaSo(n/i, i);
    }else{
        thuaSo(n, ++i);
    }
}

int main(){
    int n,i=2;
    printf("Enter n: ");
    scanf("%d",&n);
    thuaSo(n,i);
}