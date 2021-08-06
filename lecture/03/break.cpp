#include "stdio.h"

int main(){
    int n,m = 450, sum = 0, i = 0;
    while (true){
        printf("Enter a number: ");
        scanf("%d",&n);
        i++;
        if (n < 100){
            continue;
        }
        sum += n;
        if (sum >= m ) {
            break;
        }
    }
    printf("You enter %d number",i);
}