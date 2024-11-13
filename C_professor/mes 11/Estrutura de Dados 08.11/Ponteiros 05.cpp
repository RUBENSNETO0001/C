#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Início main()
int main (void) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int num, *ptr;
	
	printf ("\n\nEste programa verifica se existe espaço disponível em memória para uma variável do tipo int!");
	
	ptr = (int *) malloc(sizeof(int));
	//Aloca espaço em memória para um número inteiro e passa o endereço do 
	//espaço alocado para ptr
	//Endereço do espaço alocado
	
	if (ptr == NULL) {
		printf ("\n\nMemória insuficiente!");
		exit(1);
	}
	
	//Verificar se tem espaço em memória -> se sim -> atribuição
	num = 100;
	ptr = &num;
	
	printf ("\n\nConteúdo: %d. \n\nEndereço: %p.", *ptr, ptr);
	
	free(ptr); //liberar o espaço que outrora fora alocado
	
	//Não é possível imprimir já que o espaço alocado para ptr foi liberado
	//printf ("\n\nConteúdo: %d. \n\nEndereço: %p.", *ptr, ptr);
	
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}//Fim da main()
