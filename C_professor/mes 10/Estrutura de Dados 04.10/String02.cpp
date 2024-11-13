#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Início main()
int main (void) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	char str[3][80];
	int i;
	printf ("\n\nEste programa carrega e imprime uma string!");
	printf ("\n\nInforme cada linha da string!");
	for (i = 0; i < 3; i++) {
		printf ("\n\nInforme a %dª linha (%d): ", i+1, i);
		gets(str[i]);
	}
	
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");
	
	printf ("\n\nString informada: \n");
	for (i = 0; i < 3; i++)
		printf ("\n%s", str[i]);
 	
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}
