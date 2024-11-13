#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Início main()
int main (void) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int num = 10;
	printf ("\n\nEste programa imprime um número com pré-incremento e pós-incremento!");
	printf ("\n\nNúmero utilizado: %d.", num);
	printf ("\n\nNúmero após pós-incremento: %d.", num++); //num = num + 1. Saída = 10. num = 11
	printf ("\n\nNúmero após pré-incremento: %d.", ++num); //num = 12. Saída = 12
		
	printf ("\n\nObrigado por utilizar o nosso programa!\n\n\n");
	system ("Pause");
	return 0;
}//Fim da main()
