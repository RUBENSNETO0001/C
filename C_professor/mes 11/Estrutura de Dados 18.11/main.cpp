#include <stdio.h>
#include <locale.h>
#include <stdlib.h>//Estrutura Aluno

struct Aluno {
	char nome[80];
	int idade;
	float peso;
};//Fim de Aluno

//Estrutura pop(população)
struct Pop {
	struct Aluno *alunos; //vetor -> "aproximadamente" um array
	//int quant_alunos;	
};//Fim de Pop

struct Pop pop;

int index = 0; //Indexador dos cadastros dos alunos

//Procedimento clear()
void clear() {
	printf ("\n\n\n");
	system ("Pause");
	system ("cls");
}//Fim de clear

//alocMemoria()
void alocMemoria () {
	
}

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
	system ("cls");
	printf ("\n\n\t\tCadastrar Novo Aluno");
	printf ("\n\nNome do aluno: ");
	scanf (" %[^\n]", &pop.alunos[index].nome);
	printf ("\n\nInforme a idade do aluno (anos completos): ");
	scanf ("%d", &pop.alunos[index].idade);
	printf ("\n\nInforme o peso da pessoa (kg): ");
	scanf ("%f", &pop.alunos[index].peso);
	index++;
	clear();
}//Fim da cadastrarAluno()

//listarAlunos();
void listarAlunos() {
	printf ("\n\nAlunos Cadastrados");
	for (int i = 0; i < index; i++) {
		printf ("\n\n\n\nNome do aluno: %s", pop.alunos[i].nome);
		printf ("\n\nIdade do aluno (anos completos): %d", pop.alunos[i].idade);
		printf ("\n\nPeso do aluno (kg): %.2f", pop.alunos[i].peso);
	}
	clear();
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
	pop.alunos = (struct Aluno *) malloc(10 * sizeof(struct Aluno)); //Ineficiente???
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
