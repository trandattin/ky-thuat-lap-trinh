#include "stdio.h"

struct student{
	char ID[100];
	float gpa;
};

void inputStudent(student& A){
	printf("***Input information of student***\n");
	printf("ID = ");
	scanf("%s",&A.ID);
	printf("GPA = ");
	scanf("%f",&A.gpa);
}

void outputStudent(student A){
	printf("%s ",A.ID);
	printf("%.2f\n",A.gpa);
}

void compareGpa(student A, student B){
	if (A.gpa > B.gpa) printf("GPA's %s greater", A.ID);
	if (A.gpa == B.gpa) printf("GPD's %s and GPA's %s equally", A.ID, B.ID);
	if (A.gpa < B.gpa) printf("GPA's %s grater", B.ID);
}

int main(){
	student A,B;
	inputStudent(A);
	inputStudent(B);
	outputStudent(A);
	outputStudent(B);
	compareGpa(A,B);
}