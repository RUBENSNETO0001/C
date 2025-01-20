#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include "Pilha.h"
#include "menus.h"

//In�cio da main()
int main (int argc, char *argv[]) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	Livro inforLivro;
	Pilha pilhaLivro;
	Pilha *p;
	
	int controle = 1, op;
	do { //in�cio do-while()
		op = menu();
		switch (op) {//in�cio do switch()
			case 1: //Criar Pilha
				system("cls");
				inicializarPilha(&pilhaLivro);
				printf("\n\nPilha inicializada");
				break;
			
			case 2: //Empilhar
			//deixa a main mais limpa vou fazer uma fun��o de vai ser inserida no pilha.h para ajuda
				Livro inforLivro = carregadorLivro();
				
				empilhar(&pilhaLivros, inforLivro);
				system("cls");
				printf("\n\nLivro inserido");
				system("Pause");
				break;

			case 3: //Desempilhar
				system("cls");
				printf("\n\n\tVoc� escolheu a fun��o desemmpilhar");
				desempilhar(p);
				system("Pause");
				system("cls");
				break;
			
			case 4: //Exibir Pilhar
				printf("\n\n\tVoc� escolheu a fun��o Exibir Pilha");
				exibirPilha(p);
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
				printf ("\n\n\nInforme uma op��o v�lida");
		} //Fim do switch()
	} while (controle != 0); //fim do-while()
	
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}//Fim da main()
