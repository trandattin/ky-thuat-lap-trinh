//Bai 1: Biet so tien gui ngan hang cua mot nguoi laf 60000USD, lai suat mot nam la 1.2%. Hay tinh so tien nguoi do se co sau Y nam. (Dung vong lap For)
#include "stdio.h"

double laiSuat(double money, double year);

int main () {
    int year, money;
    printf("Enter money input: ");
    scanf("%d", &money);
    printf("Year input: ");
    scanf("%d", &year);
    printf("The amount after %d years is: %.4f", year,laiSuat(money,year));
}

double laiSuat(double money, double year) {
    for (int i=1; i<=year; i++){
        money += money * 0.012;
        }
    return money;
}