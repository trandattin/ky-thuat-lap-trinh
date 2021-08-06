#include "stdio.h"
#include "math.h"

struct polynomial{
    float coefficient[100];
    int degree;
};

void inputPoly(polynomial& p);
void outputPoly(polynomial p);
polynomial mulPoly(polynomial& p1, polynomial& p2);

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

polynomial mulPoly(polynomial& p1, polynomial& p2){
    polynomial r;
    r.degree = p1.degree + p2.degree;
    for (int i = 0; i <= p1.degree; i++){
        for (int j = 0; j <= p2.degree; j++){
           r.coefficient[i+j] += p1.coefficient[i] * p2.coefficient[j];
        }
    }
    return r;
}

int main(){
    polynomial p1,p2;
    inputPoly(p1);
    inputPoly(p2);
    printf("Multiplication of polynomial p1 and polynomial p2 is: \n");
    polynomial r = mulPoly(p1,p2);
    outputPoly(r);
}
