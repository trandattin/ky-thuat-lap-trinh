//Kiem tra tam giac
//Kiem tra tinh chat can, vuong, vuong can, deu
//Tinh dien tich bang cong thuc bang herong

#include "stdio.h"
#include "math.h"
int main()
{
    int a,b,c,p,s;
    printf("****CHUONG TRINH KIEM TRA VA TINH DIEN TICH TAM GIAC****");
    printf("\nNhap vao 3 canh cua tam giac: ");
    scanf("%d%d%d", &a, &b, &c);

    //Kiem tra tam giac
    if (a+b>c && b+c>a && c+a>b) {
        // Kiem tra tam giac vuong can
        if (((a * a + b * b == c * c) && (a == b)) || ((a * a + c * c == b * b) && (a == c)) || (( c* c + b * b == a * a) && (c == b))) 
            printf("Day la tam giac vuong can");    
        //Kiem tra tam giac can
        else if (a==b || b==c || c==a )
            printf("Day la tam giac can");
        // Kiem tra tam giac deu
        else if (a==b && b==c)
            printf("Day la tam giac deu");
        // Kiem tra tam giac vuong
        else if (a * a == b * b + c * c || b * b == c * c + a * a || c * c == b * b + a * a)
            printf("Day la tam giac vuong");
        else 
        printf("Day la tam giac");
    } else {
        printf("Day khong phai la tam giac");
        return 0;
    }
 
    //Tinh dien tich tam giac
    p = (a+b+c)/2;
    s = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("\nDien tich cua tam giac nay la: %d",s);
}