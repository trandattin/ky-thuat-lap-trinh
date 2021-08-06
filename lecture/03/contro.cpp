#include "stdio.h"

void swap(int &a, int &b){
    int t = a;
    a = b;
    b = t;
}

void swap_C(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}

int main(){
    int x = 5, y = 8;
    swap(x,y);
    printf("x = %d\ny = %d\n",x,y);
    swap_C(&x,&y);
    printf("x = %d\ny = %d",x,y);
}