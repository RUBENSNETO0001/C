#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Início main()
int main (void) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int m, n, i, j, num;
	printf ("\n\nEste programa carrega e imprime uma matriz A qualquer!");
	printf ("\n\nInforme a quantidade de linhas de A: ");
	scanf ("%d", &m);
	printf ("\n\nInforme a quantidade de colunas de A: ");
	scanf ("%d", &n);
	int A[m][n];
	
	printf ("\n\nInforme os elementos de A!");
	for (i = 0; i < m; i++) { //Percorrendo linhas de A
		for (j = 0; j < n; j++) { //Percorrendo colunas de A
			printf ("\n\nInforme o elemento A[%d][%d]: ", i, j);
			scanf ("%d", &A[i][j]);
		}
	}
	
	//A[4][1] = 10;
	
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");
	
	printf ("\n\nMatriz A = \n");
	for (i = 0; i < m; i++) {
		printf ("\n");
		for (j = 0; j < n; j++) 
			printf (" %d ", A[i][j]);
	}
	
	//printf ("\n\nA[4][1] = %d", A[4][1]);
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}//Fim main()
