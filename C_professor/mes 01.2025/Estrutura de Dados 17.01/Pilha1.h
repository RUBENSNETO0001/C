//CApacidade da pilha e 100 unidades
#define MAX 100

//aqui vamos fazer uma estrutura onde oque o livro vai ter
//struct livro
 typedef struct{
 	int codLivro;
 	char nome[100];
 	char issn[20];
 	char autor[29];
 	int qtdPagina;
 	float preco;
 }Livro; //struct livro
 

typedef struct{
	Livro livro[MAX];
	int top;
}Pilha;

//Procedimento inicializarFila()
void inializarFila(Pilha *pilha){
	pilha -> top = -1;
}//Procedimento inicializarFila()

//Procedimento pilhaVazia()
int pilhaVazia(Pilha *pilha){
	return pilha -> top = -1;
}//Procedimento pilhaVazia()

//Procedimento pilhaCheia()
int pilhaCheia(Pilha *pilha){
	return pilha -> top == MAX - 1;
}//Procedimento pilhaCheia()

//Procedimento pilhaeMPILHA()
void empilhaPilha(Pilha *pilha,Livro *livro){
	if(pilhaCheia(pilha)){
		printf("Pilha esta cheia");
		return;// se o elemento pilha esta cheia ai vai retorna sem mata o programa
	}
	pilha -> livro[++(pilha->top)] = livro;
}
//Procedimento pilhaeMPILHA()

//Procedimento desempilhar()
Livro desenpilhar(Pilha *pilha){
	if(pilhaVazia(pilha)){
		printf("Pilha esta vazia");
		Livro livrosNaoExistentes = {0,"","","",0,0.0};
		return livrosNaoExistentes;
	}
	return pilha -> livro[(pilha->top)--];
}//Procedimento desempilhar()
//Procedimento tamanhoPilha()
Livro topoPilha(Pilha *pilha){
	if(pilhaVazia(pilha)){
		printf("Pilha esta vazia");
		livrosNaoExistentes = {0,"","","",0,0.0};
		return livrosNaoExistentes;
	}
	return pilha -> livro[pilha -> top];
}//Procedimento tamanhoPilha()

Livro tamanhoPilha(Pilha *pilha){
	if(pilhaVazia(pilha)){
		printf("Pilha esta vazia");
		livrosNaoExistentes = {0,"","","",0,0.0};
		return livrosNaoExistentes;
	}
	return pilha -> top ++;// O do professor esta como +1
}

//Buscar na pilha
Livro 

//comparar elementos

//Procedimento exibir()
void exibirLivro(Pilha *pilha, Livro *livro){
	if(pilhaVazia(pilha)){
		printf("Pilha esta vazia");
		return;
	}
	printf("\n\n\tLivros na pilha: ");
	for(int i = p-top; i >= 0; i--){
		printf ("\n\n\n\nNome do livro: %s.", pilha->livro[i].nome);
		printf ("\n\nCodigo do livro: %d.", pilha->livro[i].codLivro);
		printf ("\n\nIssn do livro: %s.",pilha->livro[i].issn);
		printf ("\n\nAutor do livro: %s.", pilha->livro[i].autor);
		printf ("\n\nQuantidade de paginas do livro: %d.",pilha->livro[i].qtdPagina);
		printf ("\n\nPreço do livro: %.2f.", pilha->livro[i].preco);
		
	}
}//Procedimento exibir()
