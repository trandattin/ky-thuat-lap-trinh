#include "stdio.h"
#include "math.h"

struct polynomial{
    float coefficient[100];
    int degree;
};

void inputPoly(polynomial& p);
void outputPoly(polynomial p);
polynomial plusPoly(polynomial& p1, polynomial& p2);

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

polynomial plusPoly(polynomial& p1, polynomial& p2){
    polynomial r;
    int r1 = 0;
    float* U;
    
    if (p1.degree < p2.degree){
        r.degree = p2.degree;
        r1 = p1.degree;
        U = p2.coefficient;
    } else {
        r.degree = p1.degree;
        r1 = p2.degree;
        U = p1.coefficient;
    }

    for(int i = 0; i <= r1; i++){
        r.coefficient[i] = p1.coefficient[i] + p2.coefficient[i];
    }
    for (int i = r1 + 1 ; i <= r.degree; i++){
        r.coefficient[i] = U[i];
    }
    return r;
}

int main(){
    polynomial p1,p2;
    inputPoly(p1);
    inputPoly(p2);
    printf("Sum of polynomial p1 and polynomial p2 is: \n");
    polynomial r = plusPoly(p1,p2);
    outputPoly(r);
}
