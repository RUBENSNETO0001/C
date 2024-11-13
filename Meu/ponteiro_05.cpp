#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void clear(){
	printf("\n\n\n");
	system("Pause");
	system("cls");
}

int main(void){
	system("cls");
	setlocale(LC_ALL,"portuguese");
	
	//	local de variavel
	int num;
	int *ptr;

	printf("\n\nVerifica se tem espa�o disponivel na variavel int na memoria");
	
	ptr = (int*) malloc(sizeof(int));//verificar se possui um indere�o de memoria para um numero int, malloc(sizeof(int)) loca��o
	//Aloca um espa�o de memoria para um numero int e passa o endere�o para ptr
	//endere�o do espa�o alocado.	
	
	if(ptr == NULL){
		printf("Memoria insuficiente");
		exit(1);
	}
	//verificar se tem espa�o na memoria se sim atribui��o
	num = 100;
	ptr = &num;

	free(ptr);//libera o espa�o que outrora fora alacado
		printf("\n\nConte�do: %d. \n\nEndere�o: %p.", *ptr, ptr);
	printf("\n\n\n");
	system("\n\nPause");
	system("cls");
	printf("\n\nObrigado por user meu programa!!\n\n");
	return 0;
}
