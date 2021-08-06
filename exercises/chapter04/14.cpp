#include "stdio.h"

const int MAX = 100;

void inputArray(int arr[], int n){
    for (int i = 0; i < n; ++i) {
        printf("Input element number %d: ",i);
        scanf("%d",&arr[i]);
    }
}

void outputArray(int arr[], int n){
    for (int i = 0; i < n; ++i){
        printf("\nElement number %d: %d",i, arr[i]);
    }
    printf("\n\n");
}

// Find the maximum value of a one-dimensional array
int maxElement(int arr[], int n){
    int max = 0;
    for (int i = 0; i < n; i++){
        max = (arr[i] > max) ? arr[i] : max; 
    }
    return max+1;
}

//Find min value of a and b
int getMin(int n1, int n2){
    int min = n1 > n2 ? n2 : n1;
    return min;
}

//Find max value of a and b
int getMax(int n1, int n2){
    int max = n1 > n2 ? n1 : n2;
    return max;
}

void unionSets(char arr1[], char arr2[], int maxarr1, int maxarr2){
    int max = getMax(maxarr1,maxarr2);
    printf("Union of A and B is: ");
    for (int i = 0; i < max; ++i){
        if (arr1[i] == 1 || arr2[i] == 1){
            printf("%d ",i);
        }
    } 
}


void intersecSets(char arr1[], char arr2[], int maxarr1, int maxarr2){
    int min = getMin(maxarr1,maxarr2);
    printf("Intersection of A and B is: ");
    for (int i = 0; i < min; ++i){
        if (arr1[i] == 1 && arr2[i] == 1){
            printf("%d ",i);
        }
    } 
}

void differenceSets(char arr1[], char arr2[], int maxarr1, int maxarr2){
    int max = getMax(maxarr1,maxarr2);
    printf("Difference of A and B is: ");
    for (int i = 0; i < max; ++i){
        if (arr1[i] == 1 && arr2[i] == 0){
            printf("%d ",i);
        }
    }
}


int main (){
    int arr1[MAX], arr2[MAX];
    //n1 is size arr1, n2 is size arr2
    int n1,n2;
    
    printf("a. Nhap du lieu cho A va B\n");
    //SET A
    printf("Enter the amount of element of set A: ");
        
    //Reapat if n is an unsuitable number
    do{
        scanf("%d", &n1);
        if(n1 <= 0 || n1 > MAX){
            printf("\nEnter the amount of element of set A: ");
        }
    }while(n1 <= 0 || n1 > MAX);
        
    //print input and output of two arrays A,B
    printf("\n======INPUT ARRAY A=====\n");
    inputArray(arr1, n1);
            
    //size of bit2 = maximum element of arr2
    int sizebit1 = maxElement(arr1, n1); 
    char bit1[sizebit1];
    
    //run through the amount of arrayA
    for (int j = 0; j < sizebit1; j++) {
        for (int k = 0; k < n1; k++){
            if (arr1[k] == j) {
                bit1[j] = 1;
                break;
            } else {
                bit1[j] = 0;
            }
        }
    }

    //SET B
    printf("\nEnter the amount of element of set B: ");
        
    //Reapat if n is an unsuitable number
    do{
        scanf("%d", &n2);
        if(n2 <= 0 || n2 > MAX){
            printf("\nEnter the amount of element of set B: \n");
        }
    }while(n2 <= 0 || n2 > MAX);

    printf("\n======INPUT ARRAY B=====\n");
    inputArray(arr2, n2);

    //size of bit2 = maximum element of arr2
    int sizebit2 = maxElement(arr2, n2); 
    char bit2[sizebit2];
            
    //run through the amount of array bit2
    for (int j = 0; j < sizebit2; ++j) {
        for (int k = 0; k < n2; ++k){
            if (arr2[k] == j) {
                bit2[j] = 1;
                break;
            } else {
                bit2[j] = 0;
            }
        }
    }
    
    printf("\nb. Xuat du lieu cho A va B: \n");
    printf("\n======OUTPUT ARRAY BIT A=====\n");
    outputArray(arr1, n1);
    printf("\n======OUTPUT ARRAY BIT B=====\n");
    outputArray(arr2, n2);
    
    printf("c. Thuc hien phep toan: \n");
    intersecSets(bit1,bit2,sizebit1,sizebit2);
    printf("\n\n");
    unionSets(bit1,bit2,sizebit1,sizebit2);
    printf("\n\n");
    differenceSets(bit1,bit2,sizebit1,sizebit2);
} 