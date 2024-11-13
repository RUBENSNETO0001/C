#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Início main()
int main (void) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	//Declaração
	int x, y;
	int *ptr,*ptr1; //ponteiro
	//Declaração de uma variável do tipo ponteiro, ou seja, ptr armazenará o endereço de
	//memória de outra variável. A tipagem do ponteiro indica o tipo de variável do 
	//endereço alocado e posteriormente armazenado
	
	ptr = &x; //"Passando" o endereço de memória de x para ptr
	ptr1 = &y;
	
	printf ("\n\nEndereço de x: %p.", ptr);
	printf ("\n\nEndereço de y: %p.", ptr1);
	
	//Atribuição
	x = 10;
	y = x;
	
	printf ("\n\nEndereço (ptr) de x: %p.", ptr);
	printf ("\n\nConteúdo de x com base em ptr: %d.", *ptr);
	//Acessando endereço - ptr
	//Acessando conteúdo no endereço - *ptr
	
	printf ("\n\nEndereço (ptr1) de y: %p.", ptr1);
	printf ("\n\nConteúdo de y com base em ptr1: %d.", *ptr1);
	
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}//Fim da main()
