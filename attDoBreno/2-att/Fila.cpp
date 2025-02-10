#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int nextId = 1; // Começa com 1, usado para IDs auto-incrementáveis
#define MAX 100

//Estrutura Aluno
typedef struct {
	int id; // Identificador único do aluno (Sarah lavyne)
	char nome[MAX];
	int matricula;
	int codCurso;
	char tipoCurso[MAX];
	int idade;
	float coefMediaGeral; //M�dia geral de todas as notas
} Aluno; //Fim da estrutura Aluno

//Estrutura No da Fila
typedef struct No {
	Aluno aluno;
	struct No* prox; //Pr�ximo No da fila
} No; //Fim da estrutura No

//Estrutura da Fila
typedef struct {
	No* frente; //primeiro
	No* tras; //�ltimo
} Fila;//Fim da estrutura Fila

//Procedimento inicializarFila()
void inicializarFila(Fila* fila) {
	fila->frente = NULL; //primeiro
	fila->tras = NULL; //�ltimo
}//Fim do procedimento inicializarFila()

//Fun��o filaVazia()
int filaVazia (Fila* fila) {
	return fila->frente == NULL;
}//Fim da fun��o filaVazia()

//Procedimento enfileirar()
void enfileirar (Fila* fila, Aluno aluno) {
	aluno.id = nextId++; // Define o ID do aluno e incrementa (sarah lavyne)
	No* novoNo = (No*) malloc(sizeof(No));
	if (novoNo == NULL) {
		printf ("\n\nErro de aloca��o de mem�ria!\n\n");
		exit(1);
	}
	novoNo->aluno = aluno;
	novoNo->prox = NULL;
	
	if (filaVazia(fila)) {
		fila->frente = novoNo; //primeiro
	} else {
		fila->tras->prox = novoNo;
	}
	
	fila->tras = novoNo; //�ltimo
	printf ("\n\nNovo aluno enfileirado com sucesso!\n\n");
}//Fim do procedimento enfileirar()

//Fun��o desenfileirar()
Aluno desenfileirar (Fila* fila) {
	if (filaVazia(fila)) {
		printf ("\n\nA fila est� vazia!\n\n");
		exit(1);
	}
	
	No* temp = fila->frente; //Endere�o do primeiro na fila
	Aluno alunoRemovido = temp->aluno; //Dados do primeiro - struct
	fila->frente = temp->prox;
	
	if (fila->frente == NULL) {
		fila->tras = NULL;
	}
	
	free(temp);
	return alunoRemovido;		
}//Fim da fun��o desenfileirar()

//Procedimento exibirFila()
void exibirFila(Fila* fila) {
	if (filaVazia(fila)) {
		printf ("\n\nA fila est� vazia!\n\n");
		return;
	}
	
	No* atual = fila->frente;
	printf ("\n\n\nRelat�rio da Fila");
	while (atual != NULL) {
		Aluno alunoAtual = atual->aluno;
		printf("\n\n\n\nID do aluno: %d.", alunoAtual.id);  //Sarah lavyne
		printf ("\n\n\n\nNome do aluno: %s.", alunoAtual.nome);
		printf ("\n\nN�mero da matr�cula: %d.", alunoAtual.matricula);
		printf ("\n\nC�digo do curso: %d.", alunoAtual.codCurso);
		printf ("\n\nTipo do curso: %s.", alunoAtual.tipoCurso);
		printf ("\n\nIdade: %d.", alunoAtual.idade);
		printf ("\n\nM�dia geral de notas: %.2f.", alunoAtual.coefMediaGeral);
		atual = atual->prox;
	}
}//Fim do procedimento exibirFila()


