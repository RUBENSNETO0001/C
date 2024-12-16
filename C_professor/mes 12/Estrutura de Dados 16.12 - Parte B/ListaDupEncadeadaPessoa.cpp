#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

//Estrutura pessoa - struct - lista duplamente encadeada
typedef struct pessoa {
	int id;
	char nome[80];
	int idade;
	float peso;
	struct pessoa* anterior;
	struct pessoa* proximo;
} Pessoa; //Fim da struct pessoa com typedef

//Função criarLista()
Pessoa* criarLista() {
	return NULL;
}//Fim da função criarLista()

//Função criarNo() - apenas cria um novo nó
Pessoa* criarNo(int id, char* nome, int idade, float peso) {
	Pessoa* novaPessoa = (Pessoa*)malloc(sizeof(Pessoa));
	if (!novaPessoa) {
		printf("Erro ao alocar memória! Não será possível inserir novo elemento na lista!\n");
		exit(1);
	} 
	novaPessoa->id = id;
	strcpy(novaPessoa->nome, nome);
	novaPessoa->idade = idade;
	novaPessoa->peso = peso;
	novaPessoa->anterior = NULL;
	novaPessoa->proximo = NULL;
	return novaPessoa;
}//Fim da função criarNo()

//Função listaVazia()
int listaVazia(Pessoa* lista) {
	return lista == NULL;
}//Fim da função listaVazia()

//Função inserirInicio() - insere elemento no início da lista duplamente encadeada
Pessoa* inserirInicio(Pessoa* lista, int id, char* nome, int idade, float peso) {
	Pessoa* novaPessoa = criarNo(id, nome, idade, peso);
	novaPessoa->proximo = lista;
	if (lista != NULL) {
		lista->anterior = novaPessoa;
	}
	return novaPessoa;
}//Fim da função inserirInicio()

//Função inserirFim()
Pessoa* inserirFim(Pessoa* lista, int id, char* nome, int idade, float peso) {
	Pessoa* novaPessoa = criarNo(id, nome, idade, peso);
	if (lista == NULL) {
		return novaPessoa;
	}
	Pessoa* aux = lista;
	while (aux->proximo != NULL) {
		aux = aux->proximo;
	}
	aux->proximo = novaPessoa;
	novaPessoa->anterior = aux;
	return lista;
}//Fim da função inserirFim()

//Procedimento imprimirListaDireta() - ordem direta
void imprimirListaDireta(Pessoa* lista) {
	if (listaVazia(lista)) {
		printf ("\n\n\nA lista está vazia!");
		return;
	}
	Pessoa* aux = lista;
	printf ("\n\n\nLista na Ordem Direta:\n");
	while (aux != NULL) {
		printf ("\n\nId: %d.\nNome: %s.\nIdade: %d.\nPeso(kg): %.2f.\n\n", 
			aux->nome, aux->idade, aux->peso);
		aux = aux->proximo;
	}
}//Fim do procedimento imprimirListaDireta() 

//Procedimento imprimirListaInversa() - ordem inversa
void imprimirListaInversa(Pessoa* lista) {
	if (listaVazia(lista)) {
		printf ("\n\n\nA lista está vazia!");
		return;
	}
	Pessoa* aux = lista;
	
	while (aux->proximo != NULL) 
		aux = aux->proximo;
	
	printf ("\n\n\nLista na Ordem Inversa: ");
	while (aux != NULL) {
		printf ("\n\nId: %d.\nNome: %s.\nIdade: %d.\nPeso(kg): %.2f.\n\n", 
			aux->nome, aux->idade, aux->peso);
		aux = aux->anterior;
	}
}//Fim do procedimento imprimirListaInversa()

//Função buscarPorId() - Supondo que não exista repetição de id
Pessoa* buscarPorId(Pessoa* lista, int idBusca) {
	Pessoa* aux= lista;
	while (aux != NULL) {
		if (aux->id == idBusca)
			return aux;
		aux = aux->proximo;
	}
	return NULL;
}//Fim da função buscarPorId()

//Função removerPorId()
Pessoa* removerPorId(Pessoa* lista, int id) {
	Pessoa* aux = buscarPorId(lista, id);
	
	if (aux == NULL) {
		printf ("\n\n\nPessoa/Registro não localizado na lista!");
		return lista;
	}
	
	if (aux->anterior != NULL) {
		aux->anterior->proximo = aux->proximo;
	} else {
		lista = aux->proximo;
	}
	
	if (aux->proximo != NULL) {
		aux->proximo->anterior = aux->anterior;	
	}
	
	free(aux);
	printf ("\n\n\nRegistro/Pessoa com id %d removido com sucesso!\n\n", id);
	return lista;
}//Fim da função buscarPorId()


//Função liberarLista()
Pessoa* liberarLista(Pessoa* lista) {
	Pessoa* aux = lista;
	while (aux != NULL) {
		Pessoa* proximaPessoa = aux->proximo;
		free(aux);
		aux = proximaPessoa;
	}
	printf ("\n\n\nLista liberada com sucesso!\n\n");
	return NULL;
}//Fim da função liberarLista()

//1 - Inserir no meio da lista????

//Montar a main()


