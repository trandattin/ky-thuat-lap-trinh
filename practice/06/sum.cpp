/*Calculate 1+2+3+...+n*/
#include "stdio.h"

int sum(int n, int s){
    if (n == 1) return s;
    return sum(n-1,s+n);
}

int main(){
    int n, s =0;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Sum of is %d", sum(n, s));
}
