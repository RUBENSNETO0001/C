//Série de Fibonacci - sem recursividade
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Início fibonacci()
void fibonacci (int n) {
	if (n == 1)
		printf ("\n\nSérie de Fibonacci: 1, ");
	else if (n == 2)
		printf ("\n\nSérie de Fibonacci: 1, 1, ");
	else {
		int termo1 = 1, termo2 = 1, novoTermo = 0;
		printf ("\n\nSérie de Fibonacci: %d, %d, ", termo1, termo2);
		for (int i = 3; i <= n; i++) {
			novoTermo = termo1 + termo2;
			printf("%d, ", novoTermo);
			termo1 = termo2;
			termo2 = novoTermo;
		}
	}
	printf ("...");
}//Fim fibonacci()

//Início da main()
int main(int argc, char *argv[]) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int n;
	printf ("\n\nEste programa imprime n termos da Série de Fibonacci!");
	printf ("\n\nInforme a quantidade de termos para impressão: ");
	scanf ("%d", &n);
	if (n < 1)
		printf ("\n\nInforme um valor positivo para impressão de termos da série!");
	else
		fibonacci(n); //Chamada do procedimento
	
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}//Fim da main()
