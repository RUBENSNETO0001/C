#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Procedimento clear()
void clear () {
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");
}//Fim de clear()

//In�cio main()
int main (void) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int tam, i, num, control = 0, lsup, bolha, aux;
	printf ("\n\nEste programa busca um elemento em um vetor A qualquer ap�s ordena��o decrescente!");
	printf ("\n\nInforme o tamanho do vetor A: ");
	scanf ("%d", &tam);
	int A[tam];
	clear();
	printf ("\n\nInforme os elementos do vetor A!");
	for (i = 0; i < tam; i++) {
		printf ("\n\nInforme o elemento A[%d]: ", i);
		scanf ("%d", &A[i]);
	}
	clear();
	printf ("\n\n\nVetor Original A = [");
	for (i = 0; i < tam; i++) {
		printf (" %d ", A[i]);
	}
	printf("]");
	
	//Ordena��o decrescente
	lsup = tam - 1;
	while (lsup > 0) {
		bolha = 0;
		for (i = 0; i < lsup; i++) {
			if (A[i] < A[i + 1]) {
				aux = A[i];
				A[i] = A[i + 1];
				A[i + 1] = aux;
				bolha = i; 
			}
		}
		lsup = bolha;
	}
	
	printf ("\n\n\nVetor A em Ordem Decrescente = [");
	for (i = 0; i < tam; i++) {
		printf (" %d ", A[i]);
	}
	printf("]");
	
	//Busca ap�s ordena��o decrescente
	printf ("\n\n\nInforme um valor para busca no vetor A: ");
	scanf ("%d", &num);
	
	for (i = 0; i < tam; i++) {
		if (num == A[i]) {
			control = 1;
			printf ("\n\nO n�mero %d foi localizado em A na posi��o %d!", num, i);
		}		
	}
	
	if (control == 0)
		printf ("\n\nO n�mero %d n�o foi localizado no vetor A!");
	
	printf ("\n\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}//Fim da main()
