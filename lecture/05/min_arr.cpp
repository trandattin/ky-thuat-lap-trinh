#include "stdio.h"
typedef int arr[100];

int tim_vt_min(int a[] , int begin, int n);
void swap(int& a, int& b);
void select_sort(int a[], int n);
void xuat(arr, int);
int main(){
    int a[]={1,2,3,43,3,5,4,4};
    int n = 8;
    int vtm = tim_vt_min(a, 0 ,n);
    printf("Vi tri cua min: %d", vtm);
    select_sort(a,n);
    printf("\nMang theo gia tri tang dan: ");
    xuat(a,n);
}

void xuat(arr a, int n){
    printf("(");
    for (int i=0; i<n; i++){
        printf("%d", a[i]);
        if(i < n-1) printf(",");
    }
    printf(")\n");
}

void swap(int& a, int& b){
    int t = a; a = b; b = t;
}

int tim_vt_min(int a[], int begin, int n){
    int index_min = begin;
    for (int i = begin+1; i<n; i++){
        if (a[i] < a[index_min]) index_min = i;
    }    
    return index_min;
}

void select_sort(int a[], int n){
    for (int k = 0; k <= n-2; k++){
        int index_min = tim_vt_min(a, k, n);
        if (index_min>k)
            swap(a[k],a[index_min]);
    }
}

