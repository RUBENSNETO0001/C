#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//In�cio main()
int main (void) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	//Declara��o
	int x, y;
	int *ptr,*ptr1; //ponteiro
	//Declara��o de uma vari�vel do tipo ponteiro, ou seja, ptr armazenar� o endere�o de
	//mem�ria de outra vari�vel. A tipagem do ponteiro indica o tipo de vari�vel do 
	//endere�o alocado e posteriormente armazenado
	
	ptr = &x; //"Passando" o endere�o de mem�ria de x para ptr
	ptr1 = &y;
	
	printf ("\n\nEndere�o de x: %p.", ptr);
	printf ("\n\nEndere�o de y: %p.", ptr1);
	
	//Atribui��o
	x = 10;
	y = x;
	
	printf ("\n\nEndere�o (ptr) de x: %p.", ptr);
	printf ("\n\nConte�do de x com base em ptr: %d.", *ptr);
	//Acessando endere�o - ptr
	//Acessando conte�do no endere�o - *ptr
	
	printf ("\n\nEndere�o (ptr1) de y: %p.", ptr1);
	printf ("\n\nConte�do de y com base em ptr1: %d.", *ptr1);
	
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}//Fim da main()
