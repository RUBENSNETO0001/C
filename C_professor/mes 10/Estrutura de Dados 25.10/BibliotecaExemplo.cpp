#include "mathLib.h"

//In�cio main()
int main (int argc, char *argv[]) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	float num1, num2;
	printf ("\n\nEste programa calcula a adi��o e a multiplica��o entre dois n�meros!");
	clear();
	printf ("\n\nInforme o primeiro n�mero: ");
	scanf ("%f", &num1);
	printf ("\n\nInforme o segundo n�mero: ");
	scanf ("%f", &num2);
	printf ("\n\n%.2f + %.2f = %.2f", num1, num2, addNum(num1, num2));
	printf ("\n\n%.2f * %.2f = %.2f", num1, num2, multNum(num1, num2));
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
} //Fim da main()
