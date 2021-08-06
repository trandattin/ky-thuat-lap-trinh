//Tinh trung binh cong cua 10 so hang
#include "stdio.h"

int main() {
    float sum = 0;
    for(int i = 0; i<10; i++) {
        float a;
        printf("Nhap vao so n thu %d: ", i+1);
        scanf("%f", &a);
        sum += a;
    }
    printf("Trung binh cong cac so la: %f\n", sum/10);
}