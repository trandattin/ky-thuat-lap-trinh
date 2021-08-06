//Find greatest commoon divisor
#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int gcd(int n1, int n2){
    if (n1%n2==0) return n2;
    return gcd(n2,n1%n2);
}

int main(){
    int a,b;
    printf("Enter a");
    scanf("%d",&a);
    printf("Enter b");
    scanf("%d",&b);
    printf("GCD = %d",gcd(a,b));
}