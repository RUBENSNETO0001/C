#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Início main()
int main (void) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	float x, y, *p1, *p2;
	printf ("\n\nEste programa manipula valores de variáveis através de seus ponteiros!");
	
	printf ("\n\nInforme o primeiro valor: ");
	scanf ("%f", &x); //conteúdo atribuído no endereço &x - manipulação de conteúdo
	p1 = &x; //endereço de posição de memória de x - manipulação de endereço
	
	printf ("\n\nInforme o segundo valor: ");
	scanf ("%f", &y);
	p2 = &y;
	
	printf ("\n\n\nRelatório inicial das variáveis!");
	printf ("\n\nEndereço da variável x(p1): %p!", p1);
	printf ("\n\nConteúdo atribuído em x: %.2f!", *p1);
	
	printf ("\n\nEndereço da variável y(p2): %p!", p2);
	printf ("\n\nConteúdo atribuído em y: %.2f!", *p2);
	
	printf ("\n\n\nResultados das Operações Matemáticas Básicas!");
	printf ("\n\nAdição: %.2f + %.2f = %.2f", *p1, *p2, (*p1 + *p2));
	printf ("\n\nSubtração: %.2f - %.2f = %.2f", *p1, *p2, (*p1 - *p2));
	printf ("\n\nMultiplicação: %.2f * %.2f = %.2f", *p1, *p2, (*p1 * *p2));
	if (*p2 != 0)
		printf ("\n\nDivisão: %.2f / %.2f = %.2f", *p1, *p2, (*p1 / *p2));
	else
		printf ("\n\nNão é possível realizar a divisão!");
			
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}//Fim da main()
