//Tong cua cac so chan trong n so dau tien
#include "stdio.h"

int tongSoChan(int n);

int main () {
    int n;
    printf("Nhap vao n: ");
    scanf("%d", &n);
    
    printf("%d",tongSoChan(n));
}

int tongSoChan (int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i%2==0 ? i : 0; 
    }
    return sum;
}
