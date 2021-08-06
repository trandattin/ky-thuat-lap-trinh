//Tim so nguyen k lon nhat thoa P^k < n
#include "stdio.h"
#include "math.h"

int main(){
    float p;
    int n, k = 0;
    printf("Enter p real value: ");
    scanf("%f",&p);
    printf("Enter n integer value: ");
    scanf("%d",&n);

    while (pow(p,k) < n){
        k++;
    }
    k--;
    printf("max k = %d",k);
}