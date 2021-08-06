//Giai va bien luan phuong trinh bac 2
#include "stdio.h"
#include "math.h"

int main()
{
    int a,b,c;
    float delta,x1,x2;
    printf("***GIAI PHUONG TRINH BAC HAI DANG AX^2 + BX + C");
    printf("Nhap vao lan luot he so A B C: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a == 0) 
        printf("Phuong trinh co nghiem duy nhat la: %d", -b/c);
    else {
        delta = b * b - (4 * a * c);
        if (delta > 0) {
            x1 = (-b + sqrt(delta))/(2*a);
            x2 = (-b - sqrt(delta))/(2*a);
            printf("Phuong trinh da cho co hai nghiem la x1 = %.4f va x2 = %.4f", x1,x2);
        } else if (delta = 0) {
            x1 = (-b/(2*a));
            printf("Phuong trinh da cho co nghiem kep la x = %.4f", x1);
        } else if (delta <0) 
            printf("Phuong trinh da cho khong co nghiem thuc");
    }
}