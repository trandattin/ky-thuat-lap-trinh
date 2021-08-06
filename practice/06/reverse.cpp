#include "stdio.h"

void reverse(int number){
    if (number == 0) 
        return;
    else {
        printf("%d",number %10);
        reverse(number/10);
    }
}

int main(){
    int number;
    printf("Enter n: ");
    scanf("%d",&number);
    reverse(number);
}