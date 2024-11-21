#include<stdio.h>
#include<stdlib.h>
//a biblioteca e muito necessario para validação de strings. sempre usar isso quando for fazer um codigo com avalidaçaõ de strings;
#include<string.h>
#include<locale.h>
//inicio da main();
int main(void){
	
	//limpar e colocar o setlocale para habilitar os sinais;
	system("cls");
	setlocale(LC_ALL, "portuguese");
	
	//validação de variaveis;
	char confirmacao[3];
	
	//oque eu vou usar para caso verdadeiro;
	int i, j , k;
	int matriz[3][3][3];
	
	//apresentação do programa;
	printf("Olá, Esse programa vai coletar numeros e mostra em uma matriz 3X3X3, ou seja, 3 matriz por 3 vezes.");
	
	//escolha do usuario;
	printf("\nVamos lá (sim ou nao): ");
	gets(confirmacao);
	
	//eu usei o gets, basicamnete vc so colocar o nome da variavel nao precisa fazer no padrao C %s...
	
	/*
	aqui tive que usar o strcmp e o string.h para verificação de string. Fiz do geito que aprende e não funcionou.
	if(confirmacao == "s" ||...){..}
	if(strcmp(confirmacao,"s") == 0  == if(validação(variavel_aonde a informa está," oque a variavel tem que ser") == ser for verdadeira vai ser igual a 0;
	*/
	
	if(strcmp(confirmacao,"s") == 0 ||strcmp(confirmacao,"sim") == 0 || strcmp(confirmacao,"si") == 0 || strcmp(confirmacao,"ss") == 0 ||strcmp(confirmacao,"yes") == 0){
	
		//começo do programa(vai deletar tudo da dela e imprimir tudo a partir de agora depois do Pause);
		printf("\n\n\n");
		system("cls");
		system("Pause");
	
		//Pergunta ao usuario 3 colunas por 3 linhas em 3 camadas ou 3x3x3;(não é nada normal isso);
		system("cls");//ele aqui vai apagar;
		for(i = 0; i <3; i++){
			printf("\nCamada número(%d)\n", i+1);//indicar qual e a camada;
			for(j = 0; j < 3; j++){
				for(k = 0; k < 3; k++){
					printf("Me de numero da linha(%d): ",j+1);//indicar a linha aonde está;
					scanf("%d", &matriz[i][j][k]);
				}
			}
		}
		//mensagem para mostra que esta ja foi feito ao usuario, so para acha que o programa esta rodando;
		printf("Programa 100% feito.");
		system("Pause");
		system("cls");
		
		//resultado;
		printf("Matriz (3x3x3)=[");
		for(i = 0; i <3; i++){
			printf("\n");//espaço entre matrizes;
			for(j = 0; j < 3; j++){
				printf("\n");//espaço entre matrizes;
				for(k = 0; k < 3; k++){
					printf("%d ", matriz[i][j][k]);//imprime o resultado ja dado ao usuario;
				}
			}
		}
			printf("\n];\n\n\n");
			system("pause");
			system("cls");
			//mensagem final.
			printf("Muito obrigado por usar esse programa.\n\n\n");
	}
	else{
		//com o "system("cls")", o programa anterior vai ser apagado para o usuario e so vai ser mostrado a resposta == mensagem final;
		system("cls");
		printf("\n\n\n");
		
		//mensagem final, caso o usuario não queira usar o programa.
		printf("Muito obrigado por usar esse programa.\n\n\n");
	}
	return 0;
}
