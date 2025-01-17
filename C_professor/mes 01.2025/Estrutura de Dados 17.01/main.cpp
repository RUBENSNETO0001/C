#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include "Pilha1.h"
#include "menu.h"

int main(int argc, char*argv[]){
	system("cls");
	setlocale(LC_ALL, "portuguese");
	//vai aparecer ao usuario
	menu();
	
	//
	
	printf("\n\n\nObrigado por ultilizar nosso programa!!!\n\n\n");
	system("Pause");
	return 0;
}
