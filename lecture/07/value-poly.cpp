#include "stdio.h"
#include "math.h"

struct polynomial{
    float coefficient[100];
    int degree;
};

void inputPoly(polynomial& p);
void outputPoly(polynomial p);
float valuePoly(polynomial p, float x);

void inputPoly(polynomial& p){
    printf("Input degree: ");
    scanf("%d",&p.degree);
    printf("Input coefficient from x^0 to x^%d: \n",p.degree);
    for (int i = 0; i <= p.degree; i++){
        printf("x^%d = ",i);
        scanf("%f",&p.coefficient[i]);

    }
}

void outputPoly(polynomial p){
    for (int i = 0; i <= p.degree; i++){
        printf("%.2fx^%d ",p.coefficient[i],i);
        if (i < p.degree){
            printf("+ ");
        } else {
            printf("\n");
        }
    }
}

float valuePoly(polynomial p, float x){
    float result = 0.0;
    for (int i = 0; i <= p.degree; i++){
        result += pow(x,i)*p.coefficient[i];
    }
    return result;
}

int main(){
    polynomial p;
    inputPoly(p);
    outputPoly(p);
    float x = 2.0;
    float result = valuePoly(p,x);
    printf("Result of Polynomial at x = %.2f is: %.2f\n",x,result);
}
