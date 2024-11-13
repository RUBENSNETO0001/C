#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//In�cio main()
int main (void) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	float x, y, *p1, *p2;
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
	
	printf ("\n\n\nResultados das Opera��es Matem�ticas B�sicas!");
	printf ("\n\nAdi��o: %.2f + %.2f = %.2f", *p1, *p2, (*p1 + *p2));
	printf ("\n\nSubtra��o: %.2f - %.2f = %.2f", *p1, *p2, (*p1 - *p2));
	printf ("\n\nMultiplica��o: %.2f * %.2f = %.2f", *p1, *p2, (*p1 * *p2));
	if (*p2 != 0)
		printf ("\n\nDivis�o: %.2f / %.2f = %.2f", *p1, *p2, (*p1 / *p2));
	else
		printf ("\n\nN�o � poss�vel realizar a divis�o!");
			
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}//Fim da main()
