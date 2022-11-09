#include<stdio.h>
#include<conio.h>
int main(){
	int sec;
	printf("Enter the time in seconds: ");
	scanf("%d", &sec);
	
	int hrs, mins;
	
	hrs = sec/3600;
	sec = sec - (3600* hrs);
	
	mins = sec/60;
	sec = sec - (60*mins);
	
	printf ("%d %d %d", hrs, mins ,sec);  
	return 0;
}
