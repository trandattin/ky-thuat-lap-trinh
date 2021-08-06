/* Bai 36. Viet chuong trinh mo phong may tinh bo tui mo rong 
           tren cac so nguyen:
           '+','-','*': cac phep toan cong, tru, nhan
           'D': phep chia lay phan nguyen 
           'M': phep mod.
           'L': phep lay so lon.
           'N': phep lay so nho. */

#include "stdio.h"
#include "math.h"
int main()
{
    char cal;
    int a,b,r,max,min;
    printf("****DAY LA CHUONG TRINH MAY TINH BO TUI****");
    printf("\nNhap vao hai so: \n");
    scanf("%d%d", &a, &b);
    
    printf("\nNhap vao phep tinh ban muon thuc hien: ");
    printf("\n'+','-','*': Cac phep toan cong, tru, nhan");
    printf("\n'D': Phep chia lay phan nguyen");
    printf("\n'M': Phep mod");
    printf("\n'L': Phep lay so lon");
    printf("\n'N': Phep lay so nho\n");
    fflush(stdin);
    scanf("%c", &cal);


    if (cal == '+')
        r = a + b;
    else if (cal == '-')
        r = a - b;
    else if (cal == '*') 
        r = a * b;
    else if (cal == 'D') 
        r = a / b;
    else if (cal == 'M')
        r = a % b;
    else if (cal == 'L') {
        max = a;
        if (b>max)
            r = b;
        else 
            r = max;
    } else if (cal == 'N') {
        min = a;
        if (b<min)
            r = b;
        else 
            r = min;
    }
    printf("Ket qua cho phep tinh %d %c %d la: %d", a,cal,b,r);


}