//Ve tam giac can, trai, phai theo chieu cao (high) cho truoc
#include "stdio.h"

void veTamGiacDuoi(int high);
void veTamGiacCan(int high);
void veTamGiacTren(int high);


int main () {
    int high;
    printf("Nhap vao chieu cao cua tam giac: ");
    scanf("%d", &high);
    veTamGiacDuoi(high);
    veTamGiacCan(high);
    veTamGiacTren(high);
}

void veTamGiacDuoi(int high) {
    for (int i = 1 ; i <= high; i++) {
        for (int j = 1; j <= (high-i+1); j++) {
            printf("A");
        }
        printf("\n");
    }
    printf("\n");
}


void veTamGiacCan(int high) {
    for (int i = 1; i <= high; i++) {
        for (int j = 1; j <= high-i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2*i-1; k++) {
            printf("A");
        }
        printf("\n");
    }
    printf("\n");
}


void veTamGiacTren(int high) {
    for (int i = 1; i <= high; i++) {
        for (int j = 1; j <= i; j++) {
            printf("A");
        }
        printf("\n");
    }
}

