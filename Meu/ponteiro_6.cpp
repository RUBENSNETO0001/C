//#include <stdio.h>
//#include <stdlib.h>
//#include <locale.h>
//
//void clear(){
//	printf("\n\n\n");
//	system("Pause");
//	system("cls");
//}
//
//int main(void){
//	system("cls");
//	setlocale(LC_ALL,"portuguese");
//	
//	//	local de variavel
//	int tam, i;
//	int vetor[tam];
//	int *ptr[tam];
//
//	printf("\n\nVerifica se tem espa�o disponivel na variavel int na memoria");
//	
//	ptr[tam] = (int*) malloc(tam* sizeof(int*));//verificar se possui um indere�o de memoria para um numero int, malloc(sizeof(int)) loca��o
//	//Aloca um espa�o de memoria para um numero int e passa o endere�o para ptr
//	//endere�o do espa�o alocado.	
//	
//	if(ptr == NULL){
//		printf("\n\n\nMemoria insuficiente");
//		exit(1);
//	}
//	
//	printf("\n\n\nO tamanho do vetor: ");
//	scanf("%d", &tam);
//
//	for(i = 0; i < tam; i++){
//		printf("\n\nMe de um numero: ");
//		scanf("%d", &vetor[i]);
//		ptr[i] = &vetor[i];	
//}
//	
//	for(i = 0; i < tam; i++){
//		printf("\n\nConte�do: %d.\nEndere�o: %p.", *ptr[i], ptr[i]);
//	}
//	
//	free(ptr);//libera o espa�o que outrora fora alacado. seria tipo o clear
//	
//	printf("\n\n\n");
//	system("\n\nPause");
//	system("cls");
//	printf("\n\nObrigado por user meu programa!!\n\n");
//	return 0;
//}


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
	int tam, i;
	int *ptr;

	printf("\n\nVerifica se tem espa�o disponivel na variavel int na memoria");
	
	printf("\n\n\nO tamanho do vetor: ");
	scanf("%d", &tam);
	
	int **vet = (int **) malloc(tam*sizeof(int *));//loca��o global
	
	if(ptr == NULL){
		printf("Memoria insuficiente");
		exit(1);
	}
	//verificar se tem espa�o na memoria se sim atribui��o
	printf("\n\nInforme os elementos do vetor vet: ");
	for(i = 0; i < tam; i++){
		vet[i] = (int*) malloc(sizeof(int));//loca��o em unidade
		if(vet[i] == NULL){
			printf("\n\nError de processo de aloca��o de memoria para o elemento %d", i);
			return 1;
		}
		printf("\n\nInforme os elementos do vetor vet[%d]: ", i);
		scanf("%d", &vet[i]);
	}
//	resultado
		for(i = 0; i < tam; i++){
			printf("\n\nConte�do: %d.", *vet[i]);
		}
//		liberando espa�o de memoria.
		for(i = 0; i < tam; i++){
			free(vet[i]);//libera o espa�o que outrora fora alacado. seria tipo o clear
		}
free(vet);
	printf("\n\n\n");
	system("\n\nPause");
	system("cls");
	printf("\n\nObrigado por user meu programa!!\n\n");
	return 0;
}
