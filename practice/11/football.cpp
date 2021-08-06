#include "stdio.h"
#include "string.h"

struct team {
    char name[100];
    int win_num;
    int lose_num;
    int draw_num;
    int point;
};

void inputTeam(team& A){
    printf("INPUT FOOTBALL TEAM A\n");
    printf("name = ");
    scanf("%s",A.name);
    printf("victory number = ");
    scanf("%d",A.win_num);
    printf("Lose number = ");
    scanf("%d",A.lose_num);
    printf("Draw number = ");
    scanf("%d", A.draw_num);
    A.point = 0;
}

void outputTeam(team A){
    printf("%10s",A.name);
    printf("%10d",A.win_num);
    printf("%10d",A.lose_num);
    printf("%10d",A.draw_num);
    printf("\n");
}

void outputGroup(team GROUP[], int n){
    for (int i = 0; i < n; i++){
        outputTeam(GROUP[i]);
    }
    printf("\n");
}

void computePoint(team GROUP[], int n){
    printf("POINT OF EVERY TEAM\n");
    for (int i = 0; i< n; i++){
        GROUP[i].point += GROUP[i].win_num*3;
        GROUP[i].point += GROUP[i].draw_num*1;
        printf("%s = %d\n",GROUP[i].name,GROUP[i].point);
    }
    printf("\n");
}

void swap(team* x1, team* x2){
    team t= *x1; 
    *x1 = *x2;
    *x2 = t;
}

void sortScore(team GROUP[], int n){
    for (int last = n-2; last >= 0; last--){
        for (int i = 0; i <= last ;i++){
            if (GROUP[i].point < GROUP[i+1].point) 
                swap(&GROUP[i],&GROUP[i+1]);
        }
    }
}

void topTeam(team GROUP[], int n){
    printf("CHAMPIONS\n");
    sortScore(GROUP,n);
    outputTeam(GROUP[0]);
    printf("\n");
}

int main(){
    team A,B,C,GROUP[100];

    //Team A
    strcpy(A.name,"Chelsea");
    A.win_num = 20;
    A.lose_num = 2;
    A.draw_num = 3;
    A.point = 0;
    GROUP[0] = A;

    //Team B
    strcpy(B.name,"MU");
    B.win_num = 100;
    B.lose_num = 7;
    B.draw_num = 3;
    B. point = 0;
    GROUP[1] = B;
    
    //Team C
    strcpy(C.name,"Liverpool");
    C.win_num = 60;
    C.lose_num = 3;
    C.draw_num = 6;
    C.point = 0;
    GROUP[2] = C;

    outputGroup(GROUP,3);
    computePoint(GROUP,3);
    printf("POINT SORT\n");
    sortScore(GROUP,3);
    outputGroup(GROUP,3);
    topTeam(GROUP,3);
}