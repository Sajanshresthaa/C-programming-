#include <stdio.h>
int main (){
	int c, f;
	printf ("Enter a temperature in Centigrade: ");
	scanf ("%d", &c);
	f = (c + 9/5) + 32;
	printf ("Temperature in fahrenhert: %d \n",f);
	return 0;
}
