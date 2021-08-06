//Tim boi chung nho nhat cua hai so nguyen a va b

#include "stdio.h"

int getMax(int a, int b){
      int max = a > b ? a : b;
      return max;
}

int lcm(int a, int b){
      int lcm;
      for (int i = getMax(a,b); i <= a*b; i+=getMax(a,b)){
            if (i % a == 0 && i % b == 0){
                  lcm = i;
                  break;
            }
      }
      return lcm;
}

int main(){
      int a,b;
      printf("Enter integer A: ");
      scanf("%d",&a);
      printf("Enter integer B: ");
      scanf("%d",&b);
      printf("LCM of A and B is %d",lcm(a,b));
}