#include "stdio.h"
#include "math.h"
typedef int array[100];

void inputArr(array arr1, int& n1){
    printf("Input n element in array a: ");
    scanf("%d",&n1);
    printf("Input array value: \n");
    for (int i=0; i<n1;i++){
        scanf("%d",&arr1[i]);
    }
}

void outputArr(array arr1, int n1){
    printf("Output array a: ");
    for (int i = 0; i < n1; i++){
        printf("%d. %d\t",i+1,arr1[i]);
    }
}

int productArr(array arr1, int n1){
    int product = 1;
    for (int i=0; i<n1; i++){
        product *= arr1[i];  
    }
    return product;
}

int averageArr(array arr1, int n1){
    int average = 0;
    for (int i=0; i<n1; i++){
        average += arr1[i];
    }
    return average/(n1);
}

void oddArr(array arr1, int n1, array arr_result){
    for (int i=0; i<n1; i++){
        if (arr1[i] % 2 == 1){
            arr_result[i] = arr1[i];
        } 
    }
}

bool isPrime(int num){
    int i = 2;
    if (num <= 1){
        return false;
    } while(num%i!=0  & i<=sqrt(num)){
        i++;
    }
    return (i==num);
} 

void primeArr(array arr1, int n1, array arr_result){
    for (int i = 0; i < n1; i++){
        if (isPrime(arr1[i]))
            arr_result[i] = arr1[i];
    }
}

int indexMin(array arr1, int begin, int n1){
    int index_min = begin;
    for (int i = begin+1; i<n1; i++){
        if (arr1[i] > arr1[index_min]) index_min = i;
    }
    return index_min;
}

int indexMax(array arr1, int begin, int n1){
    int index_max = begin;
    for (int i = begin+1; i<n1; i++){
        if (arr1[i] > arr1[index_max]) index_max = i;
    }
    return index_max;
}

void swap(int& a, int& b){
    int t = a; a = b; b = t; 
}

void selectSort(array arr1, int n1){
    for (int k = 0; k <= n1-1; k++){
        int index_max = indexMax(arr1, k, n1);
        swap(arr1[k],arr1[index_max]);
    }
}

int main(){
    array arr1;
    int n1;
    inputArr(arr1, n1);
    outputArr(arr1, n1);
}