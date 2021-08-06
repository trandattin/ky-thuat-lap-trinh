#include "stdio.h"
#include "stdlib.h"
#include "time.h"

typedef int array[100];

void swap(int* x1, int* x2){
    int t;
    t= *x1; 
    *x1 = *x2;
    *x2 = t;
}

void noiBot(array b, int n){
    for (int last = n-2; last >= 0; last--){
        for (int i = 0; i <= last ;i++){
            if (b[i] > b[i+1]) 
                swap(&b[i],&b[i+1]);
        }
    }
}

int searchArray(array a, int n, int x){
    for (int i = 0; i < n; i++){
        if (a[i] == x) return i;
    }
    return -1;
}

void remove(array a, int n, int x){
    int pos = searchArray(a, n, x);
    if (pos == -1) return;
    for (int i = pos+1; i <= n-1 ; i++){
        a[i-1] = a[i];
    }
}

int* random(int min_size, int max_size, int min_value, int max_value, int* size){
    *size = min_size + rand()%(max_size-min_size+1);
    int* b = new int[*size];
    for (int i = 0; i < *size; i++){
        *(b+i) = min_value + rand()%(max_size - min_size + 1);
    }
    return b;
}

float average(array a, int n){
    float sum = 0.0;
    for (int i=0; i <= n-1; i++){
        sum += a[i];
    }
    return sum/n;
}

void output(array a, int n){
    for (int i=0; i <= n-1; i++){
        printf("%d. %d \t",i+1,a[i]);
    }
}

void input(array a, int& n){
    printf("Input array a with n element: ");
    scanf("%d",&n);
    for (int i=0; i<= n-1;i++){
        scanf("%d",&a[i]);
    }
}

int main (){
    int n;
    array a;

    /*input(a,n);
    output(a,n);
    printf("\nAverage: %.3f",average(a,n));
    printf("\n");*/
    
    srand((unsigned int) NULL);
    int size ;
    int* b = random(5,10,10,20,&size);
    output(b,size);
        //delete[]b;
    remove(b,size,12);

    printf("\n");
    output(b,size);
}