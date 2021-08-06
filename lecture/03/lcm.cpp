#include "stdio.h"

/*Find UCLN of a and b*/ 
int GCD(int a, int b){
    while (a != b) {
        if (a > b){
            a -= b;
        } else {
            b -= a;
        }
    }
    return b; 
}

int LCM(int a, int b){
    return a*b / GCD(a,b);
}

int main(){
    printf("LCM of 630 and 96 = %d\n",LCM(630,96));
    printf("LCM of 1452 and 252 = %d",LCM(1452,252));
}