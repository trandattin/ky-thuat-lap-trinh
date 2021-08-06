//Giai he phuong trinh hai an
#include "stdio.h"

int main()
{
    int a1,a2,b1,b2,c1,c2;
    float D,Dx,Dy,x,y;
    printf("****GIAI HE PHUONG TRINH TUYEN TINH HAI BIEN****\n");
    printf("\na1x + b1y = c1");
    printf("\na2x + b1y = c2\n");
    
    printf("\nNhap vao lan luot cac gia tri: \n");
    printf("a1 = "); scanf("%d",&a1);
    printf("b1 = "); scanf("%d",&a1);
    printf("c1 = "); scanf("%d",&c1);
    printf("a2 = "); scanf("%d",&a2);
    printf("b2 = "); scanf("%d",&b2);
    printf("c2 = "); scanf("%d",&c2);

    D = a1 * b2 - a2 * b1;
    Dx = c1 * b2 - c2 * b1;
    Dy = a1 * c2 - a2 * c1;

    if (D==0) {
        if (Dx + Dy == 0)
            printf("He phuong trinh co vo so nghiem nghiem");
        else 
            printf("He phuong trinh vo nghiem");
    }
    else {
        x = Dx / D;
        y = Dy / D;
        printf("He phuong trinh co nghiem (x,y) = (%.2f, %.2f)", x,y);
    }
    return 0;
}