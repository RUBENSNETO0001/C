#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//In�cio main()
int main (void) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	float x, y, *p1, *p2, temp;
	printf ("\n\nEste programa manipula valores de vari�veis atrav�s de seus ponteiros!");
	
	printf ("\n\nInforme o primeiro valor: ");
	scanf ("%f", &x); //conte�do atribu�do no endere�o &x - manipula��o de conte�do
	p1 = &x; //endere�o de posi��o de mem�ria de x - manipula��o de endere�o
	
	printf ("\n\nInforme o segundo valor: ");
	scanf ("%f", &y);
	p2 = &y;
	
	printf ("\n\n\nRelat�rio inicial das vari�veis!");
	printf ("\n\nEndere�o da vari�vel x(p1): %p!", p1);
	printf ("\n\nConte�do atribu�do em x: %.2f!", *p1);
	
	printf ("\n\nEndere�o da vari�vel y(p2): %p!", p2);
	printf ("\n\nConte�do atribu�do em y: %.2f!", *p2);
	
	//Troca de conte�dos entre as posi��es de mem�ria
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	
	printf ("\n\n\n\nRelat�rio das vari�veis ap�s manipula��o 01!");
	printf ("\n\nEndere�o da vari�vel x(p1): %p!", p1);
	printf ("\n\nConte�do atribu�do em x: %.2f!", *p1);
	
	printf ("\n\nEndere�o da vari�vel y(p2): %p!", p2);
	printf ("\n\nConte�do atribu�do em y: %.2f!", *p2);
	
	
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}//Fim da main()
