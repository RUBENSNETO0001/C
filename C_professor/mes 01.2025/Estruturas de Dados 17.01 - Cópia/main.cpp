#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include "Pilha.h"
#include "menus.h"

//Início da main()
int main (int argc, char *argv[]) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	Livro inforLivro;
	Pilha pilhaLivro;
	Pilha *p;
	
	int controle = 1, op;
	do { //início do-while()
		op = menu();
		switch (op) {//início do switch()
			case 1: //Criar Pilha
				system("cls");
				inicializarPilha(&pilhaLivro);
				printf("\n\nPilha inicializada");
				break;
			
			case 2: //Empilhar
			int qtd;
			//deixa a main mais limpa vou fazer uma função de vai ser inserida no pilha.h para ajuda
			// fqzer um menu aonde a ciclo se repete diversas vezes aonde a forma de ciclo seje escolhida sobre o usuario
			printf("\n\nQuantidade de livro a ser colocado");
			scanf("%d", &qtd);
			for(i = 0; i <= qtd; i++){
				inforLivro = carregadorLivro();
				empilhar(&pilhaLivros[i], inforLivro);
				system("cls");
				printf("\n\nLivro inserido");
				system("Pause");
				break;

			case 3: //Desempilhar
				system("cls");
				printf("\n\n\tVocê escolheu a função desemmpilhar");
				desempilhar(&pilhaLivro);
				system("Pause");
				system("cls");
				break;
			
			case 4: //Exibir Pilhar
				printf("\n\n\tVocê escolheu a função Exibir Pilha\n\n");
				exibirPilha(&pilhaLivro);
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
	} while (controle != 0); //fim do-while()
	
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}//Fim da main()
