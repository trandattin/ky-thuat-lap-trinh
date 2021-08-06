#include "stdio.h"
struct ntn {
    int ngay;
    int thang;
    int nam;
};

void xuatNgay(ntn a);
ntn nhapNgay();

int main(){
    ntn f = nhapNgay();
    xuatNgay(f);
}

void xuatNgay(ntn a){
    printf("%d/%d/%d", a.ngay, a.thang, a.nam);
    printf("\n");
}

ntn nhapNgay(){
    ntn a;
    printf("Nhap vao ngay, thang va nam: ");
    scanf("%d/%d/%d", &a.ngay, &a.thang, &a.nam);
    return a;
}

