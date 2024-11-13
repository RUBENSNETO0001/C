#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Procedimento clear()
void clear () {
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");
}//Fim do procedimento clear()

//Início main()
int main (void) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int m, n, i, j, k, tam, lsup, bolha, aux, num, control = 0;
	printf ("\n\nEste programa carrega e ordena uma matriz A do tipo mxn!");
	printf ("\n\nInforme a quantidade de linhas de A: ");
	scanf ("%d", &m);
	printf ("\n\nInforme a quantidade de colunas de A: ");
	scanf ("%d", &n);
	int A[m][n];
	clear();
	
	//Atribuição de valores
	printf ("\n\nInforme os elementos da matriz A!\n");
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf ("\n\nInforme o elemento na posição A[%d][%d]: ", i, j);
			scanf ("%d", &A[i][j]);
		}
	}
	clear();
	
	//Impressão da matriz A informada pelo usuário
	printf ("\n\nMatriz A informada pelo usuário: \n");
	for (i = 0; i < m; i++) {
		printf ("\n");
		for (j = 0; j < n; j++) {
			printf (" %d ", A[i][j]);
		}
	}
	
	//Ordenação crescente dos elementos de A
	//1 - Carregando os elementos da matriz A em um vetor vet
	tam = m * n;
	int vet[tam];
	k = 0;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			vet[k++] = A[i][j]; 
		}
	} 
	
	//2 - Ordenando o vetor vet
	lsup = tam - 1;
	while (lsup > 0) {
		bolha = 0;
		for (i = 0; i < lsup; i++) {
			if (vet[i] > vet[i + 1]) {
				aux = vet[i];
				vet[i] = vet[i + 1];
				vet[i + 1] = aux;
				bolha = i;
			}
		}
		lsup = bolha;
	}
	
	//3 - Retornando os valores para a matriz A
	k = 0;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			A[i][j] = vet[k++];
		}
	}
	
	printf ("\n\n\nMatriz A após ordenação crescente: \n");
	for (i = 0; i < m; i++) {
		printf ("\n");
		for (j = 0; j < n; j++) {
			printf (" %d ", A[i][j]);
		}
	}
	
	//Busca simples e linear - Ineficiente
	printf ("\n\n\nInforme um número para busca na matriz A ordenada de maneira crescente: ");
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
		printf ("\n\nO número %d não foi localizado na matriz A!", num);
	
	printf ("\n\nObrigado por utilizar o nosso programa!\n\n\n");
	system ("Pause");
	return 0;
}//Fim da main()

//Criar funções e/ou procedimentos que melhorem a eficiência do código
// 1(f ou p): para atribuir/carregar matrizes
// 1(f ou p): para exibir/imprimir matrizes
// 1(f ou p): para ordenar um vetor de maneira crescente ou descrente 
