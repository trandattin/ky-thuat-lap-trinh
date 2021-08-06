#include "stdio.h"

bool isDes(int a[], int n){
    for (int i =1; i<n ; i++){
        if (a[i-1]<a[i]) return false;
    }
    return true;
}

int main(){
    int a[] = {1,2,3,4,5,6};
    int b[] = {6,5,4,3,2,1};
    int n = 6;
    if (isDes(b,n))
        printf("Yes");
    else
        printf("No");
}

