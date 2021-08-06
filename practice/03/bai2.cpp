//Bài 2: Nhập số N nguyên dương từ bàn phím. Xuất tất cả các cặp số nguyên dương x, y sao cho x + 2y = N. (Dùng 2 vòng lặp FOR lồng nhau).

#include "stdio.h"

void calN(int N);

int main() {
    int N;
    printf("Nhap so N nguyen duong: ");
    scanf("%d", &N);
    calN(N);
}

void calN(int N) {
    for (int i=1; i <= N; i++) {
        for (int j=1; j <= N; j++){
            if (i + 2*j == N)
                printf("x va y la: %d %d\n",i,j);
        }
    }
}