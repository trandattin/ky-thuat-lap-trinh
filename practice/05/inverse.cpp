/* Cho so nguyên dương N
    a. Tính số chữ số của N
    b. Dao nguoc N. Vi du N = 195 > 591
*/
#include "stdio.h"

void inverseAndCout(int n, int* inverse, int* total){
    *inverse = 0;
    *total = 0;
    int tempt;
    int t;
    while (n > 0){
        tempt = n % 10;
        *inverse = *inverse*10 + tempt;
        n /= 10;
        *total += 1;
        printf("debug = %d\n",*total);
    }
}

int main(){
    int n, inverse, total;
    printf("Enter n: ");
    scanf("%d",&n);
    inverseAndCout(n,&inverse,&total);
    printf("The number of n is: %d\n",total);
    printf("The inverse of n is: %d",inverse);
}