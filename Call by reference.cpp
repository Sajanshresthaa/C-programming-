#include<stdio.h>
#include<conio.h>

int sum(int *num1ptr, int *num2ptr, int *sumptr){
	*sumptr = *num1ptr + *num2ptr;
}

int main(){
	int num1, num2, sum1;
	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);
	sum(&num1, &num2, &sum1);
	printf("Sum: %d", sum1);
	return 0;
}
