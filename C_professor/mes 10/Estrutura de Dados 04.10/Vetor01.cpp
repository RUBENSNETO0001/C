#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Início main()
int main (void) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int tam, i, num;
	printf ("\n\nEste programa carrega e exibe um vetor A!");
	printf ("\n\nInforme o tamanho do vetor A: ");
	scanf ("%d", &tam);
	if (tam > 0) {
		int A[tam]; //Problema???
		printf ("\n\nInforme os elementos de A!");
		for (i = 0; i < tam; i++) {
			printf ("\n\nInforme A[%d]: ", i);
			scanf ("%d", &A[i]);	
		}
		
		//A[5] = 2;
		
		printf ("\n\n\n");
		system ("Pause");
		system ("cls");
		
		printf ("\n\nA = [ ");
		for (i = 0; i < tam; i++)
			printf ("%d ", A[i]);
		printf ("]");
		
		//printf ("\n\nA[5] = %d", A[5]);
	}
	else {
		printf ("\n\nInforme um tamanho válido para o vetor A!");
	}
	
	printf ("\n\nObrigado por utilizar nosso sistema!\n\n\n");
	system ("Pause");
	return 0;
}//Fim main()


