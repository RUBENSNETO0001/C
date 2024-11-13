#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Início clear()
void clear () {
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");
}//Fim do clear();

//Início buscaBinaria()
int buscaBinaria (int n, int num, int A[]) {
	int esquerda = -1, direita = n;
	while (esquerda < direita - 1) {
		int medio = (esquerda + direita)/2; 
		if (A[medio] < num)
			esquerda = medio;
		else
			direita = medio;
	}
	return direita;
}//Fim da buscaBinaria()

//Início main()
int main (void) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int tam, i, busca;
	printf ("\n\nEste programa busca um número em um vetor A ordenado!");
	printf ("\n\nInforme a quantidade de elementos de A: ");
	scanf ("%d", &tam);
	int A[tam];
	clear();
	
	printf ("\n\nInforme os elementos de A!");
	for (i = 0; i < tam; i++) {
		printf ("\n\nInforme o elemento na posição A[%d]: ", i);
		scanf ("%d", &A[i]);
	}
	clear();
	
	printf ("\n\nVetor A = [ ");
	for (i = 0; i < tam; i++) {
		printf (" %d ", A[i]);
	}
	printf ("]");
	
	printf ("\n\n\nInforme um número para busca em A: ");
	scanf ("%d", &busca);
	
	if (busca < A[0] || busca > A[tam-1]) {
		printf ("\n\nO número %d não faz parte do vetor A!", busca);
	}
	else
		printf ("\n\nO número %d foi localizado na posição %d de A!", busca, buscaBinaria(tam, busca, A));
	
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}//Fim da main()


