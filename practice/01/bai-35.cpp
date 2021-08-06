/*Tinh luong nhan vien dua theo chuc vu
    + Chuc vu = 1 -> Luong = 300
    + Chuc vu = 2 -> Luong = 200
    + Chuc vu = 3 -> Luong = 100 */

#include "stdio.h"
int main()
{
    int a;
    printf("***TINH LUONG NHAN VIEN THEO CHUC VU");
    printf("\nNhap vao chuc vu cua nhan vien 1, 2 hoac 3: ");
    scanf("%d", &a);

    if (a == 1) 
        printf("\nLuong cua nhan vien la: %d", 300);
    if (a == 2)
        printf("\nLuong cua nhan vien la: %d", 200);
    if (a == 3)
        printf("\nLuong cua nhan vien la :%d", 100);
    else
        printf("Nhap sai chuc vu");
}