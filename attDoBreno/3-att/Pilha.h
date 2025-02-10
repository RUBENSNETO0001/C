#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//A capacidade da pilha será de 100 unidades
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

//Função pilhaVazia()
int pilhaVazia (Pilha *p) {
	return p->topo == -1;
}//Fim da função pilhaVazia()

//Função pilhaCheia()
int pilhaCheia (Pilha *p) {
	return p->topo == MAX - 1;
}//Fim da função pilhaCheia()

//Procedimento empilhar()
void empilhar(Pilha *p, Livro livro) {
	if (pilhaCheia(p)) {
		printf ("\n\nNão é possível empilhar! A pilha está cheia!");
		return;
	}
	//Empilhamento
	p->livros[++(p->topo)] = livro;
}//Fim do procedimento empilhar()

//Função desempilhar()
Livro desempilhar (Pilha *p) {
	if (pilhaVazia(p)) {
		printf ("\n\nA pilha está vazia!");
		Livro livroHip = {0, "", "", "", 0, 0.0};
		return livroHip;
	}
	return p->livros[(p->topo)--];
}//Fim da função desempilhar()

//Função topoPilha()
Livro topoPilha (Pilha *p) {
	if (pilhaVazia(p)) {
		printf ("\n\nA pilha está vazia!");
		Livro livroHip = {0, "", "", "", 0, 0.0};
		return livroHip;
	}
	return p->livros[p->topo];
}//Fim da função topoPilha()

//Função tamanhoPilha()
int tamanhoPilha (Pilha *p) {
	if (pilhaVazia(p)) {
		printf ("\n\nA pilha está vazia!");
		return 0;
	}
	return p->topo + 1;
}//Fim da função tamanhoPilha()

//Procedimento exibirPilha()
void exibirPilha (Pilha *p) {
	if (pilhaVazia(p)) {
		printf ("\n\nA pilha está vazia!");
		return;
	}
	printf ("\n\n\tLivros na Pilha: ");
	for (int i = p->topo; i >= 0; i--) {
		printf ("\n\n\n\nCódigo: %d.", p->livros[i].codLivro);
		printf ("\n\nNome: %s", p->livros[i].nome);
		printf ("\n\nISSN: %s", p->livros[i].issn);
		printf ("\n\nAutor: %s", p->livros[i].autor);
		printf ("\n\nQuantidade de Páginas: %d", p->livros[i].quantPaginas);
		printf ("\n\nPreço atual: R$ %.2f", p->livros[i].preco);
	}
}//Fim do procedimento exibirPilha()

//Função carregarLivro()
Livro carregarLivro(void) {
	Livro l;
	printf ("\n\n\tCadastro de Livro - Empilhamento");
	printf ("\n\n\nInforme o código do livro: ");
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
	printf ("\n\nInforme a quantidade de páginas do livro: ");
	scanf ("%d", &l.quantPaginas);
	printf ("\n\nInforme o preço atual (R$) do livro: ");
	scanf ("%f", &l.preco);
	return l;
}//Fim da função carregarLivro

//Função buscarPilha()
void buscarPilha(Pilha *p){
	printf ("\n\n\tCadastro de Livro - buscarPilha");
	if(pilhaVazia(p)){
		printf("\n\nPilha Está vazia");
		return;
	}
	p -> Livro[(p->topo)--];
	
	if(buscar!=NULL){
		printf ("\n\n\n\nCódigo: %d.", p->livros[p].codLivro);
		printf ("\n\nNome: %s",p->livros[p].nome);
		printf ("\n\nISSN: %s", p->livros[p].issn);
		printf ("\n\nAutor: %s", p->livros[p].autor);
		printf ("\n\nQuantidade de Páginas: %d", p->livros[p].quantPaginas);
		printf ("\n\nPreço atual: R$ %.2f", p->livros[p].preco);
		return;
	}
	
}

//Função compararElementos() - com base no código
Livro compararElementos(Pilha *p){
	if(pilhaVazia(P)){
		printf("\n\nPilha está vazia!!");
		return;
	}
	
	for(int i = 0; i <= p->livros[(p->topo)--]; i++){
		if(p->topo=p->livros.codLivro == p->livros.codLivro){
			printf("\n\nLivro repetido!!");
			return p->livros[(p->topo)]=Livro;
		}
	}
}


