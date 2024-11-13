#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Procedimento clear()
void clear () {
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");
}//Fim de clear()

//Início main()
int main (void) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int m, n, i, j, num, control = 0;
	printf ("\n\nEste programa localiza um número em uma matriz A mxn!");
	printf ("\n\n\nInforme a quantidade de linhas de A: ");
	scanf ("%d", &m);
	printf ("\n\nInforme a quantidade de colunas de A: ");
	scanf ("%d", &n);
	int A[m][n];
	clear();
	
	printf ("\n\n\nInforme os elementos de A!");
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf ("\n\nInforme o elemento A[%d][%d]: ", i, j);
			scanf ("%d", &A[i][j]);
		}
	}
	
	clear();
	printf ("\n\nMatriz A original = \n");
	for (i = 0; i < m; i++) {
		printf ("\n");
		for (j = 0; j < n; j++) {
			printf (" %d ", A[i][j]);
		}
	}
	
	//Busca simples, sequencial e não ordenada - Ineficiente
	printf ("\n\n\nInforme um número para busca em A: ");
	scanf ("%d", &num);
	
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			if (num == A[i][j]) {
				control = 1;
				printf ("\n\nO número %d foi localizado na posição A[%d][%d]!", num, i, j);
			}
		}
	}
	
	if (control == 0)
		printf ("\n\nO número %d não foi localizado em A!", num);

	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}//Fim da main()
