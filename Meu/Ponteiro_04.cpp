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
	int x, y;
	int *ptr, *ptr1; //ponteiro
	int soma, mult, sub, div;
	
//	começo do programa
	printf("\n\nEsse programa vai manipular o valor das variaveis via ponteiros");
	
	printf("\n\nMe de o primeiro valor: ");
	scanf("%d", &x);
	ptr = &x;
	
	printf("\n\nMe de o segundo valor: ");
	scanf("%d", &y);
	ptr1 = &y;
	
	clear();
	
	printf("\n\nO valor dp ponteiro 1 e 2 somado: %d", ( *ptr + *ptr1));
	printf("\n\nO valor dp ponteiro 1 e 2 multiplicado: %d", (*ptr * *ptr1));
	printf("\n\nO valor dp ponteiro 1 e 2 subtraido: %d",(*ptr - *ptr1));
	printf("\n\nO valor dp ponteiro 1 e 2 dividido: %d", (*ptr / *ptr1));
	
	printf("\n\n\n");
	system("\n\nPause");
	system("cls");
	printf("\n\nObrigado por user meu programa!!\n\n");
	return 0;
}
