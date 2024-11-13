#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//In�cio da main()
int main (void) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int m, n, i, j;
	printf ("\n\nEste programa carrega e exibe uma matriz A mxn qualquer!");
	printf ("\n\nInforme a quantidade linhas de A: ");
	scanf ("%d", &m);
	printf ("\n\nInforme a quantidade de colunas de A: ");
	scanf ("%d", &n);
	
	if (m <= 0 && n <= 0) {
		printf ("\n\nInforme quantidades v�lidas de linhas e de colunas");
		return 1; //return 1 � utilziado para informar que o programa foi encerrado com errou e/ou exce��es
	}
	
	//Aloca��o - caso poss�vel
	int **matriz = (int **) malloc(m * sizeof(int *));
	
	//Verifica��o de disponibilidade de espa�o
	if (matriz == NULL) {
		printf ("\n\nErro no processo de aloca��o de mem�ria!\n\n");
		return 1;
	}
	
	//Atribuindo valores em A
	for (i = 0; i < m; i++) {
		//Aloca��o - caso poss�vel
		matriz[i] = (int *) malloc(n * sizeof(int));
		
		//Verifica��o de disponibilidade de espa�o
		if (matriz[i] == NULL) {
			printf ("\n\nErro no processo de aloca��o de mem�ria!\n\n");
			return 1;
		}
		
		for (j = 0; j < n; j++) {
			printf ("\n\nInforme o elemento na posi��o A[%d][%d]: ", i, j);
			scanf ("%d", *(matriz + i) + j);
		}
	}
	
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");
	
	//Exibindo os elementos de A
	printf ("\n\n\nA = \n");
	for (i = 0; i < m; i++) {
		printf ("\n");
		for (j = 0; j < n; j++) {
			printf (" %d ", *(*(matriz + i) + j));
		}
	}
	
	//Liberando espa�o em mem�ria
	for (i = 0; i < m; i++) {
		free(matriz[i]);
	}
	
	free(matriz);
		
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0; //return 0 � utilizado para informar que o programa foi finalizado sem erros ou exce��es
}//Fim main()
