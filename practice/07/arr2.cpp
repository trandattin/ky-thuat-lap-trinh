#include "stdio.h"
typedef int array[100];

void inputArr(array a, int& n){
    printf("Input n element in array: ");
    scanf("%d",&n);
    printf("Input array value: \n");
    for (int i =0; i<n; i++){
        scanf("%d",&a[i]);
    }
}

void findValue(array a, int n, int x){
    int count = 0;
    array index;
    for (int i =0; i<n; i++){
        if (a[i]==x){
            index[count] = i;
            count++;
        }
    }
    printf("There are %d number of x in array in: ", count);
    for (int i = 0; i<count; i++){
        printf("%d\t",index[i]+1);
    }

}

int main(){
    array a;
    int n;
    inputArr(a,n);
    findValue(a,n,5);
}