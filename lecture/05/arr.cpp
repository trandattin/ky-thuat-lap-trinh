#include "stdio.h"
#include "math.h"
typedef int arr[100];
void nhap(arr, int&);
void xuat(arr, int);
void congVector(arr, arr, int, arr);
int tichvh(arr, arr, int);
float khoangcach(arr, arr, int);

int main(){
    arr v,u,w; int nv,nu;
    nhap(v, nv);
    xuat(v, nv);
    nhap(u, nu);
    xuat(u, nu);
    congVector(v,u,nu,w);
    printf("Mang w la: ");
    xuat(w, nu);
    printf("tich vo huong cua hai vector la: %d ",tichvh(v, u, nv));
}

void nhap(arr a, int& n){
    printf("Nhap so phan tu: ");
    scanf("%d",&n);
    for (int i=0; i<n; i++){
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
}

void xuat(arr a, int n){
    printf("(");
    for (int i=0; i<n; i++){
        printf("%d", a[i]);
        if(i < n-1) printf(",");
    }
    printf(")\n");
}

void congVector(arr a, arr b, int n, arr c){
    for (int i=0; i < n; i++){
        c[i]=a[i]+b[i];
    }
}

int tichvh(arr a, arr b, int n){
    int sum = 0;
    for (int i=0; i<n; i++){
        sum = a[i] + b[i];
    }
    return sum;
}

float khoangcach(arr x, arr y, int n){
    int length;
    for (int i=0; i<n; i++){
        length = sqrt(x[i]+y[i]);
    }
    return length;
}
