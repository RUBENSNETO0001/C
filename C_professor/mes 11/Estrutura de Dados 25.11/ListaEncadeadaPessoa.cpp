//Código imcompleto e não revisado!!!

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//struct - lista encadeada pessoa
struct pessoa {
	int id;
	char nome[80];
	float peso;
	int idade;
	struct pessoa* prox;
};//Fim da struct pessoa

typedef struct pessoa Pessoa;

//Função criarLista()
Pessoa* criarLista() {
	return NULL;
}//Fim da função criarLista()

//Função inserirLista() - inserir um novo elemento na lista
Pessoa* inserirLista(Pessoa* p, int novoId, char *novoNome, float novoPeso, int novaIdade) {
	pessoa* novo = (pessoa*) malloc(sizeof(Pessoa*));
	novo->id = novoId;
	strcpy (novo->nome, novoNome);
	novo->peso = novoPeso;
	novo->idade = novaIdade;
	novo->prox = p;
}//Fim da função inserirLista()

//Função imprimirLista()
void imprimirLista(Pessoa* p) {
	pessoa* pe;
	for (pe = p; pe != NULL; pe = pe->prox) {
		printf ("\n\n\n\tCadastro de Pessoa");
		printf ("\n\n\nId da pessoa: %d.", pe->id);
		printf ("\n\nNome da pessoa: %s.", pe->nome);
		printf ("\n\nPeso da pessoa(kg): %.2f.", pe->peso);
		printf ("\n\nIdade da pessoa(anos completos): %d.", pe->idade);
	}	
}//Fim da função imprimirLista()

//Função buscaElemento()
Pessoa* buscaElemento(Pessoa* p, int codBusca) {
	pessoa* pe;
	for (pe = p; pe != NULL; pe = pe->prox) {
		if (pe->id == codBusca) {
			return pe;
		}
	}
	return NULL;
}//Fim da função buscaElemento()

//Função listaVazia()
int listaVazia(Pessoa* p) {
	if (p == NULL)
		return 0;
	return 1;
}//Fim da listaVazia()

//Função removerElemento()
Pessoa* removerElemento(Pessoa* p, int codBusca) {
	Pessoa* pe  = p;
	Pessoa* ant = NULL;
	
	while (pe != NULL && pe->id != codBusca) {
		ant = pe;
	}
}//Fim da função removerElemento()
