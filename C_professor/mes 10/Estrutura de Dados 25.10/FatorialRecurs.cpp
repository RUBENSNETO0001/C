#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Início da função fatNum()
unsigned long long fatNum(int n) {
	unsigned long long resultado = 1;
	if (n <= 1) //Critério base - critério de parada
		return 1;
	else
		return n * fatNum(n - 1);
	return resultado;
}//Fim da fatNum()

//Início main()
int main (int argc, char *argv[]) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int num;
	printf ("\n\nEste programa calcula o fatorial de um número inteiro qualquer!");
	printf ("\n\nInforme um número para cálculo de fatorial: ");
	scanf ("%d", &num);
	if (num < 0)
		printf ("\n\nInforme um número inteiro positivo!");
	else
		printf ("\n\nResultado: %d! = %d", num, fatNum(num));
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}//Fim da main()
