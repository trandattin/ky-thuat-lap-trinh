#include "stdio.h"
#include "math.h"

struct polynomial{
    float coefficient[100];
    int degree;
};

void inputPoly(polynomial& p);
void outputPoly(polynomial p);
polynomial derivative(polynomial& p, int k);

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

polynomial derivative(polynomial& p, int k){
    while (k > 0){
        for (int i = 0; i < p.degree; i++){

        p.coefficient[i] = p.coefficient[i+1]*(i+1);
        }
        p.degree -= 1;
        k--;
    }
    return p;
}

int main(){
    polynomial p;
    inputPoly(p);
    outputPoly(p);

    int k = 2;
    derivative(p,k);
    printf("Derivative %d degree of polynomial is: \n",k);
    outputPoly(p);
}
