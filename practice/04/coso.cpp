//Bài 2: Viết thuật tóan nhập một số thực X (0 < X < 1) và xuất số X ở cơ số 2. Quá trình dừng khi lặp quá 20 lần nếu có thể bị lặp vô tận. (Dùng vòng lặp WHILE và IF).

#include "stdio.h"
#include "math.h"

int main () {
    double x;
    printf("Enter a float number: ");
    scanf("%lf",&x);

    char r[30]="";

	int i = 0;
	while (x > 0 && i < 20) {
		x = x*2;
		if (x >= 1.0) {
			r[i] = '1';
			x = x-1;
		} else {
			r[i] = '0';
		}
		i++;
	}
    printf("result = 0.%s\n", r);
}