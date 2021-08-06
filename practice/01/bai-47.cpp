/*Nhap vao 1 so nguyen duong. Hay cho biet:
    a) Chu so don vi cua no
    b) Chu so hang tram va hang chuc cua no
    c) Tong cac chu so cua no voi gia su so nhap vao 
    nho hon 1000 va lon hon hoac bang 100 */

#include "stdio.h"

int main ()
{
    int num,a,b,c;
    printf("Nhap vao mot so nguyen duong nho hon 1000 va lon hon hoac bang 100: ");
    scanf("%d",&num);

    if (num < 999 && num > 100) {
        a = num/100;
        b = (num/10) - (a*10);
        c = num - (a*100) - (b*10);
        printf("Chu so hang tram la: %d", a);
        printf("\nChu so hang chuc la: %d", b);
        printf("\nChu so hang don vi la: %d", c);
        printf("\nTong cac chu so la: %d",a+b+c);
    } else
        printf("Nhap so khong hop le");
}