//Bai 41 Tinh chinh hop
#include "stdio.h"

int giaiThua(int n);
int chinhHop(int n, int k);

int main () {
    int n, k;
    printf("Nhap vao n va k: ");
    scanf("%d", &n);
    scanf("%d", &k);
    if (n < k) 
        printf("k phai be hon hoac bang n");
    else 
        printf("%d",chinhHop(n,k));
    
}

int giaiThua(int n) {
    int result = 1;
    for (int i = 1; i <= n ;i++) {
        result *= i;
    }
    return result;
}

int chinhHop(int n, int k) {
    int result = giaiThua(n)/(giaiThua(n-k));
    return result;
}

