#include "stdio.h"
#include "math.h"

struct polynomial{
	float coefficient[100];
	int degree;
};

void inputPoly(polynomial& p){
	printf("degree = ");
	scanf("%d",&p.degree);
    printf("Input coefficient from x^0 to x^%d: \n",p.degree);
	for (int i = 0; i<=p.degree; i++){
		printf("Ax^%d , A = ",i);
		scanf("%f",&p.coefficient[i]);

	}
}

void outputPoly(polynomial p){
    for (int i = p.degree; i > -1; i--){
        printf("%.2fx^%d ",p.coefficient[i],i);
        if (i > 0){
            printf("+ ");
        } else {
            printf("\n");
        }
    }
}

polynomial derivative(polynomial p, int k){
	int s = k;
	while (k>0){
		for (int i = 0; i <= p.degree; i++){
			p.coefficient[i] = p.coefficient[i+1]*(i+1);
		}
		k--;
	}
	p.degree -= s;
	return p;
}

polynomial computeSum(polynomial& p1, polynomial& p2){
	polynomial res;
	int r1 = 0;
	float* U = 0;

	if(p1.degree < p2.degree){
		res.degree = p2.degree;
		r1 = p1.degree;
		U = p2.coefficient; 
	} else {
		res.degree = p1.degree;
		r1 = p2.degree;
		U = p1.coefficient;
	}

	for (int i = 0; i <= r1; i++){
		res.coefficient[i] = p1.coefficient[i] + p2.coefficient[i];
	}
	for (int i = r1 + 1; i <= res.degree; i++){
		res.coefficient[i] = U[i];
	}
	return res;
}

int main(){
	polynomial p1,p2;
	inputPoly(p1);
	outputPoly(p1);
	inputPoly(p2);
	outputPoly(p2);
	int k = 2;
	printf("Derivative of polynomial p1 %d degree is: ",k);
	derivative(p1,k);
	outputPoly(p1);
}
