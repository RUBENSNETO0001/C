#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//In�cio main()
int main (void) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int num = 10;
	printf ("\n\nEste programa imprime um n�mero com pr�-incremento e p�s-incremento!");
	printf ("\n\nN�mero utilizado: %d.", num);
	printf ("\n\nN�mero ap�s p�s-incremento: %d.", num++); //num = num + 1. Sa�da = 10. num = 11
	printf ("\n\nN�mero ap�s pr�-incremento: %d.", ++num); //num = 12. Sa�da = 12
		
	printf ("\n\nObrigado por utilizar o nosso programa!\n\n\n");
	system ("Pause");
	return 0;
}//Fim da main()
