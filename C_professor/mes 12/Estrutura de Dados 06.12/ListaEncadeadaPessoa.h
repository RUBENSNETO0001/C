//C�digo imcompleto e n�o revisado!!!

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//struct - lista encadeada pessoa
struct pessoa {
	int id;
	char nome[80];
	float peso;
	int idade;
	struct pessoa* prox;
};//Fim da struct pessoa

typedef struct pessoa Pessoa;

//Fun��o criarLista()
Pessoa* criarLista() {
	return NULL;
}//Fim da fun��o criarLista()

//Fun��o inserirLista() - inserir um novo elemento na lista
Pessoa* inserirLista(Pessoa* p, int novoId, char *novoNome, float novoPeso, int novaIdade) {
	pessoa* novo = (pessoa*) malloc(sizeof(Pessoa*));
	novo->id = novoId;
	strcpy (novo->nome, novoNome);
	novo->peso = novoPeso;
	novo->idade = novaIdade;
	novo->prox = p;
}//Fim da fun��o inserirLista()

//Procedimento imprimirLista()
void imprimirLista(Pessoa* p) {
	pessoa* pe;
	for (pe = p; pe != NULL; pe = pe->prox) {
		printf ("\n\n\n\tCadastro de Pessoa");
		printf ("\n\n\nId da pessoa: %d.", pe->id);
		printf ("\n\nNome da pessoa: %s.", pe->nome);
		printf ("\n\nPeso da pessoa(kg): %.2f.", pe->peso);
		printf ("\n\nIdade da pessoa(anos completos): %d.", pe->idade);
	}	
}//Fim da fun��o imprimirLista()

//Fun��o buscaElemento()
Pessoa* buscaElemento(Pessoa* p, int codBusca) {
	pessoa* pe;
	for (pe = p; pe != NULL; pe = pe->prox) {
		if (pe->id == codBusca) {
			return pe;
		}
	}
	return NULL;
}//Fim da fun��o buscaElemento()

//Fun��o listaVazia()
int listaVazia(Pessoa* p) {
	if (p == NULL)
		return 0;
	return 1;
}//Fim da listaVazia()

//Fun��o removerElemento()
Pessoa* removerElemento(Pessoa* p, int codBusca) {
	Pessoa* pe  = p;
	Pessoa* ant = NULL;
	
	while (pe != NULL && pe->id != codBusca) {
		ant = pe;
		pe = pe->prox;
	}
	
	//Lista est� vazia ou o elemento com codBusca n�o foi localizado na lista
	if (pe == NULL) 
		return p;
	
	//Elemento localizado na lista
	if (ant == NULL) //Elemento removido � o "primeiro" na busca sequencial
		p = pe->prox;
	else
		ant->prox = pe->prox;
		
	free(pe);
	return p;	
}//Fim da fun��o removerElemento()

//Fun��o liberarLista()
Pessoa* liberarLista(Pessoa* p) {
	Pessoa* pe = p;
	while (pe != NULL) {
		Pessoa* p1 = pe->prox;
		free(pe);
		pe = p1;
	}
	return p;	
}//Fim da fun��o liberarLista()

//Fun��o compararListas() - Compara��o com base no id
int compararListas(Pessoa* p1, Pessoa* p2) {
	Pessoa* pe1 = p1;
	Pessoa* pe2 = p2;
	while (pe1 != NULL && pe2 != NULL) {
		if (pe1->id != pe2->id)
			return 0;
		pe1 = pe1->prox;
		pe2 = pe2->prox;
	}
	return pe1 == pe2; //NULL == NULL
}//Fim da fun��o compararListas()

//Fun��o menu()
int menu (void) {
	int op;
	system ("cls");
	printf ("\n\nEste programa manipula lista encadeadas!");
	printf ("\n\n\n\tMenu");
	printf ("\n\n\n1 - Criar Lista Encadeada");
	printf ("\n\n2 - Inserir Registro em Lista Encadeada");
	printf ("\n\n3 - Alterar Registro em Lista Encadeada");
	printf ("\n\n4 - Remover Registro de Lista Encadeada");
	printf ("\n\n5 - Listar Todos os Registros de Lista Encadeada");
	printf ("\n\n6 - Buscar Elemento em Lista Encadeada");
	printf ("\n\n7 - Verificar se Lista Encadeada Vazia");
	printf ("\n\n8 - Liberar Lista Encadeada");
	printf ("\n\n0 - Sair");
	printf ("\n\n\n\nInforme a op��o desejada: ");
	scanf ("%d", &op);
	return op;
}//Fim da fun��o menu()

//1 - Fun��o para verificar repeti��es de id na lista;
//2 - (Mais desafiadora) Fun��o para comparar duas listas com base em um campo definido
//pelo usu�rio;
//3 - Fun��o de ordena��o da lista com base no id - crecente ou decrescente;
//4 - Fun��o de busca bin�ria ap�s ordena��o com base no id;
//5 - Montar a estrutura de cada registro com id auto increment;
//6 - Fun��o para vincular/concatenar duas listas de mesma estrutura em uma lista
//�nica;
//7 - Fun��o para alterar campos de um registro (busca) na lista - editar



