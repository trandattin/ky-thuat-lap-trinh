#include "stdio.h"

int divideNum(int &num1, int num2, int &quotient){
    while (num1 >= num2){
        num1 -= num2;
        quotient++;
    }
    return num1;
}

int main(){
    int num1,num2,quotient = 0;
    printf("Enter number 1: ",num1);
    scanf("%d",&num1);
    printf("Enter number 2: ",num2);
    scanf("%d",&num2);
    int r = divideNum(num1,num2,quotient);
    printf("The quotient is %d\n",quotient);
    printf("The remainder is %d\n",r);
}