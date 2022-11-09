#include<stdio.h>
#include<conio.h>

int fac(int a){
	int factorial = 1;
	
	if (a == 1){
		return 1;
	}else{
		return a*fac(a-1);
	}
}

int main (){
	int i;
	
	printf("Enter a number: ");
	scanf("%d", &i);
	
	printf("%d", fac(i));
	
	return 0;
}
