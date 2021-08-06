//Kiem tra so nguyen to
#include "stdio.h"

bool isPrime(int num){
    int i = 2;
    if (num <= 1){
        return false;
    } while (num%i != 0) {
        i++;
    } 
    return (i == num);
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPrime(num)) {
        printf("This is a prime number");
    } else {
        printf("This is not a prime number");
    }
}