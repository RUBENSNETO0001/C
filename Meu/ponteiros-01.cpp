#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void clear(){
	printf("\n\n\n");
	system("Pause");
	system("cls");
}

int main(void){
	system("cls");
	setlocale(LC_ALL,"portuguese");
	
	//	local de variavel
	int x, y, z;
	int *ptr; //ponteiro
	
//	colocando a posição de cada letra
	x = 10;
	y = 20;
	z = 30;
	
	ptr = &x;//atribuindo o atributo de x para o ponteiro;
	
	printf("\n\nEndereço (ptr) de x: %p.", ptr);// endereço do ptr
	printf("\n\nConteúdo de, de x com a base em (ptr): %d.", ptr);//conteudo do ptr que esta sendo indicado
	
	system("Pause");
	system("cls");
	printf("\n\nObriagado por user meu programa!!\n\n");
	return 0;
}
