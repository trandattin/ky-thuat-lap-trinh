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
fraction multipFrac(fraction a, fraction b);
void inverseFrac(fraction& a);
fraction devideFrac(fraction a, fraction  b);

int main(){
    fraction a,b,c;
    a = inputFraction();
    b = inputFraction();
    c = devideFrac(a,b);
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
    simplify(c);
    return c;
}

fraction multipFrac(fraction a, fraction b){
    fraction c;
    c.numerator = a.numerator * b.numerator;
    c.denominator = a.denominator * b.denominator;
    simplify(c);
    return(c);
}

void inverseFrac(fraction& a){
    int t = a.denominator;
    a.denominator = a.numerator;
    a.numerator = t;
}

fraction devideFrac(fraction a, fraction b){
    fraction c;
    inverseFrac(b);
    c = multipFrac(a,b);
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


