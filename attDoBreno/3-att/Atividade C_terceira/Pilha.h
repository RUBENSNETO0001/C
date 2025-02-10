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

//Fun??o topoPilha()
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
		printf ("\n\nNome: %s", p->livros[i].nome);
		printf ("\n\nISSN: %s", p->livros[i].issn);
		printf ("\n\nAutor: %s", p->livros[i].autor);
		printf ("\n\nQuantidade de P?ginas: %d", p->livros[i].quantPaginas);
		printf ("\n\nPre?o atual: R$ %.2f", p->livros[i].preco);
	}
}//Fim do procedimento exibirPilha()

//Fun??o carregarLivro()
Livro carregarLivro(void) {
	Livro l;
	printf ("\n\n\tCadastro de Livro - Empilhamento");
	printf ("\n\n\nInforme o c?digo do livro: ");
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
	printf ("\n\nInforme a quantidade de p?ginas do livro: ");
	scanf ("%d", &l.quantPaginas);
	printf ("\n\nInforme o pre?o atual (R$) do livro: ");
	scanf ("%f", &l.preco);
	return l;
}//Fim da fun??o carregarLivro

// Função buscarPilha() - Busca um livro pelo código
void buscarPilha(Pilha *p, int codigo) {
    if (pilhaVazia(p)) {
        printf("\n\nPilha está vazia!");
        return;
    }

    printf("\n\n\tBuscando livro na pilha...");
    
    // Percorre a pilha de cima para baixo
    for (int i = p->topo; i >= 0; i--) {
        if (p->livros[i].codLivro == codigo) {
            printf("\n\nLivro encontrado!");
            printf("\n\nCódigo: %d", p->livros[i].codLivro);
            printf("\nNome: %s", p->livros[i].nome);
            printf("\nISSN: %s", p->livros[i].issn);
            printf("\nAutor: %s", p->livros[i].autor);
            printf("\nQuantidade de Páginas: %d", p->livros[i].quantPaginas);
            printf("\nPreço atual: R$ %.2f", p->livros[i].preco);
            return;
        }
    }

    printf("\n\nLivro com código %d não encontrado na pilha.", codigo);
}//Fim da função buscaPilha()


// Função compararElementos() - Verifica se há livros repetidos na pilha
int compararElementos(Pilha *p, int codigo) {
    if (pilhaVazia(p)) {
        printf("\n\nPilha está vazia!");
        return 0; // Retorna 0 indicando que a pilha está vazia
    }

    // Percorre a pilha verificando se há um livro com o mesmo código
    for (int i = 0; i <= p->topo; i++) {
        if (p->livros[i].codLivro == codigo) {
            printf("\n\nLivro com código %d já está na pilha!", codigo);
            return 1; // Retorna 1 indicando que o livro já existe
        }
    }

    return 0; // Retorna 0 indicando que o livro não está na pilha
}




