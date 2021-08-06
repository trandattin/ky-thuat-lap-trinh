#include "stdio.h" // standard input output
int main() 
{
/*
	printf("Nh?p 2 so a va b: ");
	int a, b;
	scanf("%d%d", &a, &b);
	
	// Khai bao them bien c la so nguyen
	int c; // Khai bao kieu truoc khi su dung
	// Tinh tong cua a va b va dung cau lenh gan luu vao c
	c = a + b;
	// Sau do, in ra gia tri cua c
	printf("\nTong hai so la: %20d", c);
	
	float kq;
	if (b != 0) {
		// Tinh va in ra thuong...
		int thuong = a / b, du = a % b;
		// neu 1 trong tu hoac mau la so thuc -> thuc
		// nguoc lai: ca 2 deu la so nguyen thi phep chia nguyen
		// 2/5 -> 0, du 2
		printf("\nThuong va du la: %d va %d", thuong, du);
		
		kq = a / (b * 1.0); // (1.0 * a) / b; float(a)/b...
	    printf("\nThuong thuc la: %20.4f", kq);
	}	
	else 
	    printf("Khong chia cho 0 duoc.");
*/
	    
	// Nhap vao 4 so thuc, xac dinh va in ra so lon nhat...
	float x, y, z, t, max;
	printf("Nhap vao 3 so thuc: \n");
	scanf("%f%f%f", &x, &y, &z);
	//if (x < y) max = y;
	//else max = x;
	max = ((x < y) ? y : x);
	if(max < z) max = z;
	if(max < t) max = t;
	printf ("Max cua 3 so %f, %f va %f la %f.", x, y, z, max);
}
