#include "stdio.h"
typedef int array[100];

void inputValue(array a, int& n){
    printf("Input n element in array: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
}

void compareValue(array a, int n, int x){
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    for (int i =0; i < n; i++){
        if(a[i]==x){
            count1++;
        }
        if(a[i]>x){
            count2++;
        }
        if(a[i]<x){
            count3++;
        }
    }
    printf("=x:%d \t >x:%d \t <x:%d",count1,count2,count3);
}

int main(){
    array a;
    int n;
    inputValue(a,n);
    compareValue(a,n,5);
}