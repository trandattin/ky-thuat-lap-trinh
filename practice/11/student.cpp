#include "stdio.h"
#include "string.h"

struct student{
    char ID[100];
    char married;
    float gpa;
    int age;
};

void inputStudent(student& A){
    printf("***Input information of student A***\n");
    printf("ID = ");
    scanf("%s",&A.ID);
    printf("Married?");
    scanf("%c",&A.married);
    printf("GPA = ");
    scanf("%f",&A.gpa);
    printf("Age = ");
    scanf("%d",&A.age);
}

void outputStudent(student A){
    printf("%s",A.ID);
    printf("%6c\t",A.married);
    printf("%5.1f\t",A.gpa);
    printf("%5d\t",A.age);
    printf("\n");
}

void outputClass(student group[], int n){
    for (int i = 0; i < n; i++){
        outputStudent(group[i]);
    }
}

void swap(float* x1, float* x2){
    float t;
    t= *x1; 
    *x1 = *x2;
    *x2 = t;
}

void bubbleSort(student group[], int n){
    for (int last = n-2; last >= 0; last--){
        for (int i = 0; i <= last ;i++){
            if (group[i].gpa > group[i+1].gpa) 
                swap(&group[i].gpa,&group[i+1].gpa);
        }
    }
}

void outputGrade(student group[], int n){
    printf("GPA SORT\n");
    bubbleSort(group,n);
    for (int i = 0; i < n; i++){
        outputStudent(group[i]);
    }
}

void outputInfo(student group[], int n,char ID[]){
    printf("Students with ID %s \n",ID);
    for(int i = 0; i < n; i++){
        if (strcmp(ID,group[i].ID) == 0 ){
            outputStudent(group[i]);
        }
    }
}

void outputMarried(student group[], int n, char m){
    printf("Married Students with ID %c \n",m);
    for (int i = 0; i < n; i++){
        if (group[i].married == m){
            outputStudent(group[i]);
        }
    }
}
int main(){
    student A,B,C,TNK44[100];
    
    //Student A
    strcpy(A.ID,"2011346"); 
    A.age = 21;
    A.gpa = 9.6;
    A.married = 'N';
    TNK44[0] = A;

    //Student B
    strcpy(B.ID,"2011347"); 
    B.age = 28;
    B.gpa = 3.6;
    B.married = 'N';
    TNK44[1] = B;

    //Student C
    strcpy(C.ID,"2011345"); 
    C.age = 20;
    C.gpa = 5.6;
    C.married = 'Y';
    TNK44[2] = C;

    outputClass(TNK44,3);
    outputGrade(TNK44,3);

    char check[100];
    strcpy(check,"2011347");
    outputInfo(TNK44,3,check);
    outputMarried(TNK44,3,'N');
}