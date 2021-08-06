#include "stdio.h"

struct fraction {
    int numerator;
    int denominator;
};

void outputFraction(fraction a);
fraction inputFraction();
fraction plusFraction(fraction a, fraction b);
int GCD(int a, int b);
void simplify(fraction &a);
fraction against(fraction a);
fraction minusFraction(fraction a, fraction b);

int main(){
    fraction a = inputFraction(), b = inputFraction();
    
    fraction c = plusFraction(a,b);
    simplify(c);
    outputFraction(c);

    fraction d = minusFraction(a,b);
    simplify(d);
    outputFraction(d);
}

fraction inputFraction(){
    fraction a;
    printf("Input a fraction x/y: ");
    scanf("%d/%d", &a.numerator, &a.denominator);
    return a;
}

void outputFraction(fraction a){
    printf("%d/%d",a.numerator, a.denominator);
    printf("\n");
}

fraction plusFraction(fraction a, fraction b){
    fraction c;
    c.denominator = a.denominator*b.denominator;
    c.numerator = (b.denominator*a.numerator) + (a.denominator*b.numerator);
    return c;
}

int GCD(int a, int b){
    while (b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

void simplify(fraction &a){
    int divisor = GCD(a.denominator,a.numerator);
    a.denominator /= divisor;
    a.numerator /= divisor; 
    if (a.denominator < 0){
        a.denominator -= a.denominator;
        a.numerator -= a.numerator;
    }
}

fraction against(fraction a){
    fraction y{-a.numerator, a.denominator};
    return y; 
}

fraction minusFraction(fraction a, fraction b){
    return plusFraction(a,against(b));
}