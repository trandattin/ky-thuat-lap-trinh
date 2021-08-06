//Nhap mot so nguyen N, hay dao nguoc so N. Vi du N = 195 -> 591 (Dung vong lap WHILE)
#include "stdio.h"

int inverseNumber(int n) {
    int d,result = 0;
    while (n>0){
        d = n % 10;
        result = result*10 + d;
        n /= 10;
    }
    return result;
}

int main () {
    int n;
    printf("Enter N: ");
    scanf("%d",&n);
    printf("Inverse number is: %d",inverseNumber(n));
}

