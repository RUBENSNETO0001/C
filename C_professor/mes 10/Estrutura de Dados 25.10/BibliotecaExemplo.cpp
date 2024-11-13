#include "mathLib.h"

//Início main()
int main (int argc, char *argv[]) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	float num1, num2;
	printf ("\n\nEste programa calcula a adição e a multiplicação entre dois números!");
	clear();
	printf ("\n\nInforme o primeiro número: ");
	scanf ("%f", &num1);
	printf ("\n\nInforme o segundo número: ");
	scanf ("%f", &num2);
	printf ("\n\n%.2f + %.2f = %.2f", num1, num2, addNum(num1, num2));
	printf ("\n\n%.2f * %.2f = %.2f", num1, num2, multNum(num1, num2));
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
} //Fim da main()
