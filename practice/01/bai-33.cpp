// Tinh chu vi hinh vuong, dien tich hinh thoi, hinh tron
#include "stdio.h"
int main()
{
    int k,p;
    //hinh vuong 
    printf("Nhap vao canh cua hinh vuong: ");
    scanf("%d", &k);


    int a,b,s1;
    //hinh thoi
    printf("Nhap vao hai canh cua duong cheo hinh thoi: ");
    scanf("%d%d", &a, &b);


    int r,s2;
    //hinh tron
    printf("Nhap vao ban kinh hinh tron: ");
    scanf("%d", &r);
    
    //Chu vi hinh vuong
    p = 4*k;
    printf("Chu vi cua hinh vuong la: %d",p);
    
    
    //Tinh dien tich hinh thoi
    s1 = (a*b)/2;
    printf("\nDien tich cua hinh thoi la: %d",s1);


    //Tinh dien tich hinh tron
    s2 = 2*r*3.14;
    printf("\nDien tich cua hinh tron la: %d", s2);

}