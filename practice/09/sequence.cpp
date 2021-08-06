#include "stdio.h"

struct fraction{
    int numerator;
    int denominator;
};

fraction inputFraction();
void outputFraction(fraction a);
fraction plusFraction(fraction a, fraction b);
void simplify(fraction& a);
int GCP(int a, int b);
fraction sequence(int n);

int main(){
    fraction c = sequence(10);
    outputFraction(c);
}

fraction inputFraction(){
    fraction a;
    printf("Input fraction x/y: ");
    scanf("%d/%d", &a.numerator,&a.denominator);
    return a;
}

void outputFraction(fraction a){
    printf("%d/%d", a.numerator, a.denominator);
}

fraction plusFraction(fraction a, fraction b){
    fraction c;
    c.numerator = (a.numerator*b.denominator) + (b.numerator*a.denominator);
    c.denominator = b.denominator*a.denominator;
    return c;
}

int GCP(int a, int b){
    while(b != 0){
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}

void simplify(fraction& a){
    int divisor = GCP(a.denominator,a.numerator);
    a.denominator /= divisor;
    a.numerator /= divisor;
    if (a.denominator < 0){
        a.numerator *= -1;
        a.denominator *= -1; 
    }
}

fraction sequence(int n){
    fraction c;
    c.denominator = 1;
    c.numerator = 1;
    fraction b;
    for (int i = 2; i <= n-1; i++){
        b.numerator = 1;
        b.denominator = i;
        c = plusFraction(c,b);
    }
    simplify(c);
    return c;
}
