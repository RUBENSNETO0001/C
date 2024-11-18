#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Procedimento clear()
void clear() {
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");
}//Fim de clear

//Função menu()
int menu () {
	int op;
	printf ("\n\n\t\tMenu");
	printf ("\n\n\n1 - Cadastrar Novo Aluno");
	printf ("\n\n2 - Listar Alunos Cadastrados");
	printf ("\n\n3 - Pesquisar Aluno");
	printf ("\n\n4 - Alterar Cadastro de Aluno");
	printf ("\n\n5 - Excluir Cadastro de Aluno");
	printf ("\n\n0 - Sair");
	printf ("\n\n\nInforme a opção desejada: ");
	scanf ("%d", &op);
	return op;
}//Fim da função menu()

//cadastrarAluno()
void cadastrarAluno() {
	
}//Fim da cadastrarAluno()

//listarAlunos();
void listarAlunos() {
	
}//Fim da listarAlunos();

//pesquisarAluno();
void pesquisarAluno() {
	
}//Fim da pesquisarAluno()

//alterarCadastro();
void alterarCadastro() {
	
}//Fim da alterarCadastro();

//excluirCadastro();
void excluirCadastro() {
	
}//Fim da excluirCadastro();

//Início main()
int main (int argc, char *argv[]) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int op = 1;
	printf ("\n\n\n\t\t\tSistema Acadêmico X!");
	clear();
	while (op != 0) {
		
		op = menu();
		//Início switch()
		switch (op) {
			
			case 1:
				system ("cls");
				cadastrarAluno();
				break;
			
			case 2:
				system ("cls");
				listarAlunos();
				break;
			
			case 3:
				system ("cls");
				pesquisarAluno();
				break;
			
			case 4:
				system ("cls");
				alterarCadastro();
				break;
			
			case 5:
				system ("cls");
				excluirCadastro();
				break;
			
			case 0:
				system ("cls");
				printf ("\n\nVocê optou em sair do nosso programa!");
				clear();
				break;
			
			default:
				printf ("\n\nInforme uma opção válida!");
		}//Fim switch()
		system ("cls");
	}	
	printf ("\n\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;
}//Fim da main()
