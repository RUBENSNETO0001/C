//Série de Fibonacci - com recursividade
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Início fibonacci()
int fibonacci (int n) {
	if (n <= 1) //Caso base - caso de break da recursividade
		return n;
	else {
		return fibonacci(n-1) + fibonacci (n-2);
	}
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
	else {
		printf ("\n\nSérie de Fibonacci: ");
		for (int i = 1; i <= n; i++) {
			printf ("%d, ", fibonacci(i));
		}
		printf ("...");
	}	
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}//Fim da main()
