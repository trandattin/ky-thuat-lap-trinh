//Bài 3: Viết thuật tóan xuất tất cả các phương án đổi tờ tiền 100000 thành các tờ tiền 20000, 10000, 5000. Ví dụ: 5 tờ 20000, 0 tờ 10000 và 0 tờ 5000 là một phưong án. (Dùng 3 vòng lặp FOR lồng nhau).

#include "stdio.h"

void calMoney(int money);

int main() {
    int money;
    printf("Input money: ");
    scanf("%d", &money);
    calMoney(money/1000);
}

void calMoney(int money) {
    for (int num5=0; num5<=money; num5++){
        for (int num20=0; num20<=money; num20++) {
            for (int num10=0; num10<=money; num10++) {
                if (num5*5 + num10*10 + num20*20 == money) {
                    printf("%d to 20000 \n%d to 10000 \n%d to 5000 \n\n", num20,num10,num5);
                }
            }
        }

    }
}