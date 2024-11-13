#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Procedimento clear()
void clear () {
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");
}//Fim clear()

//Início main()
int main (void) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int linhasA, colunasA, linhasB, colunasB, i, j, k;
	printf ("\n\nEste programa multiplica, caso possível, duas matrizes A e B!");
	
	printf ("\n\nInforme a quantidade de linhas de A: ");
	scanf ("%d", &linhasA);
	printf ("\n\nInforme a quantidade de colunas de A: ");
	scanf ("%d", &colunasA);
	int A[linhasA][colunasA];
	
	printf ("\n\n\nInforme a quantidade de linhas de B: ");
	scanf ("%d", &linhasB);
	printf ("\n\nInforme a quantidade de colunas de B: ");
	scanf ("%d", &colunasB);
	int B[linhasB][colunasB];
	
	clear();
	
	//Atribuição de valores - Matriz A
	printf ("\n\nInforme os elementos da matriz A!\n");
	for (i = 0; i < linhasA; i++) {
		for (j = 0; j < colunasA; j++) {
			printf ("\n\nInforme o elemento na posição A[%d][%d]: ", i, j);
			scanf ("%d", &A[i][j]);
		}
	}
	
	clear();
	
	//Atribuição de valores - Matriz B
	printf ("\n\nInforme os elementos da matriz B!\n");
	for (i = 0; i < linhasB; i++) {
		for (j = 0; j < colunasB; j++) {
			printf ("\n\nInforme o elemento na posição B[%d][%d]: ", i, j);
			scanf ("%d", &B[i][j]);
		}
	}
	
	clear();
	
	printf ("\n\n\n\tMatrizes");
	
	//Impressão da matriz A
	printf ("\n\nMatriz A = \n");
	for (i = 0; i < linhasA; i++) {
		printf ("\n");
		for (j = 0; j < colunasA; j++) {
			printf (" %d ", A[i][j]);
		}
	}
	
	//Impressão da matriz B
	printf ("\n\n\nMatriz B = \n");
	for (i = 0; i < linhasB; i++) {
		printf ("\n");
		for (j = 0; j < colunasB; j++) {
			printf (" %d ", B[i][j]);
		}
	}
	
	fflush(stdin);
	//Multiplicação
	if (colunasA == linhasB) {
		int C[linhasA][colunasB];
		for (i = 0; i < linhasA; i++) {
			C[i][j] = 0;
			for (j = 0; j < colunasB; j++) {
				for (k = 0; k < colunasA; k++) {
					C[i][j] = C[i][j] + (A[i][k] * B[k][j]);
				}
			}
		}
		
		fflush(stdin);
		//Impressão da matriz C
		printf ("\n\n\nMatriz C = A * B = \n");
		for (i = 0; i < linhasA; i++) {
			printf ("\n");
			for (j = 0; j < colunasB; j++) {
				printf (" %d ", C[i][j]);
			}
		}
	}
	else
		printf ("\n\nNão é possível calcular a multiplicação entre A e B!");
	
	printf ("\n\nObrigado por utilizar o nosso programa!\n\n\n");
	system ("Pause");
	return 0;
}//Fim da main()
