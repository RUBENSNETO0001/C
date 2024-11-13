#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//In�cio clear()
void clear() {
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");
}//Fim da clear()

//In�cio main()
int main (void) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int n, i, codBusca;
	printf ("\n\nEste programa determina o faturamento geral de um com�rcio!");
	printf ("\n\nInforme a quantidade de itens que forma comercializados: ");
	scanf ("%d", &n);
	int codItem[n];
	float quantItem[n], precoItem[n], fatItem[n], fatGeral = 0; 
	clear();
	
	printf ("\n\nInforme os dados sobre os itens comercializados!");
	for (i = 0; i < n; i++) {
		printf ("\n\nInforme o c�dido do %d� item comercializado: ", i+1);
		scanf ("%d", &codItem[i]);
		printf ("\n\nInforme a quantidade comercializada do %d� item: ", i+1);
		scanf ("%f", &quantItem[i]);
		printf ("\n\nInforme o pre�o unit�rio (R$) do %d� item comercializado: ", i+1);
		scanf ("%f", &precoItem[i]);
		fatItem[i] = quantItem[i] * precoItem[i];
		printf ("\n\n\nO faturamento do %d� item (c�dido %d) foi de R$ %.2f!", i+1, codItem[i], fatItem[i]);
		fatGeral += fatItem[i];
		clear();
	}
	
	printf ("\n\n\nO faturamento geral foi de R$ %.2f!", fatGeral);
	
	printf ("\n\n\nInforme o c�digo do item para busca: ");
	scanf ("%d", &codBusca);
	
	for (i = 0; i < n; i++) {
		if (codBusca == codItem[i]) {
			printf ("\n\n\tRelat�rio");
			printf ("\n\n\nC�digo do item: %d.", codItem[i]);
			printf ("\n\nQuantidade comercializada: %.2f.", quantItem[i]);
			printf ("\n\nPre�o unit�rio (R$): %.2f.", precoItem[i]);
			printf ("\n\nFaturamento do item (R$): %.2f.", fatItem[i]);
		}
	}
	
	printf ("\n\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}//Fim da main()
