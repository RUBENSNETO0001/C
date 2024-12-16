#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

// Estrutura pessoa - struct - lista duplamente encadeada
typedef struct pessoa
{
	int id;
	char nome[80];
	int idade;
	float peso;
	struct pessoa *anterior;
	struct pessoa *proximo;
} Pessoa; // Fim da struct pessoa com typedef

// Fun��o criarLista()
Pessoa *criarLista()
{
	return NULL;
} // Fim da fun��o criarLista()

// Fun��o criarNo() - apenas cria um novo n�
Pessoa *criarNo(int id, char *nome, int idade, float peso)
{
	Pessoa *novaPessoa = (Pessoa *)malloc(sizeof(Pessoa));
	if (!novaPessoa)
	{
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
} // Fim da fun��o criarNo()

// Fun��o listaVazia()
int listaVazia(Pessoa *lista)
{
	return lista == NULL;
} // Fim da fun��o listaVazia()

// Fun��o inserirInicio() - insere elemento no in�cio da lista duplamente encadeada
Pessoa *inserirInicio(Pessoa *lista, int id, char *nome, int idade, float peso)
{
	Pessoa *novaPessoa = criarNo(id, nome, idade, peso);
	novaPessoa->proximo = lista;
	if (lista != NULL)
	{
		lista->anterior = novaPessoa;
	}
	return novaPessoa;
} // Fim da fun��o inserirInicio()

// Fun��o inserirFim()
Pessoa *inserirFim(Pessoa *lista, int id, char *nome, int idade, float peso)
{
	Pessoa *novaPessoa = criarNo(id, nome, idade, peso);
	if (lista == NULL)
	{
		return novaPessoa;
	}
	Pessoa *aux = lista;
	while (aux->proximo != NULL)
	{
		aux = aux->proximo;
	}
	aux->proximo = novaPessoa;
	novaPessoa->anterior = aux;
	return lista;
} // Fim da fun��o inserirFim()

// procedimento de colocar no meio da lista
Pessoa *inserirMeio(Pessoa *lista, int id, char *nome, int idade, float peso)
{
	Pessoa *novaPessoa = criarNo(id, nome, idade, peso);
	if (lista == NULL)
	{
		return novaPessoa;
	}

	Pessoa *aux = lista;
	while (aux->proximo != NULL)
	{
		aux = aux->proximo;
	}
	aux->proximo = aux;
	aux == aux;

	return lista;
} // fim do procedimento de colocar no meio da lista

// buscar por id
Pessoa *buscarPorId(Pessoa *lista, int idBuscar)
{
	Pessoa *aux = lista;
	while (aux!= NULL){
		if(aux->id == idBuscar)
		return aux;
		aux = aux->proximo;
	}
	return NULL;
}//fim de buscar por id

// remover elemento- nó
Pessoa* removerElementono(Pessoa *lista, int id){
	Pessoa* aux = buscarPorId(lista,id);

	if(aux == NULL){
		printf("\n\n\nNão a essa pessoa na lista");
		return lista;
	}
	if(aux->anterior != NULL){
		aux->anterior->proximo = aux->proximo;
	}
	else{
		lista = lista->proximo;
	}
	if(aux->proximo!=NULL){
		aux->proximo->anterior = aux-> anterior;
	}
	free(aux);

	printf("\n\n\nRegistro /pessoa com id %d removido com sucesso!!", id);
	return lista;
}
// fim de remover elemento- nó

//liberar lista
Pessoa* liberarLista(Pessoa* lista, int id){
	Pessoa* aux = lista;
	while(aux != NULL){
		Pessoa* proximoPessoa = aux->proximo;
		free(aux);
		aux = proximoPessoa;
	}
	printf("\n\n\nA lista liberada com sucesso!!\n");
	return NULL;
}

// fim da liberarlista()

// imprimir lista direta
void imprimirListaDireta(Pessoa *lista)
{
	if (listaVazia(lista))
	{
		printf("\n\n\nA lista está vazia!!");
		return;
	}
	Pessoa *aux = lista;
	printf("\n\n\nLista na ordem direta:\n");
	while (aux != NULL)
	{
		printf("\n\nId: %d.\nNome: %s., \nIdade: %d. , \nPeso(kg): %.2f.\n\n", aux->nome, aux->idade, aux->peso);
		aux = aux->proximo;
	}
} // fim de imprimir lista direta

// imprimir lista inversar
void imprimirListaInversa(Pessoa *lista)
{
	if (listaVazia(lista))
	{
		printf("\n\n\nA lista esta vazia!!");
		return;
	}
	Pessoa *aux = lista;
	while (aux->proximo != NULL)
	{
		aux = aux->proximo;
	}
	printf("\n\n\nLista na ordem Inversa: ");
	while (aux != NULL)
	{
		printf("\n\nId: %d.\nNome: %s., \nIdade: %d. , \nPeso(kg): %.2f.\n\n", aux->nome, aux->idade, aux->peso);
		aux = aux->anterior;
	}
} // fim de imprimir lista inversar

// 1 - Inserir no meio da lista????

// Montar a main()