#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//A capacidade da pilha ser? de 100 unidades
#define MAX 100

//Struct Livro
typedef struct {
	int codLivro;
	char nome[100];
	char issn[10];
	char autor[10];
	int quantPaginas;
	float preco;
} Livro;//Fim da struct Livro

//Struct Pilha
typedef struct {
	Livro livros[MAX];
	int topo;
} Pilha;//Fim da struct Pilha

//Procedimento inicializarPilha()
void inicializarPilha(Pilha *p) {
	p->topo = -1;
}//Fim do procedimento inicializarPilha()

//Fun??o pilhaVazia()
int pilhaVazia (Pilha *p) {
	return p->topo == -1;
}//Fim da fun??o pilhaVazia()

//Fun??o pilhaCheia()
int pilhaCheia (Pilha *p) {
	return p->topo == MAX - 1;
}//Fim da fun??o pilhaCheia()

//Procedimento empilhar()
void empilhar(Pilha *p, Livro livro) {
	if (pilhaCheia(p)) {
		printf ("\n\nN?o ? poss?vel empilhar! A pilha est? cheia!");
		return;
	}
	//Empilhamento
	p->livros[++(p->topo)] = livro;
}//Fim do procedimento empilhar()

//Fun??o desempilhar()
Livro desempilhar (Pilha *p) {
	if (pilhaVazia(p)) {
		printf ("\n\nA pilha est? vazia!");
		Livro livroHip = {0, "", "", "", 0, 0.0};
		return livroHip;
	}
	return p->livros[(p->topo)--];
}//Fim da fun??o desempilhar()

//Fun??o topoPilha() - retornar o elemento que est? no topo
Livro topoPilha (Pilha *p) {
	if (pilhaVazia(p)) {
		printf ("\n\nA pilha est? vazia!");
		Livro livroHip = {0, "", "", "", 0, 0.0};
		return livroHip;
	}
	return p->livros[p->topo];
}//Fim da fun??o topoPilha()

//Fun??o tamanhoPilha()
int tamanhoPilha (Pilha *p) {
	if (pilhaVazia(p)) {
		printf ("\n\nA pilha est? vazia!");
		return 0;
	}
	return p->topo + 1;
}//Fim da fun??o tamanhoPilha()

//Procedimento exibirPilha()
void exibirPilha (Pilha *p) {
	if (pilhaVazia(p)) {
		printf ("\n\nA pilha est? vazia!");
		return;
	}
	printf ("\n\n\tLivros na Pilha: ");
	for (int i = p->topo; i >= 0; i--) {
		printf ("\n\n\n\nC?digo: %d.", p->livros[i].codLivro);
		printf ("\n\nNome: %s.", p->livros[i].nome);
		printf ("\n\nISSN: %s.", p->livros[i].issn);
		printf ("\n\nAutor: %s.", p->livros[i].autor);
		printf ("\n\nQuantidade de P?ginas: %d.", p->livros[i].quantPaginas);
		printf ("\n\nPre?o atual: R$ %.2f.", p->livros[i].preco);
	}
}//Fim do procedimento exibirPilha()

//Fun??o buscarPilha()

//Fun??o compararElementos() - com base no c?digo - Utilizar o campo codLivro

//E no processo de desempilhamento como ? feito a limpeza do 
//elemento da mem?ria - libera??o de mem?ria

//Fun??o para buscar repeti??o de "livros" na pilha
//1. Verifica topo
//2. Compara topo com os outros elementos
//3. Decrementa topo
//4. Compara topo com os outros elementos

//Fun??o para alterar valores de atributos de uma struct livro da pilha - ap?s
//realizar a buscarPilha() ou buscarLivro()


