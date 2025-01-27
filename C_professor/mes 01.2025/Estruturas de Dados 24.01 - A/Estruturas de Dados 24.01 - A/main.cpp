#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include "Pilha.h"
#include "menus.h"

//Início da main()
int main (int argc, char *argv[]) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int controle = 1, op;
	Livro livro1, livro2;
	Pilha pilhaLivros;
	do { //início do-while()
		op = menu();
		switch (op) {//início do switch()
			case 1: //Criar Pilha
				inicializarPilha(&pilhaLivros);
				printf ("\n\n\nPilha inicializada com sucesso!");
				break;
			
			case 2: //Empilhar
				//Criar um laço ou algo semelhante - alterar código - ?
				//Verificar se a pilha já foi inicializada - ?
				clear();
				livro1 = carregarLivro(); //Um só
				livro2 = carregarLivro();
				//Verificar antes se a pilha está cheia - ?
				empilhar(&pilhaLivros, livro1);
				empilhar(&pilhaLivros, livro2);
				printf ("\n\n\nLivro empilhado com sucesso!");
				break;
			
			case 3: //Desempilhar
				//Situação de pilha vazia - ?
				desempilhar(&pilhaLivros);
				break;
			
			case 4: //Exibir Pilhar
				exibirPilha(&pilhaLivros);				
				break;
				
			case 5: //Verificar - Pilha Cheia
				break;
				
			case 6: //Verificar - Pilha Vazia
				break;
				
			case 7: //Exibir Topo
				break;
				
			case 0: //Sair
				break;
			
			default:
				printf ("\n\n\nInforme uma opção válida");
		} //Fim do switch()
		clear();
	} while (controle != 0); //fim do-while()
	
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}//Fim da main()


