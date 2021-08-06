#include "stdio.h"
#include "math.h"

int main(){
    int a1[]={1,2,3,4,5,6,7};
    int a2[]={7,6,5,4,3,2,1};
    int n1 = 7;
    int n2 = 7;
}

int sumVector(int a[], int n){
    int sum = 0;
    for (int i = 0; i< n; i++){
        sum += a[i];
    }
    return sum;
}

int dotProduct(int a[], int b[], int n){
    int sum = 0;
    for (int i = 0; i< n; i++){
        sum += a[i]*b[i];
    }
    return sum;
}

int length(int a[], int n){
    int length = 0;
    for (int i = 0; i < n; i++){
        length += a[i]*a[i];
    }
    return sqrt(length);
}

int distant(int a[], int b[], int n){
    int distant = 0;
    for (int i = 0; i< n; i++){
        distant += a[i]*b[i];
    }
    return sqrt(distant);
}

