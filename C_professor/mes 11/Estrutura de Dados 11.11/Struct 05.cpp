#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Procedimento clear()
void clear() {
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");
}//Fim de clear

//Estrutura Pessoa
struct Pessoa {
	char nome[80];
	int idade;
	float peso;
};//Fim de Pessoa

//Estrutura pop(popula��o)
struct Pop {
	struct Pessoa *pessoas; //vetor -> "aproximadamente" um array
	int quant_pessoas;	
};//Fim de Pop

//In�cio da main()
int main (void) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	struct Pop pop;
	int i;
	
	printf ("\n\nEste programa cadastra os dados de n pessoas de uma popula��o qualquer!");
	printf ("\n\nInforme a quantidade de pessoas que ser�o cadastradas: ");
	scanf ("%d", &pop.quant_pessoas);
	
	//Aloca��o de mem�ria - caso poss�vel
	pop.pessoas = (struct Pessoa *) malloc(pop.quant_pessoas * sizeof(struct Pessoa));
	
	//Verifica��o na disponibilidade de mem�ria para aloca��o
	if (pop.pessoas == NULL) {
		printf ("\n\nErro no processo de aloca��o de mem�ria!\n\n");
		return 1;
	}
	
	clear();
	
	//Atribui��o de valores aos campos de Pessoa
	printf ("\n\nInforme os dados cadastrais de cada pessoa da popula��o!");
	for (i = 0; i < pop.quant_pessoas; i++) {
		printf ("\n\n\n\tCadastro de pessoa n� %d", i + 1);
		printf ("\n\nNome da pessoa: ");
		scanf (" %[^\n]", &pop.pessoas[i].nome);
		printf ("\n\nInforme a idade da pessoa (anos completos): ");
		scanf ("%d", &pop.pessoas[i].idade);
		printf ("\n\nInforme o peso da pessoa (kg): ");
		scanf ("%f", &pop.pessoas[i].peso);
		clear();
	}
	
	//Exibi��o
	printf ("\n\n\tBase de Dados - Cadastro de Pessoas");
	for (i = 0; i < pop.quant_pessoas; i++) {
		printf ("\n\n\n\nCadastro de Pessoa n� %d", i + 1);
		printf ("\n\nNome da pessoa: %s", pop.pessoas[i].nome);
		printf ("\n\nIdade da pessoa (anos completos): %d", pop.pessoas[i].idade);
		printf ("\n\nPeso da pessoa (kg): %.2f", pop.pessoas[i].peso);
	}
	
	//Libera��o de mem�ria alocada
	free(pop.pessoas);
	
	printf ("\n\n\n\nObrigado por utilizar nosso programa!\n\n\n\n");
	system ("Pause");
	return 0;
}
