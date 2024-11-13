#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "Sem Título2.h"
// variaveis globais
    int n, m , A[n][m];
	int i, j;
	
void clear() {
	printf("\n\n\n");
	system("Pause");
	system("cls");
}


int main(void) {
	system("cls");
	setlocale(LC_ALL, "portuguese");
	// variaveis.
	
	char escolha[3];
	// descriC'C#o do progrma.
	printf("Esse programa vai pega numero que um usuario digitar e vai colocar em uma matriz 3 X 3 e imprimir na tela");
	clear();

	// colocar dentro da matriz os dados(numeros).
	for(i = 0; i < n; i++) {
		for(j = 0; j < m; j++) {
			printf("Me de uma numero para matriz A[%d][%d]: ", i, j);
			scanf("%d", &A[i][j]);
		}
	}
	// imprimir na cmd
	printf("Matriz A = [");
	for(i = 0; i < n; i++) {
		printf("\n");
		for(j = 0; j < m; j++) {
			printf(" %d ", A[i][j]);
		}
	}
	printf("]");

	printf("Voce que o maior e o menor? (S ou n): ");
	gets(escolha);

	if(escolha = "s" || escolha = "sim") {
        ordena();
	}
	else {
		system("cls");
		printf("\n\nOk muito Obrigado por usar nosso programa!");
	}
	return 0;
}
