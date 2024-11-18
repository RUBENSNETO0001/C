#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int op = 1;
void clear(){
	printf("\n\n\n");
	system("Pause");
	system("cls");
}

int menu(){
	printf("\n\n\t\tMenu\n");
	int i, q = 60;
	
	for(i = 0; i < q; i++){
		printf("-");
	}
	printf("\n\n\n\t\t1 - Cadastrar Novo Aluno");
	printf("\n\n\n\t\t2 - Listar Alunos Cadastros");
	printf("\n\n\n\t\t3 - Pesquisa Aluno");
	printf("\n\n\n\t\t4 - Alterar Cadastro de Aluno");
	printf("\n\n\n\t\t5 - Excluir Cadastro de Aluno");
	printf("\n\n\n\t\t0 - Sair\n");
	for(i = 0; i < q; i++){
		printf("-");
	}
	
	printf("\n\n\nMe informe uma opção");
	scanf("%d", &op);
}

void cadastrarAluno(){
	
}
void listaraluno(){
	
}
void pesquisarAluno(){
	
}
void alterarAluno(){
	
}
void excluirAluno(){
	
}

int main( int argc, char *argv[]){
	system("cls");
	setlocale(LC_ALL,"portuguese");
	
	printf("\n\n\t\tSistema de casdatro de aluno");
	printf("\n\n\nPressione qualquer tecla para entrar no menu principal");
	clear();
	
	while(op != 0){
	op = menu();
		switch(op){
			
		case 1:
		cadastrarAluno();
		break;
			
		case 2:
		listaraluno();
		break;
		
		case 3:
		pesquisarAluno();
		break;
			
		case 4:
		alterarAluno();
		break;
		
		case 5:
		excluirAluno();
		break;
		
		case 0:
		system("cls");
		printf("\n\n\nVoce optou a sair do programa, ate um dia");
		clear();
		exit(0);
		break;
		
		default: 
		printf("\n\n\nInforme uma opção valida!!");
		}
		system("cls");
	}
		
	return 0;
}
