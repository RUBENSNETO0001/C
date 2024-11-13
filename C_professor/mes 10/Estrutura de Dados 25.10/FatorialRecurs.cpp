#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//In�cio da fun��o fatNum()
unsigned long long fatNum(int n) {
	unsigned long long resultado = 1;
	if (n <= 1) //Crit�rio base - crit�rio de parada
		return 1;
	else
		return n * fatNum(n - 1);
	return resultado;
}//Fim da fatNum()

//In�cio main()
int main (int argc, char *argv[]) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int num;
	printf ("\n\nEste programa calcula o fatorial de um n�mero inteiro qualquer!");
	printf ("\n\nInforme um n�mero para c�lculo de fatorial: ");
	scanf ("%d", &num);
	if (num < 0)
		printf ("\n\nInforme um n�mero inteiro positivo!");
	else
		printf ("\n\nResultado: %d! = %d", num, fatNum(num));
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}//Fim da main()
