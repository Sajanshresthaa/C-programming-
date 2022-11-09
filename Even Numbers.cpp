#include <stdio.h>
int main (){
	int num, i;
	printf("Enter a number: ");
	scanf ("%d", &num);
	printf("The even numbers are: ");
	for (i = 2; i <= num; i = i +2){
		printf("%d ", i);
	}
	return 0;
}
