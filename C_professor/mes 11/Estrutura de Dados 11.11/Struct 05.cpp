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

//Estrutura pop(população)
struct Pop {
	struct Pessoa *pessoas; //vetor -> "aproximadamente" um array
	int quant_pessoas;	
};//Fim de Pop

//Início da main()
int main (void) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	struct Pop pop;
	int i;
	
	printf ("\n\nEste programa cadastra os dados de n pessoas de uma população qualquer!");
	printf ("\n\nInforme a quantidade de pessoas que serão cadastradas: ");
	scanf ("%d", &pop.quant_pessoas);
	
	//Alocação de memória - caso possível
	pop.pessoas = (struct Pessoa *) malloc(pop.quant_pessoas * sizeof(struct Pessoa));
	
	//Verificação na disponibilidade de memória para alocação
	if (pop.pessoas == NULL) {
		printf ("\n\nErro no processo de alocação de memória!\n\n");
		return 1;
	}
	
	clear();
	
	//Atribuição de valores aos campos de Pessoa
	printf ("\n\nInforme os dados cadastrais de cada pessoa da população!");
	for (i = 0; i < pop.quant_pessoas; i++) {
		printf ("\n\n\n\tCadastro de pessoa nº %d", i + 1);
		printf ("\n\nNome da pessoa: ");
		scanf (" %[^\n]", &pop.pessoas[i].nome);
		printf ("\n\nInforme a idade da pessoa (anos completos): ");
		scanf ("%d", &pop.pessoas[i].idade);
		printf ("\n\nInforme o peso da pessoa (kg): ");
		scanf ("%f", &pop.pessoas[i].peso);
		clear();
	}
	
	//Exibição
	printf ("\n\n\tBase de Dados - Cadastro de Pessoas");
	for (i = 0; i < pop.quant_pessoas; i++) {
		printf ("\n\n\n\nCadastro de Pessoa nº %d", i + 1);
		printf ("\n\nNome da pessoa: %s", pop.pessoas[i].nome);
		printf ("\n\nIdade da pessoa (anos completos): %d", pop.pessoas[i].idade);
		printf ("\n\nPeso da pessoa (kg): %.2f", pop.pessoas[i].peso);
	}
	
	//Liberação de memória alocada
	free(pop.pessoas);
	
	printf ("\n\n\n\nObrigado por utilizar nosso programa!\n\n\n\n");
	system ("Pause");
	return 0;
}
