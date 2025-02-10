#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//A capacidade da pilha ser� de 100 unidades
#define MAX 100

//Struct Livro
typedef struct {
	int codLivro;
	char nome[100];
	char issn[10];
	char autor[30];
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

//Fun��o pilhaVazia()
int pilhaVazia (Pilha *p) {
	return p->topo == -1;
}//Fim da fun��o pilhaVazia()

//Fun��o pilhaCheia()
int pilhaCheia (Pilha *p) {
	return p->topo == MAX - 1;
}//Fim da fun��o pilhaCheia()

//Procedimento empilhar()
void empilhar(Pilha *p, Livro livro) {
	if (pilhaCheia(p)) {
		printf ("\n\nN�o � poss�vel empilhar! A pilha est� cheia!");
		return;
	}
	//Empilhamento
	p->livros[++(p->topo)] = livro;
}//Fim do procedimento empilhar()

//Fun��o desempilhar()
Livro desempilhar (Pilha *p) {
	if (pilhaVazia(p)) {
		printf ("\n\nA pilha est� vazia!");
		Livro livroHip = {0, "", "", "", 0, 0.0};
		return livroHip;
	}
	return p->livros[(p->topo)--];
}//Fim da fun��o desempilhar()

//Fun��o topoPilha()
Livro topoPilha (Pilha *p) {
	if (pilhaVazia(p)) {
		printf ("\n\nA pilha est� vazia!");
		Livro livroHip = {0, "", "", "", 0, 0.0};
		return livroHip;
	}
	return p->livros[p->topo];
}//Fim da fun��o topoPilha()

//Fun��o tamanhoPilha()
int tamanhoPilha (Pilha *p) {
	if (pilhaVazia(p)) {
		printf ("\n\nA pilha est� vazia!");
		return 0;
	}
	return p->topo + 1;
}//Fim da fun��o tamanhoPilha()

//Procedimento exibirPilha()
void exibirPilha (Pilha *p) {
	if (pilhaVazia(p)) {
		printf ("\n\nA pilha est� vazia!");
		return;
	}
	printf ("\n\n\tLivros na Pilha: ");
	for (int i = p->topo; i >= 0; i--) {
		printf ("\n\n\n\nC�digo: %d.", p->livros[i].codLivro);
		printf ("\n\nNome: %s", p->livros[i].nome);
		printf ("\n\nISSN: %s", p->livros[i].issn);
		printf ("\n\nAutor: %s", p->livros[i].autor);
		printf ("\n\nQuantidade de P�ginas: %d", p->livros[i].quantPaginas);
		printf ("\n\nPre�o atual: R$ %.2f", p->livros[i].preco);
	}
}//Fim do procedimento exibirPilha()

//Fun��o carregarLivro()
Livro carregarLivro(void) {
	Livro l;
	printf ("\n\n\tCadastro de Livro - Empilhamento");
	printf ("\n\n\nInforme o c�digo do livro: ");
	scanf ("%d", &l.codLivro);
	fflush(stdin);
	printf ("\n\nInforme o nome do livro: ");
	fgets(l.nome, MAX, stdin);
	fflush(stdin);
	printf ("\n\nInforme o ISSN do livro: ");
	fgets(l.issn, 10, stdin);
	fflush(stdin);
	printf ("\n\nInforme o autor do livro: ");
	fgets(l.autor, 30, stdin);
	fflush(stdin);
	printf ("\n\nInforme a quantidade de p�ginas do livro: ");
	scanf ("%d", &l.quantPaginas);
	printf ("\n\nInforme o pre�o atual (R$) do livro: ");
	scanf ("%f", &l.preco);
	return l;
}//Fim da fun��o carregarLivro

//Fun��o buscarPilha()
void buscarPilha(Pilha *p){
	printf ("\n\n\tCadastro de Livro - buscarPilha");
	if(pilhaVazia(p)){
		printf("\n\nPilha Est� vazia");
		return;
	}
	p -> Livro[(p->topo)--];
	
	if(buscar!=NULL){
		printf ("\n\n\n\nC�digo: %d.", p->livros[p].codLivro);
		printf ("\n\nNome: %s",p->livros[p].nome);
		printf ("\n\nISSN: %s", p->livros[p].issn);
		printf ("\n\nAutor: %s", p->livros[p].autor);
		printf ("\n\nQuantidade de P�ginas: %d", p->livros[p].quantPaginas);
		printf ("\n\nPre�o atual: R$ %.2f", p->livros[p].preco);
		return;
	}
	
}

//Fun��o compararElementos() - com base no c�digo
Livro compararElementos(Pilha *p){
	if(pilhaVazia(P)){
		printf("\n\nPilha est� vazia!!");
		return;
	}
	
	for(int i = 0; i <= p->livros[(p->topo)--]; i++){
		if(p->topo=p->livros.codLivro == p->livros.codLivro){
			printf("\n\nLivro repetido!!");
			return p->livros[(p->topo)]=Livro;
		}
	}
}


