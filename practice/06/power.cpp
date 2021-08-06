//Implement the power function
#include "stdio.h"
int powerF(int a, int x,int s){
    if(x == 0) return s;
    return powerF(a,x-1,s*a);
}
int main(){
    int a,x,s=1;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter x");
    scanf("%d",&x);
    printf("The value of a^x is %d",powerF(a,x,s));
}
