#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Início main()
int main(void) {
	system ("cls");
	//setlocale (LC_ALL, "Portuguese");
	char str[80];
	printf ("\n\nEste programa carrega e imprime uma string!");
	printf ("\n\nInforme uma string: ");
	gets(str);
	printf ("\n\nString informada: %s!", str);
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}//Fim da main()
