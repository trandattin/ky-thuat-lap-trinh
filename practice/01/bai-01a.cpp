//Tinh chuoi dan dau
#include "stdio.h"

double calSum (double n) {
    int i = 1;
    double sum = 0;
    while (i <= n) {
        if (i % 2 == 0) {
            sum = sum - (1.0/i);
        } else {
            sum = sum + (1.0/i);
        }
        i = i + 1;
    } 
    return sum;
} 

int main() {
    double r = calSum(5);
    printf("%.4f", r);
}
