#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Início da main()
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
		printf ("\n\nInforme quantidades válidas de linhas e de colunas");
		return 1; //return 1 é utilziado para informar que o programa foi encerrado com errou e/ou exceções
	}
	
	//Alocação - caso possível
	int **matriz = (int **) malloc(m * sizeof(int *));
	
	//Verificação de disponibilidade de espaço
	if (matriz == NULL) {
		printf ("\n\nErro no processo de alocação de memória!\n\n");
		return 1;
	}
	
	//Atribuindo valores em A
	for (i = 0; i < m; i++) {
		//Alocação - caso possível
		matriz[i] = (int *) malloc(n * sizeof(int));
		
		//Verificação de disponibilidade de espaço
		if (matriz[i] == NULL) {
			printf ("\n\nErro no processo de alocação de memória!\n\n");
			return 1;
		}
		
		for (j = 0; j < n; j++) {
			printf ("\n\nInforme o elemento na posição A[%d][%d]: ", i, j);
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
	
	//Liberando espaço em memória
	for (i = 0; i < m; i++) {
		free(matriz[i]);
	}
	
	free(matriz);
		
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0; //return 0 é utilizado para informar que o programa foi finalizado sem erros ou exceções
}//Fim main()
