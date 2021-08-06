//Doi he so 10 sang he so 2 va 16

#include "stdio.h"
#include <iostream>
using namespace std;

void encodeHex(int n){
    if (n == 0){
        return;
    }
    encodeHex(n/16);
    if (n%16 > 9){
        printf("%c",(n%16)+55);
        return;
    }
    printf("%d",n%16);
}

void digital(int n){
    if (n == 0) {
        return;
    } 
    digital(n/2);
    printf("%d", n%2);
}

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    printf("The digital is: ");
    digital(n);
    cout << endl;

    printf("The hex is: ");
    encodeHex(n);
    cout << endl; 
}