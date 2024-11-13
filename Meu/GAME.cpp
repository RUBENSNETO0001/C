#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int inicio();
int login();

//o inicializador do programa o main();
int main(void){
	//começa com resete e a habilitação da escrita com simbolos
	system("cls");
	setlocale(LC_ALL,"portuguese");
	
	//home do game;
	inicio();
	system("Pause");
	system("cls");
	
	//login(nome e tag inicial do jogador);
	login();
	
	return 0;
}

//inicio com a logo do game;
int inicio(){
	//so vou ultilizar aqui mesmo;
	int i;
	
	for(i = 0; i <1200; i++){printf("*");}
	for(i = 0; i < 120; i++){printf("=");}
	
	//logo do game;
		printf("\n                        `¶¶¶¶``¶¶``¶¶``¶¶¶¶``¶¶¶¶¶```¶¶¶¶``¶¶```¶`¶¶¶¶¶``¶¶``````¶¶¶¶``¶¶¶¶¶``¶¶¶¶¶\n");
		printf("                        ¶¶`````¶¶``¶¶`¶¶``¶¶`¶¶``¶¶`¶¶``¶¶`¶¶```¶`¶¶``¶¶`¶¶`````¶¶``¶¶`¶¶``¶¶`¶¶```\n");
	    printf("                        `¶¶¶¶``¶¶¶¶¶¶`¶¶¶¶¶¶`¶¶``¶¶`¶¶``¶¶`¶¶`¶`¶`¶¶¶¶¶``¶¶`````¶¶¶¶¶¶`¶¶``¶¶`¶¶¶¶`\n");
		printf("                        ````¶¶`¶¶``¶¶`¶¶``¶¶`¶¶``¶¶`¶¶``¶¶`¶¶¶¶¶¶`¶¶``¶¶`¶¶`````¶¶``¶¶`¶¶``¶¶`¶¶```\n");
		printf("                        `¶¶¶¶``¶¶``¶¶`¶¶``¶¶`¶¶¶¶¶```¶¶¶¶```¶¶`¶¶`¶¶¶¶¶``¶¶¶¶¶¶`¶¶``¶¶`¶¶¶¶¶``¶¶¶¶¶\n");
		
	for(i = 0; i < 120; i++){printf("=");}
	for(i = 0; i <1080; i++){printf("*");}
	
	printf("\n                                      ");
}

//parte onde o usuario vai colocar o nome do seu boneco ou boneca;
int login(){
	char nome[30];
	int apelido;
	int i;
	//nome do user;
	for(i = 0; i < 1080; i++){printf("*");}
	for(i = 0; i < 120; i++){printf("=");}
	printf("\n\n\n                                                   ");
	printf("Digite o username ");
	
	printf("\n                                  ----------------------------------------------------");
	printf("\n                                  |                                                  |\n");
	printf("                                                    	");
	gets(nome);	
	printf("                                  |                                                  |");
	printf("\n                                  ----------------------------------------------------\n");
	printf("\n\n\n");
	
	for(i = 0; i < 120; i++){printf("=");}
	for(i = 0; i < 840; i++){printf("*");}
	printf("\n                                        ");
	system("Pause");
	system("cls");
	
	//apelido secundario, eu so copiei o de cima e modifiquei a pergunta;
	//não gostei desse sistema de escreve a tag, o cara pode escreve que e um matador de dragao ai quebra tudo, quero da 3 tag iniciais ao jogador.
	for(i = 0; i < 840; i++){printf("*");}
	for(i = 0; i < 120; i++){printf("=");}
	printf("\n\n\n                                     ");
	printf("Digite o numero do apelido(sub nome de campo):");
	//mostra as opcoes para o usuario. botei 3 porque fica melhor para mim;
	printf("\n\n                                           ");
	printf("-[1.(o guerreiro ink);]-");
	printf("\n                                           ");
	printf("-[2.(o invocador da lua);]-");
	printf("\n                                           ");
	printf("-[3.(necromante amaldicoado);]-");
	
	printf("\n                                  ----------------------------------------------------");
	printf("\n                                  |                                                  |\n");
	printf("                                                            ");
	scanf("%d", &apelido);	
	printf("                                  |                                                  |");
	printf("\n                                  ----------------------------------------------------\n");
	printf("\n\n\n");
	
	for(i = 0; i < 120; i++){printf("=");}
	for(i = 0; i < 840; i++){printf("*");}
	printf("\n                                        ");
	system("Pause");
	
	//quando usuario adiquiri o titulo, tag ou sei la como e chamado;
	if(apelido == 1){
		system("cls");
		//mensagem para o usuario;
		printf("Seu titulo é : %s, o guerreiro ink.", nome);
	}
	else if(apelido == 2){
		system("cls");
		//mensagem para o usuario;
		printf("Seu titulo é : %s, o invocador da lua.", nome);
	}
	else{
		system("cls");
		//mensagem para o usuario;
		printf("Seu titulo é : %s, o invocador da lua.", nome);
	}
}

