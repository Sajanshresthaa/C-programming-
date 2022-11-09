#include<stdio.h>
#include<conio.h>
int main(){
	int n, i,k ,count = 0;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("The prime numbers are: ");
	for (i = 3; i <= n ; i++){
		for (k = 2; k < i; k++){
			if ( i%k == 0){
				count += 1;
			}
			if (count > 1){
				break;
			}
		}
		if (count < 1){
			printf ("%d ", i);
		}
	count = 0;
	}
	return 0;
}
