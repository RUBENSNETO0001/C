#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//In�cio main()
int main (void) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int num, *ptr;
	
	printf ("\n\nEste programa verifica se existe espa�o dispon�vel em mem�ria para uma vari�vel do tipo int!");
	
	ptr = (int *) malloc(sizeof(int));
	//Aloca espa�o em mem�ria para um n�mero inteiro e passa o endere�o do 
	//espa�o alocado para ptr
	//Endere�o do espa�o alocado
	
	if (ptr == NULL) {
		printf ("\n\nMem�ria insuficiente!");
		exit(1);
	}
	
	//Verificar se tem espa�o em mem�ria -> se sim -> atribui��o
	num = 100;
	ptr = &num;
	
	printf ("\n\nConte�do: %d. \n\nEndere�o: %p.", *ptr, ptr);
	
	free(ptr); //liberar o espa�o que outrora fora alocado
	
	//N�o � poss�vel imprimir j� que o espa�o alocado para ptr foi liberado
	//printf ("\n\nConte�do: %d. \n\nEndere�o: %p.", *ptr, ptr);
	
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}//Fim da main()
