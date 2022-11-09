#include<graphics.h>
int main (){
	int gd = DETECT, gm;
	initgraph (&gd, &gm, NULL);
	
	circle (250, 100, 50);
	
	line (250, 150, 250, 300);
	
	line (200, 350, 250, 300);
	line (300, 350, 250, 300);
	
	line (200, 200, 300 ,200);
	getch();
	closegraph();
	return 0;
}
