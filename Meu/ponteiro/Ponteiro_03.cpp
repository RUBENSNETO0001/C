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
//	variaveis
	float x, y;
	float *ptr, *ptr1, temp;
	
	printf("\n\nEsse programa vai manipular o valor das variaveis via ponteiros");
//	colocar um valor no ponteiro.
	printf("\n\nMe informe o primeiro valor: ");
	scanf("%f", &x);// conteudo atribuido ao endereço x
	ptr = &x; //endereço de posição de x
	
//	a mesma coisa para y
	printf("\n\nMe informe o primeiro valor: ");
	scanf("%f", &y);// conteudo atribuido ao endereço x
	ptr1 = &y; //endereço de posição de x
//	resultado do ptr 1 e ptr 2
	printf("\n\nEndereço atribuido em x(Ptr): %p!", ptr);
	printf("\n\nConteudo atribuido em x : %.2f!", *ptr);
	
	printf("\n\nEndereço atribuido em x(Ptr2): %p!", ptr1);
	printf("\n\nConteudo atribuido em x : %.2f!", *ptr1);
//	em teoria ta passando conteudo de ptr para temp e e ptr1 para ptr e temp para ptr1
	temp = *ptr;
	*ptr = *ptr1;
	*ptr1 = temp;
	
	//	resultado do ptr 1 e ptr 2
	printf("\n\nRelatorio da manipulação das variaveis");
	printf("\n\nEndereço atribuido em x(Ptr): %p!", ptr);
	printf("\n\nConteudo atribuido em x : %.2f!", *ptr);
	
	printf("\n\nEndereço atribuido em x(Ptr2): %p!", ptr1);
	printf("\n\nConteudo atribuido em x : %.2f!", *ptr1);
	
	
	
	printf("\n\nObriagado por user meu programa!!\n\n");
	system("Pause");
	return 0;
}
