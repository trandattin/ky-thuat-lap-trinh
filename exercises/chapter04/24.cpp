#include "stdio.h"
#include "math.h"

struct student{
	int id;
	float gpa;
	int age;
};

void inputStudent(student GROUP[], int& num_stu){
	printf("Number of student: ");
	scanf("%d",&num_stu);
	for(int i=0; i<num_stu; i++){
		printf("Student number %d\n",i+1);
		printf("ID = ");
		scanf("%d",&GROUP[i].id);
		printf("GPA = ");
		scanf("%f",&GROUP[i].gpa); 
		printf("Age = ");
		scanf("%d",&GROUP[i].age);
	}
}

void outputStudent(student a){
	printf("ID: %d\n",a.id);
	printf("GPA: %.2f\n",a.gpa);
	printf("Age: %d\n",a.age);
	printf("\n");

}

void outputClass(student GROUP[], int num_stu){
	printf("\n**OUTPUT**\n");
	for (int i = 0; i<num_stu; i++){
		printf("Student number %d:\n",i+1);
		outputStudent(GROUP[i]);
	}
}

void highGPA(student GROUP[], int num_stu){
	printf("\nHighest GPA\n");
	int max_index = 0;
	for (int i=1; i<num_stu;i++){
		if (GROUP[i].gpa > GROUP[max_index].gpa) max_index = i;
	}
	for (int i = 0; i<num_stu; i++){
		if(GROUP[max_index].gpa == GROUP[i].gpa){
			outputStudent(GROUP[i]);
		}
	}
}

bool checkStudent(student GROUP[], int num_stu){
	for (int i=0; i<num_stu; i++){
		if (GROUP[i].gpa == 3.0 & GROUP[i].age == 14 & GROUP[i].id == 1234) {
			return true;
		}		
	}
	return false;
}

void swap(student& a,student& b){
	student tmp = a;
	a = b;
	b = tmp;
}

int indexMin(student GROUP[], int begin, int num_stu){
	int index_min = begin;
	for (int i=begin+1; i<num_stu; i++){
		if (GROUP[i].id < GROUP[index_min].id){
			index_min = i;
		}
	}
	return index_min;
}

void selectSoft(student GROUP[], int num_stu){
	for(int k = 0; k<num_stu-1; k++){
		int index_min = indexMin(GROUP,k,num_stu);
		if(index_min > k) 
			swap(GROUP[k],GROUP[index_min]);
	}
}

int main(){
	int num_stu;
	student TNK44[100];
	inputStudent(TNK44,num_stu);
	highGPA(TNK44,num_stu);
	selectSoft(TNK44,num_stu);
	printf("\nSoft as ID\n");
	outputClass(TNK44,num_stu);
	if (checkStudent(TNK44,num_stu) == false){
		printf("There are no student with 3.0 GPA, 14 Age, and ID 1234");
	}else{
		printf("There are at least a student with 3.0 GPA, 14 Age, and ID 1234");
	}
}