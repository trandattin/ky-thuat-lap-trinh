#include "stdio.h"
// khai bao prototype: tra ve, ten, kieu cac doi so
void inSoNgayCacThang(int); // void: khong co tra ve
int soNgay(int, int); // input: thang va nam, output: so ngay
bool nam_nhuan(int nam);
void inThoiGianTrongNam(int n);
void inThoiGianTrongThang(int thang, int nam, int songay);
void inCan(int nam);
void inChi(int chi);
int main() {
	// Khai báo va input n?m
	int nam1, nam2;
//	printf("Nhap vao nam thu nhat: "); scanf("%d", &nam1);
//	inSoNgayCacThang(nam1); // nam1: gia tri THUC
	printf("Nhap vao nam thu hai: "); scanf("%d", &nam2);
	inThoiGianTrongNam(nam2); // nam1: gia tri THUC
	inCan(nam2);
	inChi(nam2);
	return 0;
}
void inCan(int nam) {
	switch(nam % 10) {
		case 0: printf("Canh"); break;
		case 1: printf(""); break;
		case 2: printf(""); break;
		case 3: printf(""); break;
		case 4: printf(""); break;
		case 5: printf(""); break;
		case 6: printf(""); break;
		case 7: printf(""); break;
		case 8: printf(""); break;
		default: printf(""); break;
	}
}
void inChi(int chi) {
	
}
// noi dung cua ham: n tham so HINH THUC
void inThoiGianTrongNam(int n) {
	for(int t=1; t<=12; t++) {
		// tinh so ngay cua thang t nam n
		int sn = soNgay(t, n);
		inThoiGianTrongThang(t, n, sn);
	}
} 
void delay(int u) {
	for(int k=1;k<=u; k++) 
		for(int m=1;m<=u; m++)
			for(int n=1;n<=u; n++)
				;
}
void tinhThu(int ngay, int thang, int nam) {
	int du = (ngay + 2*thang + 3*(thang+1) / 5 + 
			   nam + nam / 4 + 1) % 7;
	switch(du) {
		case 0: printf("thu bay"); break;
		case 1: printf("chu nhat"); break;
		case 2: printf("thu hai"); break;
		case 3: printf("thu ba"); break;
		case 4: printf("thu tu"); break;
		case 5: printf("thu nam"); break;
		default: printf("thu sau"); break;
	}
}
void inThoiGianTrongThang(int thang, int nam, int songay) {
	for(int ngay=1; ngay<=songay; ngay++) {
		printf(" [%d/%d/%d]-", ngay, thang, nam);
		tinhThu(ngay, thang, nam);
		for(int gio=0; gio<=23; gio++)
			for(int phut=0; phut<=59; phut++)
				for(int giay=0; giay<=59; giay++) {
					printf("%d:%d:%d ", gio, phut, giay);
					printf(" %cm", gio >= 12 ? 'p' : 'a');
					delay(10);
				}			
	}
}
// noi dung cua ham: n tham so HINH THUC
void inSoNgayCacThang(int n) {
	for(int t=1; t<=12; t++) {
		// tinh so ngay cua thang t nam n
		int sn = soNgay(t, n);
		printf("\n Thang %d co %d ngay.", t, sn);
	}
} 
// input: thang va nam, output: so ngay
int soNgay(int thang, int nam) {
	int so_ngay;
	switch(thang) {
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			so_ngay = 31;
			break;
		case 4: case 6: case 9: case 11:
			so_ngay = 30;
			break;
		case 2:
			if (nam_nhuan(nam)) so_ngay = 29;
			else so_ngay = 28;
			break;
	}
	return so_ngay;
}
bool nam_nhuan(int nam) {
	if ( ((nam % 4 == 0) && (nam % 100 != 0)) 
		|| nam % 400 == 0)
		return true;
	return false;
}

