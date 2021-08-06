/* 
Nhap vao thang tra so ngay trong thang"
*/
#include <stdio.h>

void inCan(int nam) {
    switch (nam % 10) {
        case 0: printf("Canh"); break;
         
        case 1: printf("Tan"); break; 

        case 2: printf("Nham"); break;

        case 3: printf("Quy"); break;
        
        case 4: printf("Giap"); break;

        case 5: printf("At"); break;

        case 6: printf("Binh"); break;
        
        case 7: printf("Dinh");break;

        case 8: printf("Mau"); break;

        default: printf("Ky"); break;
    }
}

void inChi(int nam) {
    switch (nam % 10) {
        case 0: printf("Than"); break;
         
        case 1: printf("Dau"); break; 

        case 2: printf("Tat"); break;

        case 3: printf("Hoi"); break;
        
        case 4: printf("Ti"); break;

        case 5: printf("Suu"); break;

        case 6: printf("Dan"); break;
        
        case 7: printf("Mao");break;

        case 8: printf("Thin"); break;

        case 9: printf("Ty"); break;
        
        case 10: printf("Ngo"); break;

        default: printf("Mui"); break;
    }  
}

int soNgay(int thang, int nam) {
    switch(thang) {
        case 1: case 3: case 5: case 8: case 10: case 12: 
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        default: //case 2:
            if (nam % 4 == 0 && nam % 4 != 0 || nam % 400 == 0)
                return 29;
            else
                return 28;
    }
}

void tinhThu (int ngay, int thang, int nam) {
    int du = (ngay + 2*thang + 3*(thang+1) / 5 + nam + nam / 4 + 1) % 7;

    switch(du) {
        case 0: printf("Thu bay\n"); break;
        case 1: printf("Chu nhat\n"); break;
        case 2: printf("Thu hai\n"); break;
        case 3: printf("Thu ba\n"); break;
        case 4: printf("thu tu\n"); break;
        case 5: printf("thu nam\n"); break;
        default: printf("thu sau\n"); break;
    }
}

void inCacNgayTrongThang(int so_ngay, int thang, int nam) {
    for (int day = 1; day <= so_ngay; day++) {
        printf("%d/%d/%d",day,thang,nam);
        tinhThu(day,thang,nam);
    }
    printf("\n");
}


void inSoNgayTrongNam(int nam) {
    for (int thang = 1; thang <= 12; thang++) {
        // tinh so ngay cua thang
        int so_ngay = soNgay(thang, nam);
        inCacNgayTrongThang(so_ngay,thang,nam);
    }
}


int main () {
    //khai bao va input nam
    int nam;
    printf("Nhap vao nam ");
    scanf("%d", &nam);
    inSoNgayTrongNam(nam);
    inCan(nam);
    inChi(nam);
    return 0;
}