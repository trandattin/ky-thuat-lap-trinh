#include "stdio.h"

int sum(int n, int s){
    if (n == 0) return s;
    return sum(n/10,s+(n%10));
}

int main(){
    int n,s = 0;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Sum of integer: %d",sum(n,s));
}