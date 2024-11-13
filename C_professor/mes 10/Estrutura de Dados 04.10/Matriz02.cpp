#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Início main()
int main (void) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int A[3][3][3], i, j, k, num;
	printf ("\n\nEste programa manipula uma matriz A3x3x3!");
	printf ("\n\nInforme os elementos da matriz A!");
	for (i = 0; i < 3; i++) { //camada 01 - número de matrizes
		for (j = 0; j < 3; j++) { //camada 02 - linhas de cada matriz
			for (k = 0; k < 3; k++) { //camada 03 - colunas de cada matriz
				printf ("\n\nInforme o elemento A[%d][%d][%d]: ", i, j, k);
				scanf ("%d", &A[i][j][k]);
			}
		}
	}
	
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");
	
	printf ("\n\nMatriz A = \n");
	for (i = 0; i < 3; i++) { //Posição de submatriz
		printf ("\n\n");
		for (j = 0; j < 3; j++) { //Posição de linha
			printf ("\n");
			for (k = 0; k < 3; k++) { //Posição de coluna
				printf (" %d ", A[i][j][k]);
			}
		}
	}
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}//Fim main()
