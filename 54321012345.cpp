#include<stdio.h>
#include<conio.h>
int main(){
	int i, j, n;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	j = (n * 2) + 1;
	
	for (i = 1; i <= j; i++){
		if(n > -1){
			printf("%d", n);
		}else{
			printf("%d", n*(-1));
		}
		n -= 1;
	}
}
