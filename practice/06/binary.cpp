//Decimal to binary
#include "stdio.h"

void binary(int n){
    if (n == 0) {
        return;
    }
    printf("%d", n%2);
    binary(n/2);
} 

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    binary(n);
}