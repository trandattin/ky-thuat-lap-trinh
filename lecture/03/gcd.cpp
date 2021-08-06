//Tim uoc chung lon nhat
#include "stdio.h"

int solution1(int num1, int num2){
    while (num1 != num2) {
        if (num1 > num2){
            num1 -= num2;
        } else {
            num2 -= num1;
        }
    }
    return num2; 
}

int solution2(int num1, int num2){
    while (num2 !=0){
        int remainder = num1 % num2; 
        num1 = num2;
        num2 = remainder;
        }
    return num1;
    }

void solution3(int num1){
    int i = 2;
    while (num1 != 1){
        if (num1 % i == 0) {
            printf("%d x ", i);
            num1 /= i;
        } else {
            i++;
        }
    }
}

int main(){
    int num1, num2;
    printf("Enter integer number A: ");
    scanf("%d",&num1);
    printf("Enter integer number B: ");
    scanf("%d",&num2);

    printf("Solution 1: the greatest common divisor of A and B is %d\n", solution1(num1,num2));
    printf("Solution 2: the greatest common divisor of of A and B is %d\n", solution2(num1,num2));
    solution3(num1);
}