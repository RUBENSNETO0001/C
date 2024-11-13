#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//In�cio main()
int main (void) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int tam, i;
	printf ("\n\nEste programa carrega e imprime um vetor vet qualquer!");
	printf ("\n\nInforme a quantidade de elementos do vetor vet: ");
	scanf ("%d", &tam);
	
	//Criando um vetor de ponteiros para manipula��o de n�meros inteiros
	int **vet = (int **) malloc(tam * sizeof(int *)); //aloca��o global
	//Se existir espa�o em mem�ria, foi realizada aloca��o de mem�ria e cria��o de vet
	
	if (vet == NULL) {
		printf ("\n\nErro no processo de aloca��o de mem�ria!");
		return 1;
	}
	
	//Atribui�ao dos elementos de vet
	printf ("\n\nInforme os elementos do vetor vet!");
	for (i = 0; i < tam; i++) {
		vet[i] = (int *) malloc(sizeof(int)); //Aloca��o por unidade
		//Alocando e criando cada "espa�o" vet[i]
		
		if (vet[i] == NULL) {
			printf ("\n\nErro no processo de aloca��o de mem�ria para o elemento de index %d!", i);
			return 1;
		}
		
		printf ("\n\nInforme o valor para o elemento vet[%d]: ", i);
		scanf ("%d", vet[i]);
	}
	
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");
	
	//Exibindo o vetor vet
	printf ("\n\nVetor vet = [ ");
	for (i = 0; i < tam; i++) {
		printf (" %d ", *vet[i]);
	}
	printf ("]");
	
	//Liberando espa�o em mem�ria de cada elemento endere�ado
	for (i = 0; i < tam; i++) {
		free(vet[i]);
	}
	
	//Libera o espa�o de mem�ria global do vetor de ponteiros
	free(vet);
	
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}//Fim da main()
