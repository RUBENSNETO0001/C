#include <stdio.h>
#include <stdlib.h>

//começo do main
int main(void){
	system("cls");
	FILE *pont_arq;
   	int r;
	
	int i = 0;
	
	for(i = 0; i < 12; i++){
		char filename[100];
	 	FILE *file;
		fopen(filename,"w");
	 	sprintf(filename,"arqui-%02d.txt", i);
	}
	return 0;
}//fim do clear

