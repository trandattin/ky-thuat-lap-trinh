#include "stdio.h"
#include "math.h"

float calSum(int n){
    float sum = 0.0;
    float i = 1.0;
    while (n>0){
        sum += (pow(-1,n+1)/(n));
        printf("sum = %f ",sum);
        n -= 1;
    }
    return sum;
}

int main() {
    int n;
    printf("Enter a n: ");
    scanf("%d",&n);
    printf("The result is: %f\n",calSum(n));
}