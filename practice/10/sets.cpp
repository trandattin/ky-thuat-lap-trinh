#include "stdio.h"

struct set{
    int element[100];
    int amount;
};

void inputSet(set& A){
    for (int i = 0; i <A.amount; i++){
        printf("element number %d = ",i+1);
        scanf("%d",&A.element[i]);
    }
    printf("\n");
}

void outputSet(set A){
    printf("{");
    for (int i = 0; i<A.amount; i++){
        printf("%d", A.element[i]);
        if (A.amount-i == 1){
            printf("}");
        } else {
            printf(", ");
        }
    }
    printf("\n");
}

set intersecSet(set A, set B){
    set C;
    int k=0;
    for(int i = 0; i<A.amount; i++){
        for(int j =0; j < B.amount; j++){
            if(A.element[i] == B.element[j]){
                C.element[k] = A.element[i];
                k++;
                break;
            }
        }
    }
    C.amount = k;
    return C;
}

bool subSet(set A, set B){
    if (A.amount > B.amount){
        return false;
    }
    set C = intersecSet(A, B);
    if (C.amount == A.amount){
        return true;
    } else{
        return false;
    }
}


int main(){
    set X,Y;
    printf("Input number of set X: ");
    scanf("%d",&X.amount);
    inputSet(X);
    printf("Input number of set Y: ");
    scanf("%d",&Y.amount);
    inputSet(Y);
    
    set inter = intersecSet(X,Y);
    printf("Intersection of two sets X and Y is: ");
    outputSet(inter);

    if(subSet(X,Y)==true){
        printf("X is subset of Y");
    }else{
        printf("X is not subset of Y");
    }
}