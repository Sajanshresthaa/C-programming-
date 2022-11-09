#include<stdio.h>

struct student{
	char name[20];
	int roll;
	float marks;
};

int main(){
	struct student stu[5];
	int i;
	
	for (i = 0; i < 5; i++){
		printf ("Name of the student: ");
		gets(stu[i].name);
		printf("Age of the student: ");
		scanf("%d", &stu[i].roll);
		printf("Marks: ");
		scanf("%f", &stu[i].marks);
		getchar();
	}
	puts(" ");
	
	for (i = 0; i < 5; i++){
		if(stu[i].marks > 80){
			printf("Name: %s\n", stu[i].name);
			printf("Age: %d\n", stu[i].roll);
		}
	}
	return 0;
}
