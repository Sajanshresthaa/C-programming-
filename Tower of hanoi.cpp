#include<stdio.h>
#include<conio.h>

void towerofHanoi(int numberofdisks, char rodsource, char rodDisk, char rodaux);

int main(){
	int numberofdisks = 4;
	char rodnames[] = {'A','B','C'};
	towerofHanoi(numberofdisks, rodnames[0], rodnames[2], rodnames[1]);
	return 0;
}

void towerofHanoi(int numberofdisks, char rodsource, char rodDisk, char rodaux){
	if(numberofdisks == 1){
		printf("Moving disk 1 from rod %c to %c\n", rodsource, rodDisk);
		return;
	}
	towerofHanoi(numberofdisks - 1, rodsource, rodaux, rodDisk);
	printf("Moving disk %d from rod %c to %c\n", numberofdisks, rodsource, rodDisk);
	towerofHanoi(numberofdisks - 1, rodsource, rodaux, rodDisk);
}

