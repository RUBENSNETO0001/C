#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Início main()
int main (void) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	//Declaração
	int x, y, z;
	int *ptr; //ponteiro
	//Declaração de uma variável do tipo ponteiro, ou seja, ptr armazenará o endereço de
	//memória de outra variável. A tipagem do ponteiro indica o tipo de variável do 
	//endereço alocado e posteriormente armazenado
	
	//Atribuição
	x = 10;
	y = 20;
	z = 30;
	
	ptr = &x; //"Passando" o endereço de memória de x para ptr
	
	printf ("\n\nEndereço (ptr) de x: %p.", ptr);
	printf ("\n\nConteúdo de de x com base em ptr: %d.", *ptr);
	//Acessando endereço - ptr
	//Acessando conteúdo no endereço - *ptr
	
	
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}//Fim da main()
