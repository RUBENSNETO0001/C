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

	printf("\n\nVerifica se tem espaço disponivel na variavel int na memoria");
	
	ptr = (int*) malloc(sizeof(int));//verificar se possui um indereço de memoria para um numero int, malloc(sizeof(int)) locação
	//Aloca um espaço de memoria para um numero int e passa o endereço para ptr
	//endereço do espaço alocado.	
	
	if(ptr == NULL){
		printf("Memoria insuficiente");
		exit(1);
	}
	//verificar se tem espaço na memoria se sim atribuição
	num = 100;
	ptr = &num;

	free(ptr);//libera o espaço que outrora fora alacado
		printf("\n\nConteúdo: %d. \n\nEndereço: %p.", *ptr, ptr);
	printf("\n\n\n");
	system("\n\nPause");
	system("cls");
	printf("\n\nObrigado por user meu programa!!\n\n");
	return 0;
}
